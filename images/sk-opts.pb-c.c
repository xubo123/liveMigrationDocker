/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "sk-opts.pb-c.h"
void   sk_opts_entry__init
                     (SkOptsEntry         *message)
{
  static SkOptsEntry init_value = SK_OPTS_ENTRY__INIT;
  *message = init_value;
}
size_t sk_opts_entry__get_packed_size
                     (const SkOptsEntry *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &sk_opts_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t sk_opts_entry__pack
                     (const SkOptsEntry *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &sk_opts_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t sk_opts_entry__pack_to_buffer
                     (const SkOptsEntry *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &sk_opts_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SkOptsEntry *
       sk_opts_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SkOptsEntry *)
     protobuf_c_message_unpack (&sk_opts_entry__descriptor,
                                allocator, len, data);
}
void   sk_opts_entry__free_unpacked
                     (SkOptsEntry *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &sk_opts_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor sk_opts_entry__field_descriptors[16] =
{
  {
    "so_sndbuf",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_sndbuf),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_rcvbuf",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_rcvbuf),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_snd_tmo_sec",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_snd_tmo_sec),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_snd_tmo_usec",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_snd_tmo_usec),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_rcv_tmo_sec",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_rcv_tmo_sec),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_rcv_tmo_usec",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_rcv_tmo_usec),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "reuseaddr",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(SkOptsEntry, has_reuseaddr),
    PROTOBUF_C_OFFSETOF(SkOptsEntry, reuseaddr),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_priority",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(SkOptsEntry, has_so_priority),
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_priority),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_rcvlowat",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(SkOptsEntry, has_so_rcvlowat),
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_rcvlowat),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_mark",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(SkOptsEntry, has_so_mark),
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_mark),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_passcred",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(SkOptsEntry, has_so_passcred),
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_passcred),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_passsec",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(SkOptsEntry, has_so_passsec),
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_passsec),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_dontroute",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(SkOptsEntry, has_so_dontroute),
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_dontroute),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_no_check",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(SkOptsEntry, has_so_no_check),
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_no_check),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_bound_dev",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_bound_dev),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "so_filter",
    16,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_FIXED64,
    PROTOBUF_C_OFFSETOF(SkOptsEntry, n_so_filter),
    PROTOBUF_C_OFFSETOF(SkOptsEntry, so_filter),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned sk_opts_entry__field_indices_by_name[] = {
  6,   /* field[6] = reuseaddr */
  14,   /* field[14] = so_bound_dev */
  12,   /* field[12] = so_dontroute */
  15,   /* field[15] = so_filter */
  9,   /* field[9] = so_mark */
  13,   /* field[13] = so_no_check */
  10,   /* field[10] = so_passcred */
  11,   /* field[11] = so_passsec */
  7,   /* field[7] = so_priority */
  4,   /* field[4] = so_rcv_tmo_sec */
  5,   /* field[5] = so_rcv_tmo_usec */
  1,   /* field[1] = so_rcvbuf */
  8,   /* field[8] = so_rcvlowat */
  2,   /* field[2] = so_snd_tmo_sec */
  3,   /* field[3] = so_snd_tmo_usec */
  0,   /* field[0] = so_sndbuf */
};
static const ProtobufCIntRange sk_opts_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 16 }
};
const ProtobufCMessageDescriptor sk_opts_entry__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "sk_opts_entry",
  "SkOptsEntry",
  "SkOptsEntry",
  "",
  sizeof(SkOptsEntry),
  16,
  sk_opts_entry__field_descriptors,
  sk_opts_entry__field_indices_by_name,
  1,  sk_opts_entry__number_ranges,
  (ProtobufCMessageInit) sk_opts_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
const ProtobufCEnumValue sk_shutdown__enum_values_by_number[4] =
{
  { "NONE", "SK_SHUTDOWN__NONE", 0 },
  { "READ", "SK_SHUTDOWN__READ", 1 },
  { "WRITE", "SK_SHUTDOWN__WRITE", 2 },
  { "BOTH", "SK_SHUTDOWN__BOTH", 3 },
};
static const ProtobufCIntRange sk_shutdown__value_ranges[] = {
{0, 0},{0, 4}
};
const ProtobufCEnumValueIndex sk_shutdown__enum_values_by_name[4] =
{
  { "BOTH", 3 },
  { "NONE", 0 },
  { "READ", 1 },
  { "WRITE", 2 },
};
const ProtobufCEnumDescriptor sk_shutdown__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "sk_shutdown",
  "sk_shutdown",
  "SkShutdown",
  "",
  4,
  sk_shutdown__enum_values_by_number,
  4,
  sk_shutdown__enum_values_by_name,
  1,
  sk_shutdown__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
