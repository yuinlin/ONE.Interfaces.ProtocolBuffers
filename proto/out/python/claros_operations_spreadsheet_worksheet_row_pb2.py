# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_operations_spreadsheet_worksheet_row.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import claros_common_core_timewindow_pb2 as claros__common__core__timewindow__pb2
import claros_operations_spreadsheet_worksheet_cell_pb2 as claros__operations__spreadsheet__worksheet__cell__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='claros_operations_spreadsheet_worksheet_row.proto',
  package='claros.operations.spreadsheet',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n1claros_operations_spreadsheet_worksheet_row.proto\x12\x1d\x63laros.operations.spreadsheet\x1a#claros_common_core_timewindow.proto\x1a\x32\x63laros_operations_spreadsheet_worksheet_cell.proto\"\x83\x01\n\x03Row\x12\x11\n\trowNumber\x18\x01 \x01(\r\x12\x35\n\rUTCTimeWindow\x18\x02 \x01(\x0b\x32\x1e.claros.common.core.TimeWindow\x12\x32\n\x05\x63\x65lls\x18\x03 \x03(\x0b\x32#.claros.operations.spreadsheet.Cellb\x06proto3')
  ,
  dependencies=[claros__common__core__timewindow__pb2.DESCRIPTOR,claros__operations__spreadsheet__worksheet__cell__pb2.DESCRIPTOR,])




_ROW = _descriptor.Descriptor(
  name='Row',
  full_name='claros.operations.spreadsheet.Row',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='rowNumber', full_name='claros.operations.spreadsheet.Row.rowNumber', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='UTCTimeWindow', full_name='claros.operations.spreadsheet.Row.UTCTimeWindow', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='cells', full_name='claros.operations.spreadsheet.Row.cells', index=2,
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
  serialized_start=174,
  serialized_end=305,
)

_ROW.fields_by_name['UTCTimeWindow'].message_type = claros__common__core__timewindow__pb2._TIMEWINDOW
_ROW.fields_by_name['cells'].message_type = claros__operations__spreadsheet__worksheet__cell__pb2._CELL
DESCRIPTOR.message_types_by_name['Row'] = _ROW
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Row = _reflection.GeneratedProtocolMessageType('Row', (_message.Message,), dict(
  DESCRIPTOR = _ROW,
  __module__ = 'claros_operations_spreadsheet_worksheet_row_pb2'
  # @@protoc_insertion_point(class_scope:claros.operations.spreadsheet.Row)
  ))
_sym_db.RegisterMessage(Row)


# @@protoc_insertion_point(module_scope)