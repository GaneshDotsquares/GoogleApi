/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/auth/tls.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_AUTH_TLS_PROTO_UPB_H_
#define ENVOY_API_V2_AUTH_TLS_PROTO_UPB_H_

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

struct envoy_api_v2_auth_UpstreamTlsContext;
struct envoy_api_v2_auth_DownstreamTlsContext;
struct envoy_api_v2_auth_CommonTlsContext;
struct envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext;
typedef struct envoy_api_v2_auth_UpstreamTlsContext envoy_api_v2_auth_UpstreamTlsContext;
typedef struct envoy_api_v2_auth_DownstreamTlsContext envoy_api_v2_auth_DownstreamTlsContext;
typedef struct envoy_api_v2_auth_CommonTlsContext envoy_api_v2_auth_CommonTlsContext;
typedef struct envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext;
extern const upb_msglayout envoy_api_v2_auth_UpstreamTlsContext_msginit;
extern const upb_msglayout envoy_api_v2_auth_DownstreamTlsContext_msginit;
extern const upb_msglayout envoy_api_v2_auth_CommonTlsContext_msginit;
extern const upb_msglayout envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_msginit;
struct envoy_api_v2_auth_CertificateValidationContext;
struct envoy_api_v2_auth_SdsSecretConfig;
struct envoy_api_v2_auth_TlsCertificate;
struct envoy_api_v2_auth_TlsParameters;
struct envoy_api_v2_auth_TlsSessionTicketKeys;
struct google_protobuf_BoolValue;
struct google_protobuf_Duration;
struct google_protobuf_UInt32Value;
extern const upb_msglayout envoy_api_v2_auth_CertificateValidationContext_msginit;
extern const upb_msglayout envoy_api_v2_auth_SdsSecretConfig_msginit;
extern const upb_msglayout envoy_api_v2_auth_TlsCertificate_msginit;
extern const upb_msglayout envoy_api_v2_auth_TlsParameters_msginit;
extern const upb_msglayout envoy_api_v2_auth_TlsSessionTicketKeys_msginit;
extern const upb_msglayout google_protobuf_BoolValue_msginit;
extern const upb_msglayout google_protobuf_Duration_msginit;
extern const upb_msglayout google_protobuf_UInt32Value_msginit;


/* envoy.api.v2.auth.UpstreamTlsContext */

UPB_INLINE envoy_api_v2_auth_UpstreamTlsContext *envoy_api_v2_auth_UpstreamTlsContext_new(upb_arena *arena) {
  return (envoy_api_v2_auth_UpstreamTlsContext *)_upb_msg_new(&envoy_api_v2_auth_UpstreamTlsContext_msginit, arena);
}
UPB_INLINE envoy_api_v2_auth_UpstreamTlsContext *envoy_api_v2_auth_UpstreamTlsContext_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_auth_UpstreamTlsContext *ret = envoy_api_v2_auth_UpstreamTlsContext_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_auth_UpstreamTlsContext_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_auth_UpstreamTlsContext_serialize(const envoy_api_v2_auth_UpstreamTlsContext *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_auth_UpstreamTlsContext_msginit, arena, len);
}

UPB_INLINE bool envoy_api_v2_auth_UpstreamTlsContext_has_common_tls_context(const envoy_api_v2_auth_UpstreamTlsContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(12, 24)); }
UPB_INLINE const envoy_api_v2_auth_CommonTlsContext* envoy_api_v2_auth_UpstreamTlsContext_common_tls_context(const envoy_api_v2_auth_UpstreamTlsContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const envoy_api_v2_auth_CommonTlsContext*); }
UPB_INLINE upb_strview envoy_api_v2_auth_UpstreamTlsContext_sni(const envoy_api_v2_auth_UpstreamTlsContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview); }
UPB_INLINE bool envoy_api_v2_auth_UpstreamTlsContext_allow_renegotiation(const envoy_api_v2_auth_UpstreamTlsContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool); }
UPB_INLINE bool envoy_api_v2_auth_UpstreamTlsContext_has_max_session_keys(const envoy_api_v2_auth_UpstreamTlsContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(16, 32)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_auth_UpstreamTlsContext_max_session_keys(const envoy_api_v2_auth_UpstreamTlsContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const struct google_protobuf_UInt32Value*); }

UPB_INLINE void envoy_api_v2_auth_UpstreamTlsContext_set_common_tls_context(envoy_api_v2_auth_UpstreamTlsContext *msg, envoy_api_v2_auth_CommonTlsContext* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), envoy_api_v2_auth_CommonTlsContext*) = value;
}
UPB_INLINE struct envoy_api_v2_auth_CommonTlsContext* envoy_api_v2_auth_UpstreamTlsContext_mutable_common_tls_context(envoy_api_v2_auth_UpstreamTlsContext *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_CommonTlsContext* sub = (struct envoy_api_v2_auth_CommonTlsContext*)envoy_api_v2_auth_UpstreamTlsContext_common_tls_context(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_CommonTlsContext*)_upb_msg_new(&envoy_api_v2_auth_CommonTlsContext_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_UpstreamTlsContext_set_common_tls_context(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_UpstreamTlsContext_set_sni(envoy_api_v2_auth_UpstreamTlsContext *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview) = value;
}
UPB_INLINE void envoy_api_v2_auth_UpstreamTlsContext_set_allow_renegotiation(envoy_api_v2_auth_UpstreamTlsContext *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool) = value;
}
UPB_INLINE void envoy_api_v2_auth_UpstreamTlsContext_set_max_session_keys(envoy_api_v2_auth_UpstreamTlsContext *msg, struct google_protobuf_UInt32Value* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_auth_UpstreamTlsContext_mutable_max_session_keys(envoy_api_v2_auth_UpstreamTlsContext *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_auth_UpstreamTlsContext_max_session_keys(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_UpstreamTlsContext_set_max_session_keys(msg, sub);
  }
  return sub;
}

/* envoy.api.v2.auth.DownstreamTlsContext */

UPB_INLINE envoy_api_v2_auth_DownstreamTlsContext *envoy_api_v2_auth_DownstreamTlsContext_new(upb_arena *arena) {
  return (envoy_api_v2_auth_DownstreamTlsContext *)_upb_msg_new(&envoy_api_v2_auth_DownstreamTlsContext_msginit, arena);
}
UPB_INLINE envoy_api_v2_auth_DownstreamTlsContext *envoy_api_v2_auth_DownstreamTlsContext_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_auth_DownstreamTlsContext *ret = envoy_api_v2_auth_DownstreamTlsContext_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_auth_DownstreamTlsContext_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_auth_DownstreamTlsContext_serialize(const envoy_api_v2_auth_DownstreamTlsContext *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_auth_DownstreamTlsContext_msginit, arena, len);
}

typedef enum {
  envoy_api_v2_auth_DownstreamTlsContext_session_ticket_keys_type_session_ticket_keys = 4,
  envoy_api_v2_auth_DownstreamTlsContext_session_ticket_keys_type_session_ticket_keys_sds_secret_config = 5,
  envoy_api_v2_auth_DownstreamTlsContext_session_ticket_keys_type_disable_stateless_session_resumption = 7,
  envoy_api_v2_auth_DownstreamTlsContext_session_ticket_keys_type_NOT_SET = 0
} envoy_api_v2_auth_DownstreamTlsContext_session_ticket_keys_type_oneofcases;
UPB_INLINE envoy_api_v2_auth_DownstreamTlsContext_session_ticket_keys_type_oneofcases envoy_api_v2_auth_DownstreamTlsContext_session_ticket_keys_type_case(const envoy_api_v2_auth_DownstreamTlsContext* msg) { return (envoy_api_v2_auth_DownstreamTlsContext_session_ticket_keys_type_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(20, 40), int32_t); }

UPB_INLINE bool envoy_api_v2_auth_DownstreamTlsContext_has_common_tls_context(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const envoy_api_v2_auth_CommonTlsContext* envoy_api_v2_auth_DownstreamTlsContext_common_tls_context(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), const envoy_api_v2_auth_CommonTlsContext*); }
UPB_INLINE bool envoy_api_v2_auth_DownstreamTlsContext_has_require_client_certificate(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(4, 8)); }
UPB_INLINE const struct google_protobuf_BoolValue* envoy_api_v2_auth_DownstreamTlsContext_require_client_certificate(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct google_protobuf_BoolValue*); }
UPB_INLINE bool envoy_api_v2_auth_DownstreamTlsContext_has_require_sni(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const struct google_protobuf_BoolValue* envoy_api_v2_auth_DownstreamTlsContext_require_sni(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const struct google_protobuf_BoolValue*); }
UPB_INLINE bool envoy_api_v2_auth_DownstreamTlsContext_has_session_ticket_keys(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return _upb_getoneofcase(msg, UPB_SIZE(20, 40)) == 4; }
UPB_INLINE const struct envoy_api_v2_auth_TlsSessionTicketKeys* envoy_api_v2_auth_DownstreamTlsContext_session_ticket_keys(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return UPB_READ_ONEOF(msg, const struct envoy_api_v2_auth_TlsSessionTicketKeys*, UPB_SIZE(16, 32), UPB_SIZE(20, 40), 4, NULL); }
UPB_INLINE bool envoy_api_v2_auth_DownstreamTlsContext_has_session_ticket_keys_sds_secret_config(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return _upb_getoneofcase(msg, UPB_SIZE(20, 40)) == 5; }
UPB_INLINE const struct envoy_api_v2_auth_SdsSecretConfig* envoy_api_v2_auth_DownstreamTlsContext_session_ticket_keys_sds_secret_config(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return UPB_READ_ONEOF(msg, const struct envoy_api_v2_auth_SdsSecretConfig*, UPB_SIZE(16, 32), UPB_SIZE(20, 40), 5, NULL); }
UPB_INLINE bool envoy_api_v2_auth_DownstreamTlsContext_has_session_timeout(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(12, 24)); }
UPB_INLINE const struct google_protobuf_Duration* envoy_api_v2_auth_DownstreamTlsContext_session_timeout(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const struct google_protobuf_Duration*); }
UPB_INLINE bool envoy_api_v2_auth_DownstreamTlsContext_has_disable_stateless_session_resumption(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return _upb_getoneofcase(msg, UPB_SIZE(20, 40)) == 7; }
UPB_INLINE bool envoy_api_v2_auth_DownstreamTlsContext_disable_stateless_session_resumption(const envoy_api_v2_auth_DownstreamTlsContext *msg) { return UPB_READ_ONEOF(msg, bool, UPB_SIZE(16, 32), UPB_SIZE(20, 40), 7, false); }

UPB_INLINE void envoy_api_v2_auth_DownstreamTlsContext_set_common_tls_context(envoy_api_v2_auth_DownstreamTlsContext *msg, envoy_api_v2_auth_CommonTlsContext* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), envoy_api_v2_auth_CommonTlsContext*) = value;
}
UPB_INLINE struct envoy_api_v2_auth_CommonTlsContext* envoy_api_v2_auth_DownstreamTlsContext_mutable_common_tls_context(envoy_api_v2_auth_DownstreamTlsContext *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_CommonTlsContext* sub = (struct envoy_api_v2_auth_CommonTlsContext*)envoy_api_v2_auth_DownstreamTlsContext_common_tls_context(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_CommonTlsContext*)_upb_msg_new(&envoy_api_v2_auth_CommonTlsContext_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_DownstreamTlsContext_set_common_tls_context(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_DownstreamTlsContext_set_require_client_certificate(envoy_api_v2_auth_DownstreamTlsContext *msg, struct google_protobuf_BoolValue* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct google_protobuf_BoolValue*) = value;
}
UPB_INLINE struct google_protobuf_BoolValue* envoy_api_v2_auth_DownstreamTlsContext_mutable_require_client_certificate(envoy_api_v2_auth_DownstreamTlsContext *msg, upb_arena *arena) {
  struct google_protobuf_BoolValue* sub = (struct google_protobuf_BoolValue*)envoy_api_v2_auth_DownstreamTlsContext_require_client_certificate(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_BoolValue*)_upb_msg_new(&google_protobuf_BoolValue_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_DownstreamTlsContext_set_require_client_certificate(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_DownstreamTlsContext_set_require_sni(envoy_api_v2_auth_DownstreamTlsContext *msg, struct google_protobuf_BoolValue* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), struct google_protobuf_BoolValue*) = value;
}
UPB_INLINE struct google_protobuf_BoolValue* envoy_api_v2_auth_DownstreamTlsContext_mutable_require_sni(envoy_api_v2_auth_DownstreamTlsContext *msg, upb_arena *arena) {
  struct google_protobuf_BoolValue* sub = (struct google_protobuf_BoolValue*)envoy_api_v2_auth_DownstreamTlsContext_require_sni(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_BoolValue*)_upb_msg_new(&google_protobuf_BoolValue_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_DownstreamTlsContext_set_require_sni(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_DownstreamTlsContext_set_session_ticket_keys(envoy_api_v2_auth_DownstreamTlsContext *msg, struct envoy_api_v2_auth_TlsSessionTicketKeys* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_api_v2_auth_TlsSessionTicketKeys*, UPB_SIZE(16, 32), value, UPB_SIZE(20, 40), 4);
}
UPB_INLINE struct envoy_api_v2_auth_TlsSessionTicketKeys* envoy_api_v2_auth_DownstreamTlsContext_mutable_session_ticket_keys(envoy_api_v2_auth_DownstreamTlsContext *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_TlsSessionTicketKeys* sub = (struct envoy_api_v2_auth_TlsSessionTicketKeys*)envoy_api_v2_auth_DownstreamTlsContext_session_ticket_keys(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_TlsSessionTicketKeys*)_upb_msg_new(&envoy_api_v2_auth_TlsSessionTicketKeys_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_DownstreamTlsContext_set_session_ticket_keys(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_DownstreamTlsContext_set_session_ticket_keys_sds_secret_config(envoy_api_v2_auth_DownstreamTlsContext *msg, struct envoy_api_v2_auth_SdsSecretConfig* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_api_v2_auth_SdsSecretConfig*, UPB_SIZE(16, 32), value, UPB_SIZE(20, 40), 5);
}
UPB_INLINE struct envoy_api_v2_auth_SdsSecretConfig* envoy_api_v2_auth_DownstreamTlsContext_mutable_session_ticket_keys_sds_secret_config(envoy_api_v2_auth_DownstreamTlsContext *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_SdsSecretConfig* sub = (struct envoy_api_v2_auth_SdsSecretConfig*)envoy_api_v2_auth_DownstreamTlsContext_session_ticket_keys_sds_secret_config(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_SdsSecretConfig*)_upb_msg_new(&envoy_api_v2_auth_SdsSecretConfig_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_DownstreamTlsContext_set_session_ticket_keys_sds_secret_config(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_DownstreamTlsContext_set_session_timeout(envoy_api_v2_auth_DownstreamTlsContext *msg, struct google_protobuf_Duration* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), struct google_protobuf_Duration*) = value;
}
UPB_INLINE struct google_protobuf_Duration* envoy_api_v2_auth_DownstreamTlsContext_mutable_session_timeout(envoy_api_v2_auth_DownstreamTlsContext *msg, upb_arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_api_v2_auth_DownstreamTlsContext_session_timeout(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_msg_new(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_DownstreamTlsContext_set_session_timeout(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_DownstreamTlsContext_set_disable_stateless_session_resumption(envoy_api_v2_auth_DownstreamTlsContext *msg, bool value) {
  UPB_WRITE_ONEOF(msg, bool, UPB_SIZE(16, 32), value, UPB_SIZE(20, 40), 7);
}

/* envoy.api.v2.auth.CommonTlsContext */

UPB_INLINE envoy_api_v2_auth_CommonTlsContext *envoy_api_v2_auth_CommonTlsContext_new(upb_arena *arena) {
  return (envoy_api_v2_auth_CommonTlsContext *)_upb_msg_new(&envoy_api_v2_auth_CommonTlsContext_msginit, arena);
}
UPB_INLINE envoy_api_v2_auth_CommonTlsContext *envoy_api_v2_auth_CommonTlsContext_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_auth_CommonTlsContext *ret = envoy_api_v2_auth_CommonTlsContext_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_auth_CommonTlsContext_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_auth_CommonTlsContext_serialize(const envoy_api_v2_auth_CommonTlsContext *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_auth_CommonTlsContext_msginit, arena, len);
}

typedef enum {
  envoy_api_v2_auth_CommonTlsContext_validation_context_type_validation_context = 3,
  envoy_api_v2_auth_CommonTlsContext_validation_context_type_validation_context_sds_secret_config = 7,
  envoy_api_v2_auth_CommonTlsContext_validation_context_type_combined_validation_context = 8,
  envoy_api_v2_auth_CommonTlsContext_validation_context_type_NOT_SET = 0
} envoy_api_v2_auth_CommonTlsContext_validation_context_type_oneofcases;
UPB_INLINE envoy_api_v2_auth_CommonTlsContext_validation_context_type_oneofcases envoy_api_v2_auth_CommonTlsContext_validation_context_type_case(const envoy_api_v2_auth_CommonTlsContext* msg) { return (envoy_api_v2_auth_CommonTlsContext_validation_context_type_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(20, 40), int32_t); }

UPB_INLINE bool envoy_api_v2_auth_CommonTlsContext_has_tls_params(const envoy_api_v2_auth_CommonTlsContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const struct envoy_api_v2_auth_TlsParameters* envoy_api_v2_auth_CommonTlsContext_tls_params(const envoy_api_v2_auth_CommonTlsContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), const struct envoy_api_v2_auth_TlsParameters*); }
UPB_INLINE bool envoy_api_v2_auth_CommonTlsContext_has_tls_certificates(const envoy_api_v2_auth_CommonTlsContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(4, 8)); }
UPB_INLINE const struct envoy_api_v2_auth_TlsCertificate* const* envoy_api_v2_auth_CommonTlsContext_tls_certificates(const envoy_api_v2_auth_CommonTlsContext *msg, size_t *len) { return (const struct envoy_api_v2_auth_TlsCertificate* const*)_upb_array_accessor(msg, UPB_SIZE(4, 8), len); }
UPB_INLINE bool envoy_api_v2_auth_CommonTlsContext_has_validation_context(const envoy_api_v2_auth_CommonTlsContext *msg) { return _upb_getoneofcase(msg, UPB_SIZE(20, 40)) == 3; }
UPB_INLINE const struct envoy_api_v2_auth_CertificateValidationContext* envoy_api_v2_auth_CommonTlsContext_validation_context(const envoy_api_v2_auth_CommonTlsContext *msg) { return UPB_READ_ONEOF(msg, const struct envoy_api_v2_auth_CertificateValidationContext*, UPB_SIZE(16, 32), UPB_SIZE(20, 40), 3, NULL); }
UPB_INLINE upb_strview const* envoy_api_v2_auth_CommonTlsContext_alpn_protocols(const envoy_api_v2_auth_CommonTlsContext *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len); }
UPB_INLINE bool envoy_api_v2_auth_CommonTlsContext_has_tls_certificate_sds_secret_configs(const envoy_api_v2_auth_CommonTlsContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(12, 24)); }
UPB_INLINE const struct envoy_api_v2_auth_SdsSecretConfig* const* envoy_api_v2_auth_CommonTlsContext_tls_certificate_sds_secret_configs(const envoy_api_v2_auth_CommonTlsContext *msg, size_t *len) { return (const struct envoy_api_v2_auth_SdsSecretConfig* const*)_upb_array_accessor(msg, UPB_SIZE(12, 24), len); }
UPB_INLINE bool envoy_api_v2_auth_CommonTlsContext_has_validation_context_sds_secret_config(const envoy_api_v2_auth_CommonTlsContext *msg) { return _upb_getoneofcase(msg, UPB_SIZE(20, 40)) == 7; }
UPB_INLINE const struct envoy_api_v2_auth_SdsSecretConfig* envoy_api_v2_auth_CommonTlsContext_validation_context_sds_secret_config(const envoy_api_v2_auth_CommonTlsContext *msg) { return UPB_READ_ONEOF(msg, const struct envoy_api_v2_auth_SdsSecretConfig*, UPB_SIZE(16, 32), UPB_SIZE(20, 40), 7, NULL); }
UPB_INLINE bool envoy_api_v2_auth_CommonTlsContext_has_combined_validation_context(const envoy_api_v2_auth_CommonTlsContext *msg) { return _upb_getoneofcase(msg, UPB_SIZE(20, 40)) == 8; }
UPB_INLINE const envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext* envoy_api_v2_auth_CommonTlsContext_combined_validation_context(const envoy_api_v2_auth_CommonTlsContext *msg) { return UPB_READ_ONEOF(msg, const envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext*, UPB_SIZE(16, 32), UPB_SIZE(20, 40), 8, NULL); }

UPB_INLINE void envoy_api_v2_auth_CommonTlsContext_set_tls_params(envoy_api_v2_auth_CommonTlsContext *msg, struct envoy_api_v2_auth_TlsParameters* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), struct envoy_api_v2_auth_TlsParameters*) = value;
}
UPB_INLINE struct envoy_api_v2_auth_TlsParameters* envoy_api_v2_auth_CommonTlsContext_mutable_tls_params(envoy_api_v2_auth_CommonTlsContext *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_TlsParameters* sub = (struct envoy_api_v2_auth_TlsParameters*)envoy_api_v2_auth_CommonTlsContext_tls_params(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_TlsParameters*)_upb_msg_new(&envoy_api_v2_auth_TlsParameters_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_CommonTlsContext_set_tls_params(msg, sub);
  }
  return sub;
}
UPB_INLINE struct envoy_api_v2_auth_TlsCertificate** envoy_api_v2_auth_CommonTlsContext_mutable_tls_certificates(envoy_api_v2_auth_CommonTlsContext *msg, size_t *len) {
  return (struct envoy_api_v2_auth_TlsCertificate**)_upb_array_mutable_accessor(msg, UPB_SIZE(4, 8), len);
}
UPB_INLINE struct envoy_api_v2_auth_TlsCertificate** envoy_api_v2_auth_CommonTlsContext_resize_tls_certificates(envoy_api_v2_auth_CommonTlsContext *msg, size_t len, upb_arena *arena) {
  return (struct envoy_api_v2_auth_TlsCertificate**)_upb_array_resize_accessor(msg, UPB_SIZE(4, 8), len, UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_api_v2_auth_TlsCertificate* envoy_api_v2_auth_CommonTlsContext_add_tls_certificates(envoy_api_v2_auth_CommonTlsContext *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_TlsCertificate* sub = (struct envoy_api_v2_auth_TlsCertificate*)_upb_msg_new(&envoy_api_v2_auth_TlsCertificate_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(4, 8), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_CommonTlsContext_set_validation_context(envoy_api_v2_auth_CommonTlsContext *msg, struct envoy_api_v2_auth_CertificateValidationContext* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_api_v2_auth_CertificateValidationContext*, UPB_SIZE(16, 32), value, UPB_SIZE(20, 40), 3);
}
UPB_INLINE struct envoy_api_v2_auth_CertificateValidationContext* envoy_api_v2_auth_CommonTlsContext_mutable_validation_context(envoy_api_v2_auth_CommonTlsContext *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_CertificateValidationContext* sub = (struct envoy_api_v2_auth_CertificateValidationContext*)envoy_api_v2_auth_CommonTlsContext_validation_context(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_CertificateValidationContext*)_upb_msg_new(&envoy_api_v2_auth_CertificateValidationContext_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_CommonTlsContext_set_validation_context(msg, sub);
  }
  return sub;
}
UPB_INLINE upb_strview* envoy_api_v2_auth_CommonTlsContext_mutable_alpn_protocols(envoy_api_v2_auth_CommonTlsContext *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE upb_strview* envoy_api_v2_auth_CommonTlsContext_resize_alpn_protocols(envoy_api_v2_auth_CommonTlsContext *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(8, 16), len, UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_api_v2_auth_CommonTlsContext_add_alpn_protocols(envoy_api_v2_auth_CommonTlsContext *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(msg, UPB_SIZE(8, 16), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val,
      arena);
}
UPB_INLINE struct envoy_api_v2_auth_SdsSecretConfig** envoy_api_v2_auth_CommonTlsContext_mutable_tls_certificate_sds_secret_configs(envoy_api_v2_auth_CommonTlsContext *msg, size_t *len) {
  return (struct envoy_api_v2_auth_SdsSecretConfig**)_upb_array_mutable_accessor(msg, UPB_SIZE(12, 24), len);
}
UPB_INLINE struct envoy_api_v2_auth_SdsSecretConfig** envoy_api_v2_auth_CommonTlsContext_resize_tls_certificate_sds_secret_configs(envoy_api_v2_auth_CommonTlsContext *msg, size_t len, upb_arena *arena) {
  return (struct envoy_api_v2_auth_SdsSecretConfig**)_upb_array_resize_accessor(msg, UPB_SIZE(12, 24), len, UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_api_v2_auth_SdsSecretConfig* envoy_api_v2_auth_CommonTlsContext_add_tls_certificate_sds_secret_configs(envoy_api_v2_auth_CommonTlsContext *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_SdsSecretConfig* sub = (struct envoy_api_v2_auth_SdsSecretConfig*)_upb_msg_new(&envoy_api_v2_auth_SdsSecretConfig_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(12, 24), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_CommonTlsContext_set_validation_context_sds_secret_config(envoy_api_v2_auth_CommonTlsContext *msg, struct envoy_api_v2_auth_SdsSecretConfig* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_api_v2_auth_SdsSecretConfig*, UPB_SIZE(16, 32), value, UPB_SIZE(20, 40), 7);
}
UPB_INLINE struct envoy_api_v2_auth_SdsSecretConfig* envoy_api_v2_auth_CommonTlsContext_mutable_validation_context_sds_secret_config(envoy_api_v2_auth_CommonTlsContext *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_SdsSecretConfig* sub = (struct envoy_api_v2_auth_SdsSecretConfig*)envoy_api_v2_auth_CommonTlsContext_validation_context_sds_secret_config(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_SdsSecretConfig*)_upb_msg_new(&envoy_api_v2_auth_SdsSecretConfig_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_CommonTlsContext_set_validation_context_sds_secret_config(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_CommonTlsContext_set_combined_validation_context(envoy_api_v2_auth_CommonTlsContext *msg, envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext* value) {
  UPB_WRITE_ONEOF(msg, envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext*, UPB_SIZE(16, 32), value, UPB_SIZE(20, 40), 8);
}
UPB_INLINE struct envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext* envoy_api_v2_auth_CommonTlsContext_mutable_combined_validation_context(envoy_api_v2_auth_CommonTlsContext *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext* sub = (struct envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext*)envoy_api_v2_auth_CommonTlsContext_combined_validation_context(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext*)_upb_msg_new(&envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_CommonTlsContext_set_combined_validation_context(msg, sub);
  }
  return sub;
}

/* envoy.api.v2.auth.CommonTlsContext.CombinedCertificateValidationContext */

UPB_INLINE envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_new(upb_arena *arena) {
  return (envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *)_upb_msg_new(&envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_msginit, arena);
}
UPB_INLINE envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *ret = envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_serialize(const envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_msginit, arena, len);
}

UPB_INLINE bool envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_has_default_validation_context(const envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const struct envoy_api_v2_auth_CertificateValidationContext* envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_default_validation_context(const envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), const struct envoy_api_v2_auth_CertificateValidationContext*); }
UPB_INLINE bool envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_has_validation_context_sds_secret_config(const envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(4, 8)); }
UPB_INLINE const struct envoy_api_v2_auth_SdsSecretConfig* envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_validation_context_sds_secret_config(const envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct envoy_api_v2_auth_SdsSecretConfig*); }

UPB_INLINE void envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_set_default_validation_context(envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *msg, struct envoy_api_v2_auth_CertificateValidationContext* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), struct envoy_api_v2_auth_CertificateValidationContext*) = value;
}
UPB_INLINE struct envoy_api_v2_auth_CertificateValidationContext* envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_mutable_default_validation_context(envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_CertificateValidationContext* sub = (struct envoy_api_v2_auth_CertificateValidationContext*)envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_default_validation_context(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_CertificateValidationContext*)_upb_msg_new(&envoy_api_v2_auth_CertificateValidationContext_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_set_default_validation_context(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_set_validation_context_sds_secret_config(envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *msg, struct envoy_api_v2_auth_SdsSecretConfig* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct envoy_api_v2_auth_SdsSecretConfig*) = value;
}
UPB_INLINE struct envoy_api_v2_auth_SdsSecretConfig* envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_mutable_validation_context_sds_secret_config(envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext *msg, upb_arena *arena) {
  struct envoy_api_v2_auth_SdsSecretConfig* sub = (struct envoy_api_v2_auth_SdsSecretConfig*)envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_validation_context_sds_secret_config(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_auth_SdsSecretConfig*)_upb_msg_new(&envoy_api_v2_auth_SdsSecretConfig_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_auth_CommonTlsContext_CombinedCertificateValidationContext_set_validation_context_sds_secret_config(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_API_V2_AUTH_TLS_PROTO_UPB_H_ */