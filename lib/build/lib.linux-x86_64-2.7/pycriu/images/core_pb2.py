# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: core.proto

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)


import core_x86_pb2
import core_arm_pb2
import core_aarch64_pb2
import core_ppc64_pb2
import rlimit_pb2
import timer_pb2
import creds_pb2
import siginfo_pb2
import opts_pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='core.proto',
  package='',
  serialized_pb='\n\ncore.proto\x1a\x0e\x63ore-x86.proto\x1a\x0e\x63ore-arm.proto\x1a\x12\x63ore-aarch64.proto\x1a\x10\x63ore-ppc64.proto\x1a\x0crlimit.proto\x1a\x0btimer.proto\x1a\x0b\x63reds.proto\x1a\rsiginfo.proto\x1a\nopts.proto\"\xed\x02\n\x0ftask_core_entry\x12\x12\n\ntask_state\x18\x01 \x02(\r\x12\x11\n\texit_code\x18\x02 \x02(\r\x12\x13\n\x0bpersonality\x18\x03 \x02(\r\x12\r\n\x05\x66lags\x18\x04 \x02(\r\x12\x19\n\nblk_sigset\x18\x05 \x02(\x04\x42\x05\xd2?\x02\x08\x01\x12\x0c\n\x04\x63omm\x18\x06 \x02(\t\x12\"\n\x06timers\x18\x07 \x01(\x0b\x32\x12.task_timers_entry\x12$\n\x07rlimits\x18\x08 \x01(\x0b\x32\x13.task_rlimits_entry\x12\x0e\n\x06\x63g_set\x18\t \x01(\r\x12&\n\tsignals_s\x18\n \x01(\x0b\x32\x13.signal_queue_entry\x12#\n\x0cseccomp_mode\x18\x0b \x01(\x0e\x32\r.seccomp_mode\x12\x16\n\x0eseccomp_filter\x18\x0c \x01(\r\x12\x10\n\x08loginuid\x18\r \x01(\r\x12\x15\n\room_score_adj\x18\x0e \x01(\x05\"\xe2\x01\n\x13task_kobj_ids_entry\x12\r\n\x05vm_id\x18\x01 \x02(\r\x12\x10\n\x08\x66iles_id\x18\x02 \x02(\r\x12\r\n\x05\x66s_id\x18\x03 \x02(\r\x12\x12\n\nsighand_id\x18\x04 \x02(\r\x12\x11\n\tpid_ns_id\x18\x05 \x01(\r\x12\x11\n\tnet_ns_id\x18\x06 \x01(\r\x12\x11\n\tipc_ns_id\x18\x07 \x01(\r\x12\x11\n\tuts_ns_id\x18\x08 \x01(\r\x12\x11\n\tmnt_ns_id\x18\t \x01(\r\x12\x12\n\nuser_ns_id\x18\n \x01(\r\x12\x14\n\x0c\x63group_ns_id\x18\x0b \x01(\r\"D\n\x10thread_sas_entry\x12\r\n\x05ss_sp\x18\x01 \x02(\x04\x12\x0f\n\x07ss_size\x18\x02 \x02(\x04\x12\x10\n\x08ss_flags\x18\x03 \x02(\r\"\x88\x02\n\x11thread_core_entry\x12\x11\n\tfutex_rla\x18\x01 \x02(\x04\x12\x15\n\rfutex_rla_len\x18\x02 \x02(\r\x12\x12\n\nsched_nice\x18\x03 \x01(\x11\x12\x14\n\x0csched_policy\x18\x04 \x01(\r\x12\x12\n\nsched_prio\x18\x05 \x01(\r\x12\x12\n\nblk_sigset\x18\x06 \x01(\x04\x12\x1e\n\x03sas\x18\x07 \x01(\x0b\x32\x11.thread_sas_entry\x12\x12\n\npdeath_sig\x18\x08 \x01(\r\x12&\n\tsignals_p\x18\t \x01(\x0b\x32\x13.signal_queue_entry\x12\x1b\n\x05\x63reds\x18\n \x01(\x0b\x32\x0c.creds_entry\"4\n\x12task_rlimits_entry\x12\x1e\n\x07rlimits\x18\x01 \x03(\x0b\x32\r.rlimit_entry\"\xf4\x02\n\ncore_entry\x12 \n\x05mtype\x18\x01 \x02(\x0e\x32\x11.core_entry.march\x12%\n\x0bthread_info\x18\x02 \x01(\x0b\x32\x10.thread_info_x86\x12 \n\x06ti_arm\x18\x06 \x01(\x0b\x32\x10.thread_info_arm\x12(\n\nti_aarch64\x18\x08 \x01(\x0b\x32\x14.thread_info_aarch64\x12$\n\x08ti_ppc64\x18\t \x01(\x0b\x32\x12.thread_info_ppc64\x12\x1c\n\x02tc\x18\x03 \x01(\x0b\x32\x10.task_core_entry\x12!\n\x03ids\x18\x04 \x01(\x0b\x32\x14.task_kobj_ids_entry\x12\'\n\x0bthread_core\x18\x05 \x01(\x0b\x32\x12.thread_core_entry\"A\n\x05march\x12\x0b\n\x07UNKNOWN\x10\x00\x12\n\n\x06X86_64\x10\x01\x12\x07\n\x03\x41RM\x10\x02\x12\x0b\n\x07\x41\x41RCH64\x10\x03\x12\t\n\x05PPC64\x10\x04*4\n\x0cseccomp_mode\x12\x0c\n\x08\x64isabled\x10\x00\x12\n\n\x06strict\x10\x01\x12\n\n\x06\x66ilter\x10\x02')

_SECCOMP_MODE = _descriptor.EnumDescriptor(
  name='seccomp_mode',
  full_name='seccomp_mode',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='disabled', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='strict', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='filter', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1514,
  serialized_end=1566,
)

seccomp_mode = enum_type_wrapper.EnumTypeWrapper(_SECCOMP_MODE)
disabled = 0
strict = 1
filter = 2


_CORE_ENTRY_MARCH = _descriptor.EnumDescriptor(
  name='march',
  full_name='core_entry.march',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='X86_64', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ARM', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='AARCH64', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PPC64', index=4, number=4,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1447,
  serialized_end=1512,
)


_TASK_CORE_ENTRY = _descriptor.Descriptor(
  name='task_core_entry',
  full_name='task_core_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='task_state', full_name='task_core_entry.task_state', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exit_code', full_name='task_core_entry.exit_code', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='personality', full_name='task_core_entry.personality', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='flags', full_name='task_core_entry.flags', index=3,
      number=4, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='blk_sigset', full_name='task_core_entry.blk_sigset', index=4,
      number=5, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), '\322?\002\010\001')),
    _descriptor.FieldDescriptor(
      name='comm', full_name='task_core_entry.comm', index=5,
      number=6, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='timers', full_name='task_core_entry.timers', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='rlimits', full_name='task_core_entry.rlimits', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='cg_set', full_name='task_core_entry.cg_set', index=8,
      number=9, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='signals_s', full_name='task_core_entry.signals_s', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='seccomp_mode', full_name='task_core_entry.seccomp_mode', index=10,
      number=11, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='seccomp_filter', full_name='task_core_entry.seccomp_filter', index=11,
      number=12, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='loginuid', full_name='task_core_entry.loginuid', index=12,
      number=13, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='oom_score_adj', full_name='task_core_entry.oom_score_adj', index=13,
      number=14, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=152,
  serialized_end=517,
)


_TASK_KOBJ_IDS_ENTRY = _descriptor.Descriptor(
  name='task_kobj_ids_entry',
  full_name='task_kobj_ids_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='vm_id', full_name='task_kobj_ids_entry.vm_id', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='files_id', full_name='task_kobj_ids_entry.files_id', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='fs_id', full_name='task_kobj_ids_entry.fs_id', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sighand_id', full_name='task_kobj_ids_entry.sighand_id', index=3,
      number=4, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pid_ns_id', full_name='task_kobj_ids_entry.pid_ns_id', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='net_ns_id', full_name='task_kobj_ids_entry.net_ns_id', index=5,
      number=6, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ipc_ns_id', full_name='task_kobj_ids_entry.ipc_ns_id', index=6,
      number=7, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='uts_ns_id', full_name='task_kobj_ids_entry.uts_ns_id', index=7,
      number=8, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='mnt_ns_id', full_name='task_kobj_ids_entry.mnt_ns_id', index=8,
      number=9, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='user_ns_id', full_name='task_kobj_ids_entry.user_ns_id', index=9,
      number=10, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='cgroup_ns_id', full_name='task_kobj_ids_entry.cgroup_ns_id', index=10,
      number=11, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=520,
  serialized_end=746,
)


_THREAD_SAS_ENTRY = _descriptor.Descriptor(
  name='thread_sas_entry',
  full_name='thread_sas_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ss_sp', full_name='thread_sas_entry.ss_sp', index=0,
      number=1, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ss_size', full_name='thread_sas_entry.ss_size', index=1,
      number=2, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ss_flags', full_name='thread_sas_entry.ss_flags', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=748,
  serialized_end=816,
)


_THREAD_CORE_ENTRY = _descriptor.Descriptor(
  name='thread_core_entry',
  full_name='thread_core_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='futex_rla', full_name='thread_core_entry.futex_rla', index=0,
      number=1, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='futex_rla_len', full_name='thread_core_entry.futex_rla_len', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sched_nice', full_name='thread_core_entry.sched_nice', index=2,
      number=3, type=17, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sched_policy', full_name='thread_core_entry.sched_policy', index=3,
      number=4, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sched_prio', full_name='thread_core_entry.sched_prio', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='blk_sigset', full_name='thread_core_entry.blk_sigset', index=5,
      number=6, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sas', full_name='thread_core_entry.sas', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pdeath_sig', full_name='thread_core_entry.pdeath_sig', index=7,
      number=8, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='signals_p', full_name='thread_core_entry.signals_p', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='creds', full_name='thread_core_entry.creds', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=819,
  serialized_end=1083,
)


_TASK_RLIMITS_ENTRY = _descriptor.Descriptor(
  name='task_rlimits_entry',
  full_name='task_rlimits_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='rlimits', full_name='task_rlimits_entry.rlimits', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=1085,
  serialized_end=1137,
)


_CORE_ENTRY = _descriptor.Descriptor(
  name='core_entry',
  full_name='core_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='mtype', full_name='core_entry.mtype', index=0,
      number=1, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='thread_info', full_name='core_entry.thread_info', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ti_arm', full_name='core_entry.ti_arm', index=2,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ti_aarch64', full_name='core_entry.ti_aarch64', index=3,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ti_ppc64', full_name='core_entry.ti_ppc64', index=4,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tc', full_name='core_entry.tc', index=5,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ids', full_name='core_entry.ids', index=6,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='thread_core', full_name='core_entry.thread_core', index=7,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _CORE_ENTRY_MARCH,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=1140,
  serialized_end=1512,
)

_TASK_CORE_ENTRY.fields_by_name['timers'].message_type = timer_pb2._TASK_TIMERS_ENTRY
_TASK_CORE_ENTRY.fields_by_name['rlimits'].message_type = _TASK_RLIMITS_ENTRY
_TASK_CORE_ENTRY.fields_by_name['signals_s'].message_type = siginfo_pb2._SIGNAL_QUEUE_ENTRY
_TASK_CORE_ENTRY.fields_by_name['seccomp_mode'].enum_type = _SECCOMP_MODE
_THREAD_CORE_ENTRY.fields_by_name['sas'].message_type = _THREAD_SAS_ENTRY
_THREAD_CORE_ENTRY.fields_by_name['signals_p'].message_type = siginfo_pb2._SIGNAL_QUEUE_ENTRY
_THREAD_CORE_ENTRY.fields_by_name['creds'].message_type = creds_pb2._CREDS_ENTRY
_TASK_RLIMITS_ENTRY.fields_by_name['rlimits'].message_type = rlimit_pb2._RLIMIT_ENTRY
_CORE_ENTRY.fields_by_name['mtype'].enum_type = _CORE_ENTRY_MARCH
_CORE_ENTRY.fields_by_name['thread_info'].message_type = core_x86_pb2._THREAD_INFO_X86
_CORE_ENTRY.fields_by_name['ti_arm'].message_type = core_arm_pb2._THREAD_INFO_ARM
_CORE_ENTRY.fields_by_name['ti_aarch64'].message_type = core_aarch64_pb2._THREAD_INFO_AARCH64
_CORE_ENTRY.fields_by_name['ti_ppc64'].message_type = core_ppc64_pb2._THREAD_INFO_PPC64
_CORE_ENTRY.fields_by_name['tc'].message_type = _TASK_CORE_ENTRY
_CORE_ENTRY.fields_by_name['ids'].message_type = _TASK_KOBJ_IDS_ENTRY
_CORE_ENTRY.fields_by_name['thread_core'].message_type = _THREAD_CORE_ENTRY
_CORE_ENTRY_MARCH.containing_type = _CORE_ENTRY;
DESCRIPTOR.message_types_by_name['task_core_entry'] = _TASK_CORE_ENTRY
DESCRIPTOR.message_types_by_name['task_kobj_ids_entry'] = _TASK_KOBJ_IDS_ENTRY
DESCRIPTOR.message_types_by_name['thread_sas_entry'] = _THREAD_SAS_ENTRY
DESCRIPTOR.message_types_by_name['thread_core_entry'] = _THREAD_CORE_ENTRY
DESCRIPTOR.message_types_by_name['task_rlimits_entry'] = _TASK_RLIMITS_ENTRY
DESCRIPTOR.message_types_by_name['core_entry'] = _CORE_ENTRY

class task_core_entry(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _TASK_CORE_ENTRY

  # @@protoc_insertion_point(class_scope:task_core_entry)

class task_kobj_ids_entry(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _TASK_KOBJ_IDS_ENTRY

  # @@protoc_insertion_point(class_scope:task_kobj_ids_entry)

class thread_sas_entry(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _THREAD_SAS_ENTRY

  # @@protoc_insertion_point(class_scope:thread_sas_entry)

class thread_core_entry(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _THREAD_CORE_ENTRY

  # @@protoc_insertion_point(class_scope:thread_core_entry)

class task_rlimits_entry(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _TASK_RLIMITS_ENTRY

  # @@protoc_insertion_point(class_scope:task_rlimits_entry)

class core_entry(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _CORE_ENTRY

  # @@protoc_insertion_point(class_scope:core_entry)


_TASK_CORE_ENTRY.fields_by_name['blk_sigset'].has_options = True
_TASK_CORE_ENTRY.fields_by_name['blk_sigset']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), '\322?\002\010\001')
# @@protoc_insertion_point(module_scope)
