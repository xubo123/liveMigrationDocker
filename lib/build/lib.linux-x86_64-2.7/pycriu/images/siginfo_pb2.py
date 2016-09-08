# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: siginfo.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='siginfo.proto',
  package='',
  serialized_pb='\n\rsiginfo.proto\" \n\rsiginfo_entry\x12\x0f\n\x07siginfo\x18\x01 \x02(\x0c\"5\n\x12signal_queue_entry\x12\x1f\n\x07signals\x18\x01 \x03(\x0b\x32\x0e.siginfo_entry')




_SIGINFO_ENTRY = _descriptor.Descriptor(
  name='siginfo_entry',
  full_name='siginfo_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='siginfo', full_name='siginfo_entry.siginfo', index=0,
      number=1, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value="",
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
  serialized_start=17,
  serialized_end=49,
)


_SIGNAL_QUEUE_ENTRY = _descriptor.Descriptor(
  name='signal_queue_entry',
  full_name='signal_queue_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='signals', full_name='signal_queue_entry.signals', index=0,
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
  serialized_start=51,
  serialized_end=104,
)

_SIGNAL_QUEUE_ENTRY.fields_by_name['signals'].message_type = _SIGINFO_ENTRY
DESCRIPTOR.message_types_by_name['siginfo_entry'] = _SIGINFO_ENTRY
DESCRIPTOR.message_types_by_name['signal_queue_entry'] = _SIGNAL_QUEUE_ENTRY

class siginfo_entry(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _SIGINFO_ENTRY

  # @@protoc_insertion_point(class_scope:siginfo_entry)

class signal_queue_entry(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _SIGNAL_QUEUE_ENTRY

  # @@protoc_insertion_point(class_scope:signal_queue_entry)


# @@protoc_insertion_point(module_scope)
