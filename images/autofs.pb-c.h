/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_autofs_2eproto__INCLUDED
#define PROTOBUF_C_autofs_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _AutofsEntry AutofsEntry;


/* --- enums --- */


/* --- messages --- */

struct  _AutofsEntry
{
  ProtobufCMessage base;
  int32_t fd;
  int32_t pgrp;
  int32_t timeout;
  int32_t minproto;
  int32_t maxproto;
  int32_t mode;
  protobuf_c_boolean has_uid;
  int32_t uid;
  protobuf_c_boolean has_gid;
  int32_t gid;
  protobuf_c_boolean has_read_fd;
  int32_t read_fd;
};
#define AUTOFS_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&autofs_entry__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0,0, 0,0, 0,0 }


/* AutofsEntry methods */
void   autofs_entry__init
                     (AutofsEntry         *message);
size_t autofs_entry__get_packed_size
                     (const AutofsEntry   *message);
size_t autofs_entry__pack
                     (const AutofsEntry   *message,
                      uint8_t             *out);
size_t autofs_entry__pack_to_buffer
                     (const AutofsEntry   *message,
                      ProtobufCBuffer     *buffer);
AutofsEntry *
       autofs_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   autofs_entry__free_unpacked
                     (AutofsEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*AutofsEntry_Closure)
                 (const AutofsEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor autofs_entry__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_autofs_2eproto__INCLUDED */
