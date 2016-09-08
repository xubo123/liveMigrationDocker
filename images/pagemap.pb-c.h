/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_pagemap_2eproto__INCLUDED
#define PROTOBUF_C_pagemap_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS

#include "opts.pb-c.h"

typedef struct _PagemapHead PagemapHead;
typedef struct _PagemapEntry PagemapEntry;


/* --- enums --- */


/* --- messages --- */

struct  _PagemapHead
{
  ProtobufCMessage base;
  uint32_t pages_id;
};
#define PAGEMAP_HEAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pagemap_head__descriptor) \
    , 0 }


struct  _PagemapEntry
{
  ProtobufCMessage base;
  uint64_t vaddr;
  uint32_t nr_pages;
  protobuf_c_boolean has_in_parent;
  protobuf_c_boolean in_parent;
};
#define PAGEMAP_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pagemap_entry__descriptor) \
    , 0, 0, 0,0 }


/* PagemapHead methods */
void   pagemap_head__init
                     (PagemapHead         *message);
size_t pagemap_head__get_packed_size
                     (const PagemapHead   *message);
size_t pagemap_head__pack
                     (const PagemapHead   *message,
                      uint8_t             *out);
size_t pagemap_head__pack_to_buffer
                     (const PagemapHead   *message,
                      ProtobufCBuffer     *buffer);
PagemapHead *
       pagemap_head__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pagemap_head__free_unpacked
                     (PagemapHead *message,
                      ProtobufCAllocator *allocator);
/* PagemapEntry methods */
void   pagemap_entry__init
                     (PagemapEntry         *message);
size_t pagemap_entry__get_packed_size
                     (const PagemapEntry   *message);
size_t pagemap_entry__pack
                     (const PagemapEntry   *message,
                      uint8_t             *out);
size_t pagemap_entry__pack_to_buffer
                     (const PagemapEntry   *message,
                      ProtobufCBuffer     *buffer);
PagemapEntry *
       pagemap_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pagemap_entry__free_unpacked
                     (PagemapEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*PagemapHead_Closure)
                 (const PagemapHead *message,
                  void *closure_data);
typedef void (*PagemapEntry_Closure)
                 (const PagemapEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor pagemap_head__descriptor;
extern const ProtobufCMessageDescriptor pagemap_entry__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_pagemap_2eproto__INCLUDED */
