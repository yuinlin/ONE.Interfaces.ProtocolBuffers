# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_computation_cursor_type.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='claros_common_computation_cursor_type.proto',
  package='claros.common.computation',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n+claros_common_computation_cursor_type.proto\x12\x19\x63laros.common.computation*s\n\x15\x43omputationCursorType\x12\x0e\n\nCC_UNKNOWN\x10\x00\x12\x0e\n\nCC_CURRENT\x10\x01\x12\x0f\n\x0b\x43\x43_PREVIOUS\x10\x02\x12\x0b\n\x07\x43\x43_NEXT\x10\x04\x12\x0b\n\x07\x43\x43_LAST\x10\x05\x12\x0f\n\x0b\x43\x43_ABSOLUTE\x10\x06\x62\x06proto3')
)

_COMPUTATIONCURSORTYPE = _descriptor.EnumDescriptor(
  name='ComputationCursorType',
  full_name='claros.common.computation.ComputationCursorType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='CC_UNKNOWN', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CC_CURRENT', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CC_PREVIOUS', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CC_NEXT', index=3, number=4,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CC_LAST', index=4, number=5,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CC_ABSOLUTE', index=5, number=6,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=74,
  serialized_end=189,
)
_sym_db.RegisterEnumDescriptor(_COMPUTATIONCURSORTYPE)

ComputationCursorType = enum_type_wrapper.EnumTypeWrapper(_COMPUTATIONCURSORTYPE)
CC_UNKNOWN = 0
CC_CURRENT = 1
CC_PREVIOUS = 2
CC_NEXT = 4
CC_LAST = 5
CC_ABSOLUTE = 6


DESCRIPTOR.enum_types_by_name['ComputationCursorType'] = _COMPUTATIONCURSORTYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)


# @@protoc_insertion_point(module_scope)
