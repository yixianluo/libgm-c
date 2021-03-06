#include "gm.h"
#include "openssl/evp.h"

typedef unsigned char GM_SM3_MD[32];

#ifdef __cplusplus
extern "C"
{
#endif
    // 新建并返回一个SM3上下文。
    // @return 返回SM3上下文。失败返回NULL。
    GM_API EVP_MD_CTX *GM_SM3_new();

    // 释放SM3上下文拥有的资源。
    GM_API void GM_SM3_free(EVP_MD_CTX *ctx);

    // 更新SM3上下文中的数据。
    // @param[in] ctx SM3上下文；
    // @param[in] in 需要更新的数据；
    // @param[in] inlen 数据长度。
    // @return 成功返回1，失败返回0。
    GM_API int GM_SM3_update(EVP_MD_CTX *ctx, const void *in, size_t inlen);

    // 计算并返回SM3哈希值。
    // @param[in] ctx SM3上下文；
    // @param[in] md 用于存储返回的哈希值的变量指针。
    // @return 成功返回1，失败返回0。
    GM_API int GM_SM3_final(EVP_MD_CTX *ctx, GM_SM3_MD md);

    // 直接计算并返回SM3哈希值。
    // @param[in] md 用于存储返回的哈希值的变量指针。
    // @param[in] in 需要计算哈希值的数据；
    // @param[in] inlen 数据长度。
    // @return 成功返回1，失败返回0。
    GM_API int GM_SM3_digest(GM_SM3_MD md, const void *in, size_t inlen);
#ifdef __cplusplus
}
#endif