/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "packet-sock.pb-c.h"
void   packet_mclist__init
                     (PacketMclist         *message)
{
  static PacketMclist init_value = PACKET_MCLIST__INIT;
  *message = init_value;
}
size_t packet_mclist__get_packed_size
                     (const PacketMclist *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &packet_mclist__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t packet_mclist__pack
                     (const PacketMclist *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &packet_mclist__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t packet_mclist__pack_to_buffer
                     (const PacketMclist *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &packet_mclist__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PacketMclist *
       packet_mclist__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PacketMclist *)
     protobuf_c_message_unpack (&packet_mclist__descriptor,
                                allocator, len, data);
}
void   packet_mclist__free_unpacked
                     (PacketMclist *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &packet_mclist__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   packet_ring__init
                     (PacketRing         *message)
{
  static PacketRing init_value = PACKET_RING__INIT;
  *message = init_value;
}
size_t packet_ring__get_packed_size
                     (const PacketRing *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &packet_ring__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t packet_ring__pack
                     (const PacketRing *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &packet_ring__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t packet_ring__pack_to_buffer
                     (const PacketRing *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &packet_ring__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PacketRing *
       packet_ring__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PacketRing *)
     protobuf_c_message_unpack (&packet_ring__descriptor,
                                allocator, len, data);
}
void   packet_ring__free_unpacked
                     (PacketRing *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &packet_ring__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   packet_sock_entry__init
                     (PacketSockEntry         *message)
{
  static PacketSockEntry init_value = PACKET_SOCK_ENTRY__INIT;
  *message = init_value;
}
size_t packet_sock_entry__get_packed_size
                     (const PacketSockEntry *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &packet_sock_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t packet_sock_entry__pack
                     (const PacketSockEntry *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &packet_sock_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t packet_sock_entry__pack_to_buffer
                     (const PacketSockEntry *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &packet_sock_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PacketSockEntry *
       packet_sock_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PacketSockEntry *)
     protobuf_c_message_unpack (&packet_sock_entry__descriptor,
                                allocator, len, data);
}
void   packet_sock_entry__free_unpacked
                     (PacketSockEntry *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &packet_sock_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor packet_mclist__field_descriptors[3] =
{
  {
    "index",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketMclist, index),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketMclist, type),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "addr",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketMclist, addr),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned packet_mclist__field_indices_by_name[] = {
  2,   /* field[2] = addr */
  0,   /* field[0] = index */
  1,   /* field[1] = type */
};
static const ProtobufCIntRange packet_mclist__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor packet_mclist__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "packet_mclist",
  "PacketMclist",
  "PacketMclist",
  "",
  sizeof(PacketMclist),
  3,
  packet_mclist__field_descriptors,
  packet_mclist__field_indices_by_name,
  1,  packet_mclist__number_ranges,
  (ProtobufCMessageInit) packet_mclist__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor packet_ring__field_descriptors[7] =
{
  {
    "block_size",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketRing, block_size),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "block_nr",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketRing, block_nr),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "frame_size",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketRing, frame_size),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "frame_nr",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketRing, frame_nr),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "retire_tmo",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketRing, retire_tmo),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sizeof_priv",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketRing, sizeof_priv),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "features",
    7,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketRing, features),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned packet_ring__field_indices_by_name[] = {
  1,   /* field[1] = block_nr */
  0,   /* field[0] = block_size */
  6,   /* field[6] = features */
  3,   /* field[3] = frame_nr */
  2,   /* field[2] = frame_size */
  4,   /* field[4] = retire_tmo */
  5,   /* field[5] = sizeof_priv */
};
static const ProtobufCIntRange packet_ring__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor packet_ring__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "packet_ring",
  "PacketRing",
  "PacketRing",
  "",
  sizeof(PacketRing),
  7,
  packet_ring__field_descriptors,
  packet_ring__field_indices_by_name,
  1,  packet_ring__number_ranges,
  (ProtobufCMessageInit) packet_ring__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const uint32_t packet_sock_entry__fanout__default_value = 4294967295;
static const ProtobufCFieldDescriptor packet_sock_entry__field_descriptors[19] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, type),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "protocol",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, protocol),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, flags),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ifindex",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, ifindex),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fown",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, fown),
    &fown_entry__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "opts",
    7,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, opts),
    &sk_opts_entry__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "version",
    8,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, version),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "reserve",
    9,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, reserve),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "aux_data",
    10,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, aux_data),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "orig_dev",
    11,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, orig_dev),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "vnet_hdr",
    12,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, vnet_hdr),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "loss",
    13,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, loss),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    14,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, timestamp),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "copy_thresh",
    15,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, copy_thresh),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mclist",
    16,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(PacketSockEntry, n_mclist),
    PROTOBUF_C_OFFSETOF(PacketSockEntry, mclist),
    &packet_mclist__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fanout",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(PacketSockEntry, has_fanout),
    PROTOBUF_C_OFFSETOF(PacketSockEntry, fanout),
    NULL,
    &packet_sock_entry__fanout__default_value,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rx_ring",
    18,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, rx_ring),
    &packet_ring__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tx_ring",
    19,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PacketSockEntry, tx_ring),
    &packet_ring__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned packet_sock_entry__field_indices_by_name[] = {
  9,   /* field[9] = aux_data */
  14,   /* field[14] = copy_thresh */
  16,   /* field[16] = fanout */
  3,   /* field[3] = flags */
  5,   /* field[5] = fown */
  0,   /* field[0] = id */
  4,   /* field[4] = ifindex */
  12,   /* field[12] = loss */
  15,   /* field[15] = mclist */
  6,   /* field[6] = opts */
  10,   /* field[10] = orig_dev */
  2,   /* field[2] = protocol */
  8,   /* field[8] = reserve */
  17,   /* field[17] = rx_ring */
  13,   /* field[13] = timestamp */
  18,   /* field[18] = tx_ring */
  1,   /* field[1] = type */
  7,   /* field[7] = version */
  11,   /* field[11] = vnet_hdr */
};
static const ProtobufCIntRange packet_sock_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 19 }
};
const ProtobufCMessageDescriptor packet_sock_entry__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "packet_sock_entry",
  "PacketSockEntry",
  "PacketSockEntry",
  "",
  sizeof(PacketSockEntry),
  19,
  packet_sock_entry__field_descriptors,
  packet_sock_entry__field_indices_by_name,
  1,  packet_sock_entry__number_ranges,
  (ProtobufCMessageInit) packet_sock_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
