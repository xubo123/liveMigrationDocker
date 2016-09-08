/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "utsns.pb-c.h"
void   utsns_entry__init
                     (UtsnsEntry         *message)
{
  static UtsnsEntry init_value = UTSNS_ENTRY__INIT;
  *message = init_value;
}
size_t utsns_entry__get_packed_size
                     (const UtsnsEntry *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &utsns_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t utsns_entry__pack
                     (const UtsnsEntry *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &utsns_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t utsns_entry__pack_to_buffer
                     (const UtsnsEntry *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &utsns_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UtsnsEntry *
       utsns_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UtsnsEntry *)
     protobuf_c_message_unpack (&utsns_entry__descriptor,
                                allocator, len, data);
}
void   utsns_entry__free_unpacked
                     (UtsnsEntry *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &utsns_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor utsns_entry__field_descriptors[2] =
{
  {
    "nodename",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(UtsnsEntry, nodename),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "domainname",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(UtsnsEntry, domainname),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned utsns_entry__field_indices_by_name[] = {
  1,   /* field[1] = domainname */
  0,   /* field[0] = nodename */
};
static const ProtobufCIntRange utsns_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor utsns_entry__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "utsns_entry",
  "UtsnsEntry",
  "UtsnsEntry",
  "",
  sizeof(UtsnsEntry),
  2,
  utsns_entry__field_descriptors,
  utsns_entry__field_indices_by_name,
  1,  utsns_entry__number_ranges,
  (ProtobufCMessageInit) utsns_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
