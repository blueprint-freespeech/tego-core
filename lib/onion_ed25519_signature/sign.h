//
// Created by haojun on 8/1/20.
//

#ifndef ED25519_SIGN_VERIFY_SIGN_H
#define ED25519_SIGN_VERIFY_SIGN_H
#include "ed25519-donna.h"
#include "ed25519-hash.h"
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef unsigned char ed25519_signature[64];
typedef unsigned char ed25519_public_key[32];
typedef unsigned char ed25519_secret_key[32];


int
ed25519_donna_sign(unsigned char *sig, const unsigned char *m, size_t mlen,
                   const unsigned char *sk, const unsigned char *pk);

int ed25519_sign_open(const unsigned char *m, size_t mlen, const ed25519_public_key pk, const ed25519_signature RS);

static void
ed25519_hram(hash_512bits hram, const ed25519_signature RS, const ed25519_public_key pk, const unsigned char *m, size_t mlen) {
    ed25519_hash_context ctx;
    ed25519_hash_init(&ctx);
    ed25519_hash_update(&ctx, RS, 32);
    ed25519_hash_update(&ctx, pk, 32);
    ed25519_hash_update(&ctx, m, mlen);
    ed25519_hash_final(&ctx, hram);
}

#endif //ED25519_SIGN_VERIFY_SIGN_H
