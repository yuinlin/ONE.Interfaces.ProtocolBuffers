# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_instrument_measurement_milliamp_binding.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import claros_common_core_clarosdatetime_pb2 as claros__common__core__clarosdatetime__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='claros_instrument_measurement_milliamp_binding.proto',
  package='claros.instrument',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n4claros_instrument_measurement_milliamp_binding.proto\x12\x11\x63laros.instrument\x1a\'claros_common_core_clarosdatetime.proto\"\xa0\x01\n\x0fMilliAmpBinding\x12\x10\n\x08\x63\x61rdName\x18\x01 \x01(\t\x12\x0f\n\x07\x63hannel\x18\x02 \x01(\r\x12\x35\n\tvalidFrom\x18\x03 \x01(\x0b\x32\".claros.common.core.ClarosDateTime\x12\x33\n\x07validTo\x18\x04 \x01(\x0b\x32\".claros.common.core.ClarosDateTimeb\x06proto3')
  ,
  dependencies=[claros__common__core__clarosdatetime__pb2.DESCRIPTOR,])




_MILLIAMPBINDING = _descriptor.Descriptor(
  name='MilliAmpBinding',
  full_name='claros.instrument.MilliAmpBinding',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='cardName', full_name='claros.instrument.MilliAmpBinding.cardName', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='channel', full_name='claros.instrument.MilliAmpBinding.channel', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='validFrom', full_name='claros.instrument.MilliAmpBinding.validFrom', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='validTo', full_name='claros.instrument.MilliAmpBinding.validTo', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=117,
  serialized_end=277,
)

_MILLIAMPBINDING.fields_by_name['validFrom'].message_type = claros__common__core__clarosdatetime__pb2._CLAROSDATETIME
_MILLIAMPBINDING.fields_by_name['validTo'].message_type = claros__common__core__clarosdatetime__pb2._CLAROSDATETIME
DESCRIPTOR.message_types_by_name['MilliAmpBinding'] = _MILLIAMPBINDING
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

MilliAmpBinding = _reflection.GeneratedProtocolMessageType('MilliAmpBinding', (_message.Message,), dict(
  DESCRIPTOR = _MILLIAMPBINDING,
  __module__ = 'claros_instrument_measurement_milliamp_binding_pb2'
  # @@protoc_insertion_point(class_scope:claros.instrument.MilliAmpBinding)
  ))
_sym_db.RegisterMessage(MilliAmpBinding)


# @@protoc_insertion_point(module_scope)