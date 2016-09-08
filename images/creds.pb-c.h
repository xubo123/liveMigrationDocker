/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_creds_2eproto__INCLUDED
#define PROTOBUF_C_creds_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _CredsEntry CredsEntry;


/* --- enums --- */


/* --- messages --- */

struct  _CredsEntry
{
  ProtobufCMessage base;
  uint32_t uid;
  uint32_t gid;
  uint32_t euid;
  uint32_t egid;
  uint32_t suid;
  uint32_t sgid;
  uint32_t fsuid;
  uint32_t fsgid;
  size_t n_cap_inh;
  uint32_t *cap_inh;
  size_t n_cap_prm;
  uint32_t *cap_prm;
  size_t n_cap_eff;
  uint32_t *cap_eff;
  size_t n_cap_bnd;
  uint32_t *cap_bnd;
  uint32_t secbits;
  size_t n_groups;
  uint32_t *groups;
  char *lsm_profile;
};
#define CREDS_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&creds_entry__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0, 0,NULL, NULL }


/* CredsEntry methods */
void   creds_entry__init
                     (CredsEntry         *message);
size_t creds_entry__get_packed_size
                     (const CredsEntry   *message);
size_t creds_entry__pack
                     (const CredsEntry   *message,
                      uint8_t             *out);
size_t creds_entry__pack_to_buffer
                     (const CredsEntry   *message,
                      ProtobufCBuffer     *buffer);
CredsEntry *
       creds_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   creds_entry__free_unpacked
                     (CredsEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*CredsEntry_Closure)
                 (const CredsEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor creds_entry__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_creds_2eproto__INCLUDED */
