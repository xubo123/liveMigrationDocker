/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_ns_2eproto__INCLUDED
#define PROTOBUF_C_ns_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _NsFileEntry NsFileEntry;


/* --- enums --- */


/* --- messages --- */

struct  _NsFileEntry
{
  ProtobufCMessage base;
  uint32_t id;
  uint32_t ns_id;
  uint32_t ns_cflag;
  uint32_t flags;
};
#define NS_FILE_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ns_file_entry__descriptor) \
    , 0, 0, 0, 0 }


/* NsFileEntry methods */
void   ns_file_entry__init
                     (NsFileEntry         *message);
size_t ns_file_entry__get_packed_size
                     (const NsFileEntry   *message);
size_t ns_file_entry__pack
                     (const NsFileEntry   *message,
                      uint8_t             *out);
size_t ns_file_entry__pack_to_buffer
                     (const NsFileEntry   *message,
                      ProtobufCBuffer     *buffer);
NsFileEntry *
       ns_file_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ns_file_entry__free_unpacked
                     (NsFileEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*NsFileEntry_Closure)
                 (const NsFileEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor ns_file_entry__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_ns_2eproto__INCLUDED */
