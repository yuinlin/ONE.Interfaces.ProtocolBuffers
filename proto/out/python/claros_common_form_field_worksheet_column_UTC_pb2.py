# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_form_field_worksheet_column_UTC.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import claros_operations_spreadsheet_worksheet_column_pb2 as claros__operations__spreadsheet__worksheet__column__pb2
import claros_operations_spreadsheet_worksheet_type_pb2 as claros__operations__spreadsheet__worksheet__type__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='claros_common_form_field_worksheet_column_UTC.proto',
  package='claros.common.form',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n3claros_common_form_field_worksheet_column_UTC.proto\x12\x12\x63laros.common.form\x1a\x34\x63laros_operations_spreadsheet_worksheet_column.proto\x1a\x32\x63laros_operations_spreadsheet_worksheet_type.proto\"\xaa\x01\n\x1b\x46ormFieldWorksheetColumnUTC\x12\x0f\n\x07plantId\x18\x01 \x01(\t\x12\x43\n\rworksheetType\x18\x02 \x01(\x0e\x32,.claros.operations.spreadsheet.WorksheetType\x12\x35\n\x06\x63olumn\x18\x03 \x01(\x0b\x32%.claros.operations.spreadsheet.Columnb\x06proto3')
  ,
  dependencies=[claros__operations__spreadsheet__worksheet__column__pb2.DESCRIPTOR,claros__operations__spreadsheet__worksheet__type__pb2.DESCRIPTOR,])




_FORMFIELDWORKSHEETCOLUMNUTC = _descriptor.Descriptor(
  name='FormFieldWorksheetColumnUTC',
  full_name='claros.common.form.FormFieldWorksheetColumnUTC',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='plantId', full_name='claros.common.form.FormFieldWorksheetColumnUTC.plantId', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='worksheetType', full_name='claros.common.form.FormFieldWorksheetColumnUTC.worksheetType', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='column', full_name='claros.common.form.FormFieldWorksheetColumnUTC.column', index=2,
      number=3, type=11, cpp_type=10, label=1,
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
  serialized_start=182,
  serialized_end=352,
)

_FORMFIELDWORKSHEETCOLUMNUTC.fields_by_name['worksheetType'].enum_type = claros__operations__spreadsheet__worksheet__type__pb2._WORKSHEETTYPE
_FORMFIELDWORKSHEETCOLUMNUTC.fields_by_name['column'].message_type = claros__operations__spreadsheet__worksheet__column__pb2._COLUMN
DESCRIPTOR.message_types_by_name['FormFieldWorksheetColumnUTC'] = _FORMFIELDWORKSHEETCOLUMNUTC
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

FormFieldWorksheetColumnUTC = _reflection.GeneratedProtocolMessageType('FormFieldWorksheetColumnUTC', (_message.Message,), dict(
  DESCRIPTOR = _FORMFIELDWORKSHEETCOLUMNUTC,
  __module__ = 'claros_common_form_field_worksheet_column_UTC_pb2'
  # @@protoc_insertion_point(class_scope:claros.common.form.FormFieldWorksheetColumnUTC)
  ))
_sym_db.RegisterMessage(FormFieldWorksheetColumnUTC)


# @@protoc_insertion_point(module_scope)