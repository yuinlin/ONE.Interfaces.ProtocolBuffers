# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_operations_spreadsheet_binding.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='claros_operations_spreadsheet_binding.proto',
  package='claros.operations.spreadsheet',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n+claros_operations_spreadsheet_binding.proto\x12\x1d\x63laros.operations.spreadsheet\"$\n\x12SpreadsheetBinding\x12\x0e\n\x06userId\x18\x01 \x01(\tb\x06proto3')
)




_SPREADSHEETBINDING = _descriptor.Descriptor(
  name='SpreadsheetBinding',
  full_name='claros.operations.spreadsheet.SpreadsheetBinding',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='userId', full_name='claros.operations.spreadsheet.SpreadsheetBinding.userId', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  serialized_start=78,
  serialized_end=114,
)

DESCRIPTOR.message_types_by_name['SpreadsheetBinding'] = _SPREADSHEETBINDING
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SpreadsheetBinding = _reflection.GeneratedProtocolMessageType('SpreadsheetBinding', (_message.Message,), dict(
  DESCRIPTOR = _SPREADSHEETBINDING,
  __module__ = 'claros_operations_spreadsheet_binding_pb2'
  # @@protoc_insertion_point(class_scope:claros.operations.spreadsheet.SpreadsheetBinding)
  ))
_sym_db.RegisterMessage(SpreadsheetBinding)


# @@protoc_insertion_point(module_scope)