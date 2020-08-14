/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/discovery/v2/ads.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_SERVICE_DISCOVERY_V2_ADS_PROTO_UPB_H_
#define ENVOY_SERVICE_DISCOVERY_V2_ADS_PROTO_UPB_H_

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

struct envoy_service_discovery_v2_AdsDummy;
typedef struct envoy_service_discovery_v2_AdsDummy envoy_service_discovery_v2_AdsDummy;
extern const upb_msglayout envoy_service_discovery_v2_AdsDummy_msginit;


/* envoy.service.discovery.v2.AdsDummy */

UPB_INLINE envoy_service_discovery_v2_AdsDummy *envoy_service_discovery_v2_AdsDummy_new(upb_arena *arena) {
  return (envoy_service_discovery_v2_AdsDummy *)_upb_msg_new(&envoy_service_discovery_v2_AdsDummy_msginit, arena);
}
UPB_INLINE envoy_service_discovery_v2_AdsDummy *envoy_service_discovery_v2_AdsDummy_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_service_discovery_v2_AdsDummy *ret = envoy_service_discovery_v2_AdsDummy_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_service_discovery_v2_AdsDummy_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_service_discovery_v2_AdsDummy_serialize(const envoy_service_discovery_v2_AdsDummy *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_service_discovery_v2_AdsDummy_msginit, arena, len);
}



#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_SERVICE_DISCOVERY_V2_ADS_PROTO_UPB_H_ */