#include "api.h"
#include "openssl/evp.h"

typedef unsigned char GM_SM4_KEY[16];
typedef unsigned char GM_SM4_IV[16];

#ifdef __cplusplus
extern "C"
{
#endif
    API RESULT GM_SM4_rand_key(GM_SM4_KEY key, GM_SM4_IV iv);
    API EVP_CIPHER_CTX *GM_SM4_new_encryptor(const GM_SM4_KEY key, const GM_SM4_IV);
    API EVP_CIPHER_CTX *GM_SM4_new_decryptor(const GM_SM4_KEY key, const GM_SM4_IV);
    API void GM_SM4_free(EVP_CIPHER_CTX *ctx);
    API RESULT GM_SM4_update(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outlen, const unsigned char *in, int inlen);
    API RESULT GM_SM4_final(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outlen);
    API RESULT GM_SM4_encrypt(unsigned char *out, int *outlen, const unsigned char *in, int inlen, const GM_SM4_KEY key, const GM_SM4_IV);
    API RESULT GM_SM4_decrypt(unsigned char *out, int *outlen, const unsigned char *in, int inlen, const GM_SM4_KEY key, const GM_SM4_IV);
#ifdef __cplusplus
}
#endif