/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/core/socket_option.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_CORE_SOCKET_OPTION_PROTO_UPB_H_
#define ENVOY_API_V2_CORE_SOCKET_OPTION_PROTO_UPB_H_

#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/decode.h"
#else
  #include  "upb/decode.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/encode.h"
#else
  #include  "upb/encode.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_api_v2_core_SocketOption;
typedef struct envoy_api_v2_core_SocketOption envoy_api_v2_core_SocketOption;
extern const upb_msglayout envoy_api_v2_core_SocketOption_msginit;

typedef enum {
  envoy_api_v2_core_SocketOption_STATE_PREBIND = 0,
  envoy_api_v2_core_SocketOption_STATE_BOUND = 1,
  envoy_api_v2_core_SocketOption_STATE_LISTENING = 2
} envoy_api_v2_core_SocketOption_SocketState;


/* envoy.api.v2.core.SocketOption */

UPB_INLINE envoy_api_v2_core_SocketOption *envoy_api_v2_core_SocketOption_new(upb_arena *arena) {
  return (envoy_api_v2_core_SocketOption *)_upb_msg_new(&envoy_api_v2_core_SocketOption_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_SocketOption *envoy_api_v2_core_SocketOption_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_core_SocketOption *ret = envoy_api_v2_core_SocketOption_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_core_SocketOption_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_SocketOption_serialize(const envoy_api_v2_core_SocketOption *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_SocketOption_msginit, arena, len);
}

typedef enum {
  envoy_api_v2_core_SocketOption_value_int_value = 4,
  envoy_api_v2_core_SocketOption_value_buf_value = 5,
  envoy_api_v2_core_SocketOption_value_NOT_SET = 0
} envoy_api_v2_core_SocketOption_value_oneofcases;
UPB_INLINE envoy_api_v2_core_SocketOption_value_oneofcases envoy_api_v2_core_SocketOption_value_case(const envoy_api_v2_core_SocketOption* msg) { return (envoy_api_v2_core_SocketOption_value_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(40, 56), int32_t); }

UPB_INLINE upb_strview envoy_api_v2_core_SocketOption_description(const envoy_api_v2_core_SocketOption *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(24, 24), upb_strview); }
UPB_INLINE int64_t envoy_api_v2_core_SocketOption_level(const envoy_api_v2_core_SocketOption *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int64_t); }
UPB_INLINE int64_t envoy_api_v2_core_SocketOption_name(const envoy_api_v2_core_SocketOption *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), int64_t); }
UPB_INLINE bool envoy_api_v2_core_SocketOption_has_int_value(const envoy_api_v2_core_SocketOption *msg) { return _upb_getoneofcase(msg, UPB_SIZE(40, 56)) == 4; }
UPB_INLINE int64_t envoy_api_v2_core_SocketOption_int_value(const envoy_api_v2_core_SocketOption *msg) { return UPB_READ_ONEOF(msg, int64_t, UPB_SIZE(32, 40), UPB_SIZE(40, 56), 4, 0); }
UPB_INLINE bool envoy_api_v2_core_SocketOption_has_buf_value(const envoy_api_v2_core_SocketOption *msg) { return _upb_getoneofcase(msg, UPB_SIZE(40, 56)) == 5; }
UPB_INLINE upb_strview envoy_api_v2_core_SocketOption_buf_value(const envoy_api_v2_core_SocketOption *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(32, 40), UPB_SIZE(40, 56), 5, upb_strview_make("", strlen(""))); }
UPB_INLINE int32_t envoy_api_v2_core_SocketOption_state(const envoy_api_v2_core_SocketOption *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 16), int32_t); }

UPB_INLINE void envoy_api_v2_core_SocketOption_set_description(envoy_api_v2_core_SocketOption *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(24, 24), upb_strview) = value;
}
UPB_INLINE void envoy_api_v2_core_SocketOption_set_level(envoy_api_v2_core_SocketOption *msg, int64_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int64_t) = value;
}
UPB_INLINE void envoy_api_v2_core_SocketOption_set_name(envoy_api_v2_core_SocketOption *msg, int64_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), int64_t) = value;
}
UPB_INLINE void envoy_api_v2_core_SocketOption_set_int_value(envoy_api_v2_core_SocketOption *msg, int64_t value) {
  UPB_WRITE_ONEOF(msg, int64_t, UPB_SIZE(32, 40), value, UPB_SIZE(40, 56), 4);
}
UPB_INLINE void envoy_api_v2_core_SocketOption_set_buf_value(envoy_api_v2_core_SocketOption *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(32, 40), value, UPB_SIZE(40, 56), 5);
}
UPB_INLINE void envoy_api_v2_core_SocketOption_set_state(envoy_api_v2_core_SocketOption *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 16), int32_t) = value;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_API_V2_CORE_SOCKET_OPTION_PROTO_UPB_H_ */
