#include <stdio.h>
#include "sign.h"

unsigned char * convert(char *s) {
    size_t src_len = strlen(s);
    if (src_len % 2 != 0) { return NULL; }
    size_t dest_len = src_len / 2;
    unsigned char *result = malloc((sizeof(*result)+1)*dest_len);
    for (size_t i=0, j=0; j<dest_len; i+=2, j++) {
        result[j] = (s[i] % 32 + 9) % 25 * 16 + (s[i + 1] % 32 + 9) % 25;
    }
    result[dest_len+1] = '\0';
    return result;
}

/*
  Public domain by Andrew M. <liquidsun@gmail.com>

  Ed25519 reference implementation using Ed25519-donna
*/

int
ed25519_donna_sign(unsigned char *sig, const unsigned char *m, size_t mlen,
                   const unsigned char *sk, const unsigned char *pk)
{
    ed25519_hash_context ctx;
    bignum256modm r = {0}, S, a;
    ge25519 ALIGN(16) R = {{0}, {0}, {0}, {0}};
    hash_512bits hashr, hram;

    /* r = H(aExt[32..64], m) */
    ed25519_hash_init(&ctx);
    ed25519_hash_update(&ctx, sk + 32, 32);
    ed25519_hash_update(&ctx, m, mlen);
    ed25519_hash_final(&ctx, hashr);
    expand256_modm(r, hashr, 64);

    /* R = rB */
    ge25519_scalarmult_base_niels(&R, ge25519_niels_base_multiples, r);
    ge25519_pack(sig, &R);

    /* S = H(R,A,m).. */
    ed25519_hram(hram, sig, pk, m, mlen);
    expand256_modm(S, hram, 64);

    /* S = H(R,A,m)a */
    expand256_modm(a, sk, 32);
    mul256_modm(S, S, a);

    /* S = (r + H(R,A,m)a) */
    add256_modm(S, S, r);

    /* S = (r + H(R,A,m)a) mod L */
    contract256_modm(sig + 32, S);

    return 1;
}

int
ed25519_sign_open(const unsigned char *m, size_t mlen, const ed25519_public_key pk, const ed25519_signature RS) {
    ge25519 ALIGN(16) R, A;
    hash_512bits hash;
    bignum256modm hram, S;
    unsigned char checkR[32];

    if ((RS[63] & 224) || !ge25519_unpack_negative_vartime(&A, pk))
        return -1;

    /* hram = H(R,A,m) */
    ed25519_hram(hash, RS, pk, m, mlen);
    expand256_modm(hram, hash, 64);

    /* S */
    expand256_modm(S, RS + 32, 32);

    /* SB - H(R,A,m)A */
    ge25519_double_scalarmult_vartime(&R, &A, hram, S);
    ge25519_pack(checkR, &R);

    /* check that R = SB - H(R,A,m)A */
    return ed25519_verify(RS, checkR, 32) ? 1 : 0;
}