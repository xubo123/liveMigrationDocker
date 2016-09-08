# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: stats.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='stats.proto',
  package='',
  serialized_pb='\n\x0bstats.proto\"\xce\x01\n\x10\x64ump_stats_entry\x12\x15\n\rfreezing_time\x18\x01 \x02(\r\x12\x13\n\x0b\x66rozen_time\x18\x02 \x02(\r\x12\x14\n\x0cmemdump_time\x18\x03 \x02(\r\x12\x15\n\rmemwrite_time\x18\x04 \x02(\r\x12\x15\n\rpages_scanned\x18\x05 \x02(\x04\x12\x1c\n\x14pages_skipped_parent\x18\x06 \x02(\x04\x12\x15\n\rpages_written\x18\x07 \x02(\x04\x12\x15\n\rirmap_resolve\x18\x08 \x01(\r\"\x8c\x01\n\x13restore_stats_entry\x12\x16\n\x0epages_compared\x18\x01 \x02(\x04\x12\x19\n\x11pages_skipped_cow\x18\x02 \x02(\x04\x12\x14\n\x0c\x66orking_time\x18\x03 \x02(\r\x12\x14\n\x0crestore_time\x18\x04 \x02(\r\x12\x16\n\x0epages_restored\x18\x05 \x01(\x04\"U\n\x0bstats_entry\x12\x1f\n\x04\x64ump\x18\x01 \x01(\x0b\x32\x11.dump_stats_entry\x12%\n\x07restore\x18\x02 \x01(\x0b\x32\x14.restore_stats_entry')




_DUMP_STATS_ENTRY = _descriptor.Descriptor(
  name='dump_stats_entry',
  full_name='dump_stats_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='freezing_time', full_name='dump_stats_entry.freezing_time', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='frozen_time', full_name='dump_stats_entry.frozen_time', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='memdump_time', full_name='dump_stats_entry.memdump_time', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='memwrite_time', full_name='dump_stats_entry.memwrite_time', index=3,
      number=4, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pages_scanned', full_name='dump_stats_entry.pages_scanned', index=4,
      number=5, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pages_skipped_parent', full_name='dump_stats_entry.pages_skipped_parent', index=5,
      number=6, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pages_written', full_name='dump_stats_entry.pages_written', index=6,
      number=7, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='irmap_resolve', full_name='dump_stats_entry.irmap_resolve', index=7,
      number=8, type=13, cpp_type=3, label=1,
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
  serialized_start=16,
  serialized_end=222,
)


_RESTORE_STATS_ENTRY = _descriptor.Descriptor(
  name='restore_stats_entry',
  full_name='restore_stats_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='pages_compared', full_name='restore_stats_entry.pages_compared', index=0,
      number=1, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pages_skipped_cow', full_name='restore_stats_entry.pages_skipped_cow', index=1,
      number=2, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='forking_time', full_name='restore_stats_entry.forking_time', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='restore_time', full_name='restore_stats_entry.restore_time', index=3,
      number=4, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pages_restored', full_name='restore_stats_entry.pages_restored', index=4,
      number=5, type=4, cpp_type=4, label=1,
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
  serialized_start=225,
  serialized_end=365,
)


_STATS_ENTRY = _descriptor.Descriptor(
  name='stats_entry',
  full_name='stats_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='dump', full_name='stats_entry.dump', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='restore', full_name='stats_entry.restore', index=1,
      number=2, type=11, cpp_type=10, label=1,
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
  serialized_start=367,
  serialized_end=452,
)

_STATS_ENTRY.fields_by_name['dump'].message_type = _DUMP_STATS_ENTRY
_STATS_ENTRY.fields_by_name['restore'].message_type = _RESTORE_STATS_ENTRY
DESCRIPTOR.message_types_by_name['dump_stats_entry'] = _DUMP_STATS_ENTRY
DESCRIPTOR.message_types_by_name['restore_stats_entry'] = _RESTORE_STATS_ENTRY
DESCRIPTOR.message_types_by_name['stats_entry'] = _STATS_ENTRY

class dump_stats_entry(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _DUMP_STATS_ENTRY

  # @@protoc_insertion_point(class_scope:dump_stats_entry)

class restore_stats_entry(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _RESTORE_STATS_ENTRY

  # @@protoc_insertion_point(class_scope:restore_stats_entry)

class stats_entry(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _STATS_ENTRY

  # @@protoc_insertion_point(class_scope:stats_entry)


# @@protoc_insertion_point(module_scope)
