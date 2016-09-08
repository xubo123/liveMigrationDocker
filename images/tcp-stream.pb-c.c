/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "tcp-stream.pb-c.h"
void   tcp_stream_entry__init
                     (TcpStreamEntry         *message)
{
  static TcpStreamEntry init_value = TCP_STREAM_ENTRY__INIT;
  *message = init_value;
}
size_t tcp_stream_entry__get_packed_size
                     (const TcpStreamEntry *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &tcp_stream_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t tcp_stream_entry__pack
                     (const TcpStreamEntry *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &tcp_stream_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t tcp_stream_entry__pack_to_buffer
                     (const TcpStreamEntry *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &tcp_stream_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TcpStreamEntry *
       tcp_stream_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TcpStreamEntry *)
     protobuf_c_message_unpack (&tcp_stream_entry__descriptor,
                                allocator, len, data);
}
void   tcp_stream_entry__free_unpacked
                     (TcpStreamEntry *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &tcp_stream_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor tcp_stream_entry__field_descriptors[12] =
{
  {
    "inq_len",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, inq_len),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "inq_seq",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, inq_seq),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "outq_len",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, outq_len),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "outq_seq",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, outq_seq),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "opt_mask",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, opt_mask),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "snd_wscale",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, snd_wscale),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mss_clamp",
    7,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, mss_clamp),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rcv_wscale",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, has_rcv_wscale),
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, rcv_wscale),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, has_timestamp),
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, timestamp),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cork",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, has_cork),
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, cork),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nodelay",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, has_nodelay),
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, nodelay),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "unsq_len",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, has_unsq_len),
    PROTOBUF_C_OFFSETOF(TcpStreamEntry, unsq_len),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned tcp_stream_entry__field_indices_by_name[] = {
  9,   /* field[9] = cork */
  0,   /* field[0] = inq_len */
  1,   /* field[1] = inq_seq */
  6,   /* field[6] = mss_clamp */
  10,   /* field[10] = nodelay */
  4,   /* field[4] = opt_mask */
  2,   /* field[2] = outq_len */
  3,   /* field[3] = outq_seq */
  7,   /* field[7] = rcv_wscale */
  5,   /* field[5] = snd_wscale */
  8,   /* field[8] = timestamp */
  11,   /* field[11] = unsq_len */
};
static const ProtobufCIntRange tcp_stream_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 12 }
};
const ProtobufCMessageDescriptor tcp_stream_entry__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "tcp_stream_entry",
  "TcpStreamEntry",
  "TcpStreamEntry",
  "",
  sizeof(TcpStreamEntry),
  12,
  tcp_stream_entry__field_descriptors,
  tcp_stream_entry__field_indices_by_name,
  1,  tcp_stream_entry__number_ranges,
  (ProtobufCMessageInit) tcp_stream_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
