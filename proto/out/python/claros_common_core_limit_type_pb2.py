# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_core_limit_type.proto

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
  name='claros_common_core_limit_type.proto',
  package='claros.common.core',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n#claros_common_core_limit_type.proto\x12\x12\x63laros.common.core*Z\n\tLimitType\x12\r\n\tL_UNKNOWN\x10\x00\x12\x0f\n\x0bL_HIGHALARM\x10\x01\x12\x0e\n\nL_HIGHNEAR\x10\x02\x12\r\n\tL_LOWNEAR\x10\x03\x12\x0e\n\nL_LOWALARM\x10\x04\x62\x06proto3')
)

_LIMITTYPE = _descriptor.EnumDescriptor(
  name='LimitType',
  full_name='claros.common.core.LimitType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='L_UNKNOWN', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='L_HIGHALARM', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='L_HIGHNEAR', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='L_LOWNEAR', index=3, number=3,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='L_LOWALARM', index=4, number=4,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=59,
  serialized_end=149,
)
_sym_db.RegisterEnumDescriptor(_LIMITTYPE)

LimitType = enum_type_wrapper.EnumTypeWrapper(_LIMITTYPE)
L_UNKNOWN = 0
L_HIGHALARM = 1
L_HIGHNEAR = 2
L_LOWNEAR = 3
L_LOWALARM = 4


DESCRIPTOR.enum_types_by_name['LimitType'] = _LIMITTYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)


# @@protoc_insertion_point(module_scope)