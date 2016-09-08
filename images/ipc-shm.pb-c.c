/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "ipc-shm.pb-c.h"
void   ipc_shm_entry__init
                     (IpcShmEntry         *message)
{
  static IpcShmEntry init_value = IPC_SHM_ENTRY__INIT;
  *message = init_value;
}
size_t ipc_shm_entry__get_packed_size
                     (const IpcShmEntry *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ipc_shm_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ipc_shm_entry__pack
                     (const IpcShmEntry *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ipc_shm_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ipc_shm_entry__pack_to_buffer
                     (const IpcShmEntry *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ipc_shm_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
IpcShmEntry *
       ipc_shm_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (IpcShmEntry *)
     protobuf_c_message_unpack (&ipc_shm_entry__descriptor,
                                allocator, len, data);
}
void   ipc_shm_entry__free_unpacked
                     (IpcShmEntry *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ipc_shm_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor ipc_shm_entry__field_descriptors[2] =
{
  {
    "desc",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(IpcShmEntry, desc),
    &ipc_desc_entry__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "size",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(IpcShmEntry, size),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ipc_shm_entry__field_indices_by_name[] = {
  0,   /* field[0] = desc */
  1,   /* field[1] = size */
};
static const ProtobufCIntRange ipc_shm_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor ipc_shm_entry__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "ipc_shm_entry",
  "IpcShmEntry",
  "IpcShmEntry",
  "",
  sizeof(IpcShmEntry),
  2,
  ipc_shm_entry__field_descriptors,
  ipc_shm_entry__field_indices_by_name,
  1,  ipc_shm_entry__number_ranges,
  (ProtobufCMessageInit) ipc_shm_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
