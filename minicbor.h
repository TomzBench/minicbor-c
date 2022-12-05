#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

extern "C" {

uint32_t mcbor_enc_bytes_len(const uint8_t *src, uint32_t srclen);

int32_t mcbor_enc_bytes(uint8_t *dst, uint32_t dstlen, const uint8_t *src, uint32_t srclen);

uint32_t mcbor_enc_str_len(const int8_t *src, uint32_t srclen);

int32_t mcbor_enc_str(uint8_t *dst, uint32_t dstlen, const int8_t *src, uint32_t srclen);

int32_t mcbor_dec_bytes(uint8_t *dst, uint32_t dstlen, const uint8_t *src, uint32_t srclen);

int32_t mcbor_dec_str(uint8_t *dst, uint32_t dstlen, const uint8_t *src, uint32_t srclen);

} // extern "C"
