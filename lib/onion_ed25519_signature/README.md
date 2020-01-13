# onion_ed25519_signature
sign and verify ed25519 key used by Tor

The source and header files mainly comes from Tor source code.

Function in sign.c and verify.c can be used to sign and verify ed25519 key returned by onion command "NEW:ED25519-V3".
Before sign, you need to decode public key(Tor serviceID - ".onion" - last 3) in base32 and private key in base64.

Open function returns 0 if successful, -1 if failed.
