/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_sk_2dpacket_2eproto__INCLUDED
#define PROTOBUF_C_sk_2dpacket_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _SkPacketEntry SkPacketEntry;


/* --- enums --- */


/* --- messages --- */

struct  _SkPacketEntry
{
  ProtobufCMessage base;
  uint32_t id_for;
  uint32_t length;
};
#define SK_PACKET_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sk_packet_entry__descriptor) \
    , 0, 0 }


/* SkPacketEntry methods */
void   sk_packet_entry__init
                     (SkPacketEntry         *message);
size_t sk_packet_entry__get_packed_size
                     (const SkPacketEntry   *message);
size_t sk_packet_entry__pack
                     (const SkPacketEntry   *message,
                      uint8_t             *out);
size_t sk_packet_entry__pack_to_buffer
                     (const SkPacketEntry   *message,
                      ProtobufCBuffer     *buffer);
SkPacketEntry *
       sk_packet_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sk_packet_entry__free_unpacked
                     (SkPacketEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*SkPacketEntry_Closure)
                 (const SkPacketEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor sk_packet_entry__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_sk_2dpacket_2eproto__INCLUDED */
