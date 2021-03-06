/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "core-ppc64.pb-c.h"
void   user_ppc64_regs_entry__init
                     (UserPpc64RegsEntry         *message)
{
  static UserPpc64RegsEntry init_value = USER_PPC64_REGS_ENTRY__INIT;
  *message = init_value;
}
size_t user_ppc64_regs_entry__get_packed_size
                     (const UserPpc64RegsEntry *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_regs_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t user_ppc64_regs_entry__pack
                     (const UserPpc64RegsEntry *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_regs_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t user_ppc64_regs_entry__pack_to_buffer
                     (const UserPpc64RegsEntry *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_regs_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UserPpc64RegsEntry *
       user_ppc64_regs_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UserPpc64RegsEntry *)
     protobuf_c_message_unpack (&user_ppc64_regs_entry__descriptor,
                                allocator, len, data);
}
void   user_ppc64_regs_entry__free_unpacked
                     (UserPpc64RegsEntry *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_regs_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   user_ppc64_fpstate_entry__init
                     (UserPpc64FpstateEntry         *message)
{
  static UserPpc64FpstateEntry init_value = USER_PPC64_FPSTATE_ENTRY__INIT;
  *message = init_value;
}
size_t user_ppc64_fpstate_entry__get_packed_size
                     (const UserPpc64FpstateEntry *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_fpstate_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t user_ppc64_fpstate_entry__pack
                     (const UserPpc64FpstateEntry *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_fpstate_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t user_ppc64_fpstate_entry__pack_to_buffer
                     (const UserPpc64FpstateEntry *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_fpstate_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UserPpc64FpstateEntry *
       user_ppc64_fpstate_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UserPpc64FpstateEntry *)
     protobuf_c_message_unpack (&user_ppc64_fpstate_entry__descriptor,
                                allocator, len, data);
}
void   user_ppc64_fpstate_entry__free_unpacked
                     (UserPpc64FpstateEntry *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_fpstate_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   user_ppc64_vrstate_entry__init
                     (UserPpc64VrstateEntry         *message)
{
  static UserPpc64VrstateEntry init_value = USER_PPC64_VRSTATE_ENTRY__INIT;
  *message = init_value;
}
size_t user_ppc64_vrstate_entry__get_packed_size
                     (const UserPpc64VrstateEntry *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_vrstate_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t user_ppc64_vrstate_entry__pack
                     (const UserPpc64VrstateEntry *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_vrstate_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t user_ppc64_vrstate_entry__pack_to_buffer
                     (const UserPpc64VrstateEntry *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_vrstate_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UserPpc64VrstateEntry *
       user_ppc64_vrstate_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UserPpc64VrstateEntry *)
     protobuf_c_message_unpack (&user_ppc64_vrstate_entry__descriptor,
                                allocator, len, data);
}
void   user_ppc64_vrstate_entry__free_unpacked
                     (UserPpc64VrstateEntry *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_vrstate_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   user_ppc64_vsxstate_entry__init
                     (UserPpc64VsxstateEntry         *message)
{
  static UserPpc64VsxstateEntry init_value = USER_PPC64_VSXSTATE_ENTRY__INIT;
  *message = init_value;
}
size_t user_ppc64_vsxstate_entry__get_packed_size
                     (const UserPpc64VsxstateEntry *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_vsxstate_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t user_ppc64_vsxstate_entry__pack
                     (const UserPpc64VsxstateEntry *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_vsxstate_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t user_ppc64_vsxstate_entry__pack_to_buffer
                     (const UserPpc64VsxstateEntry *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_vsxstate_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UserPpc64VsxstateEntry *
       user_ppc64_vsxstate_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UserPpc64VsxstateEntry *)
     protobuf_c_message_unpack (&user_ppc64_vsxstate_entry__descriptor,
                                allocator, len, data);
}
void   user_ppc64_vsxstate_entry__free_unpacked
                     (UserPpc64VsxstateEntry *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &user_ppc64_vsxstate_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   thread_info_ppc64__init
                     (ThreadInfoPpc64         *message)
{
  static ThreadInfoPpc64 init_value = THREAD_INFO_PPC64__INIT;
  *message = init_value;
}
size_t thread_info_ppc64__get_packed_size
                     (const ThreadInfoPpc64 *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &thread_info_ppc64__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t thread_info_ppc64__pack
                     (const ThreadInfoPpc64 *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &thread_info_ppc64__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t thread_info_ppc64__pack_to_buffer
                     (const ThreadInfoPpc64 *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &thread_info_ppc64__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ThreadInfoPpc64 *
       thread_info_ppc64__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ThreadInfoPpc64 *)
     protobuf_c_message_unpack (&thread_info_ppc64__descriptor,
                                allocator, len, data);
}
void   thread_info_ppc64__free_unpacked
                     (ThreadInfoPpc64 *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &thread_info_ppc64__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor user_ppc64_regs_entry__field_descriptors[9] =
{
  {
    "gpr",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT64,
    PROTOBUF_C_OFFSETOF(UserPpc64RegsEntry, n_gpr),
    PROTOBUF_C_OFFSETOF(UserPpc64RegsEntry, gpr),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nip",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(UserPpc64RegsEntry, nip),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "msr",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(UserPpc64RegsEntry, msr),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "orig_gpr3",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(UserPpc64RegsEntry, orig_gpr3),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ctr",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(UserPpc64RegsEntry, ctr),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "link",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(UserPpc64RegsEntry, link),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "xer",
    7,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(UserPpc64RegsEntry, xer),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ccr",
    8,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(UserPpc64RegsEntry, ccr),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "trap",
    9,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(UserPpc64RegsEntry, trap),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned user_ppc64_regs_entry__field_indices_by_name[] = {
  7,   /* field[7] = ccr */
  4,   /* field[4] = ctr */
  0,   /* field[0] = gpr */
  5,   /* field[5] = link */
  2,   /* field[2] = msr */
  1,   /* field[1] = nip */
  3,   /* field[3] = orig_gpr3 */
  8,   /* field[8] = trap */
  6,   /* field[6] = xer */
};
static const ProtobufCIntRange user_ppc64_regs_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 9 }
};
const ProtobufCMessageDescriptor user_ppc64_regs_entry__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "user_ppc64_regs_entry",
  "UserPpc64RegsEntry",
  "UserPpc64RegsEntry",
  "",
  sizeof(UserPpc64RegsEntry),
  9,
  user_ppc64_regs_entry__field_descriptors,
  user_ppc64_regs_entry__field_indices_by_name,
  1,  user_ppc64_regs_entry__number_ranges,
  (ProtobufCMessageInit) user_ppc64_regs_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor user_ppc64_fpstate_entry__field_descriptors[1] =
{
  {
    "fpregs",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT64,
    PROTOBUF_C_OFFSETOF(UserPpc64FpstateEntry, n_fpregs),
    PROTOBUF_C_OFFSETOF(UserPpc64FpstateEntry, fpregs),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned user_ppc64_fpstate_entry__field_indices_by_name[] = {
  0,   /* field[0] = fpregs */
};
static const ProtobufCIntRange user_ppc64_fpstate_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor user_ppc64_fpstate_entry__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "user_ppc64_fpstate_entry",
  "UserPpc64FpstateEntry",
  "UserPpc64FpstateEntry",
  "",
  sizeof(UserPpc64FpstateEntry),
  1,
  user_ppc64_fpstate_entry__field_descriptors,
  user_ppc64_fpstate_entry__field_indices_by_name,
  1,  user_ppc64_fpstate_entry__number_ranges,
  (ProtobufCMessageInit) user_ppc64_fpstate_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor user_ppc64_vrstate_entry__field_descriptors[2] =
{
  {
    "vrregs",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT64,
    PROTOBUF_C_OFFSETOF(UserPpc64VrstateEntry, n_vrregs),
    PROTOBUF_C_OFFSETOF(UserPpc64VrstateEntry, vrregs),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "vrsave",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(UserPpc64VrstateEntry, vrsave),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned user_ppc64_vrstate_entry__field_indices_by_name[] = {
  0,   /* field[0] = vrregs */
  1,   /* field[1] = vrsave */
};
static const ProtobufCIntRange user_ppc64_vrstate_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor user_ppc64_vrstate_entry__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "user_ppc64_vrstate_entry",
  "UserPpc64VrstateEntry",
  "UserPpc64VrstateEntry",
  "",
  sizeof(UserPpc64VrstateEntry),
  2,
  user_ppc64_vrstate_entry__field_descriptors,
  user_ppc64_vrstate_entry__field_indices_by_name,
  1,  user_ppc64_vrstate_entry__number_ranges,
  (ProtobufCMessageInit) user_ppc64_vrstate_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor user_ppc64_vsxstate_entry__field_descriptors[1] =
{
  {
    "vsxregs",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT64,
    PROTOBUF_C_OFFSETOF(UserPpc64VsxstateEntry, n_vsxregs),
    PROTOBUF_C_OFFSETOF(UserPpc64VsxstateEntry, vsxregs),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned user_ppc64_vsxstate_entry__field_indices_by_name[] = {
  0,   /* field[0] = vsxregs */
};
static const ProtobufCIntRange user_ppc64_vsxstate_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor user_ppc64_vsxstate_entry__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "user_ppc64_vsxstate_entry",
  "UserPpc64VsxstateEntry",
  "UserPpc64VsxstateEntry",
  "",
  sizeof(UserPpc64VsxstateEntry),
  1,
  user_ppc64_vsxstate_entry__field_descriptors,
  user_ppc64_vsxstate_entry__field_indices_by_name,
  1,  user_ppc64_vsxstate_entry__number_ranges,
  (ProtobufCMessageInit) user_ppc64_vsxstate_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor thread_info_ppc64__field_descriptors[5] =
{
  {
    "clear_tid_addr",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(ThreadInfoPpc64, clear_tid_addr),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "gpregs",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(ThreadInfoPpc64, gpregs),
    &user_ppc64_regs_entry__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fpstate",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(ThreadInfoPpc64, fpstate),
    &user_ppc64_fpstate_entry__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "vrstate",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(ThreadInfoPpc64, vrstate),
    &user_ppc64_vrstate_entry__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "vsxstate",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(ThreadInfoPpc64, vsxstate),
    &user_ppc64_vsxstate_entry__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned thread_info_ppc64__field_indices_by_name[] = {
  0,   /* field[0] = clear_tid_addr */
  2,   /* field[2] = fpstate */
  1,   /* field[1] = gpregs */
  3,   /* field[3] = vrstate */
  4,   /* field[4] = vsxstate */
};
static const ProtobufCIntRange thread_info_ppc64__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor thread_info_ppc64__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "thread_info_ppc64",
  "ThreadInfoPpc64",
  "ThreadInfoPpc64",
  "",
  sizeof(ThreadInfoPpc64),
  5,
  thread_info_ppc64__field_descriptors,
  thread_info_ppc64__field_indices_by_name,
  1,  thread_info_ppc64__number_ranges,
  (ProtobufCMessageInit) thread_info_ppc64__init,
  NULL,NULL,NULL    /* reserved[123] */
};
