# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_operations_spreadsheet_worksheet.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import claros_operations_spreadsheet_worksheet_type_pb2 as claros__operations__spreadsheet__worksheet__type__pb2
import claros_operations_spreadsheet_worksheet_definition_pb2 as claros__operations__spreadsheet__worksheet__definition__pb2
import claros_operations_spreadsheet_worksheet_row_pb2 as claros__operations__spreadsheet__worksheet__row__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='claros_operations_spreadsheet_worksheet.proto',
  package='claros.operations.spreadsheet',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n-claros_operations_spreadsheet_worksheet.proto\x12\x1d\x63laros.operations.spreadsheet\x1a\x32\x63laros_operations_spreadsheet_worksheet_type.proto\x1a\x38\x63laros_operations_spreadsheet_worksheet_definition.proto\x1a\x31\x63laros_operations_spreadsheet_worksheet_row.proto\"\xd4\x01\n\tWorksheet\x12\x43\n\rworksheetType\x18\x01 \x01(\x0e\x32,.claros.operations.spreadsheet.WorksheetType\x12P\n\x14worksheetDefinitions\x18\x02 \x03(\x0b\x32\x32.claros.operations.spreadsheet.WorksheetDefinition\x12\x30\n\x04rows\x18\x03 \x03(\x0b\x32\".claros.operations.spreadsheet.Rowb\x06proto3')
  ,
  dependencies=[claros__operations__spreadsheet__worksheet__type__pb2.DESCRIPTOR,claros__operations__spreadsheet__worksheet__definition__pb2.DESCRIPTOR,claros__operations__spreadsheet__worksheet__row__pb2.DESCRIPTOR,])




_WORKSHEET = _descriptor.Descriptor(
  name='Worksheet',
  full_name='claros.operations.spreadsheet.Worksheet',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='worksheetType', full_name='claros.operations.spreadsheet.Worksheet.worksheetType', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='worksheetDefinitions', full_name='claros.operations.spreadsheet.Worksheet.worksheetDefinitions', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='rows', full_name='claros.operations.spreadsheet.Worksheet.rows', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=242,
  serialized_end=454,
)

_WORKSHEET.fields_by_name['worksheetType'].enum_type = claros__operations__spreadsheet__worksheet__type__pb2._WORKSHEETTYPE
_WORKSHEET.fields_by_name['worksheetDefinitions'].message_type = claros__operations__spreadsheet__worksheet__definition__pb2._WORKSHEETDEFINITION
_WORKSHEET.fields_by_name['rows'].message_type = claros__operations__spreadsheet__worksheet__row__pb2._ROW
DESCRIPTOR.message_types_by_name['Worksheet'] = _WORKSHEET
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Worksheet = _reflection.GeneratedProtocolMessageType('Worksheet', (_message.Message,), dict(
  DESCRIPTOR = _WORKSHEET,
  __module__ = 'claros_operations_spreadsheet_worksheet_pb2'
  # @@protoc_insertion_point(class_scope:claros.operations.spreadsheet.Worksheet)
  ))
_sym_db.RegisterMessage(Worksheet)


# @@protoc_insertion_point(module_scope)
