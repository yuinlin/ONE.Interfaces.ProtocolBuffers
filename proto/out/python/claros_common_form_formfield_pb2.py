# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_form_formfield.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import claros_common_form_formdataentry_type_pb2 as claros__common__form__formdataentry__type__pb2
import claros_operations_spreadsheet_worksheet_cell_pb2 as claros__operations__spreadsheet__worksheet__cell__pb2
import claros_instrument_data_pb2 as claros__instrument__data__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='claros_common_form_formfield.proto',
  package='claros.common.form',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\"claros_common_form_formfield.proto\x12\x12\x63laros.common.form\x1a+claros_common_form_formdataentry_type.proto\x1a\x32\x63laros_operations_spreadsheet_worksheet_cell.proto\x1a\x1c\x63laros_instrument_data.proto\"\xa8\x02\n\tFormField\x12\x0c\n\x04guid\x18\x01 \x01(\t\x12\x1d\n\x15\x66ormFieldDefinitionId\x18\x02 \x01(\t\x12@\n\x11\x66ormDataEntryType\x18\x03 \x01(\x0e\x32%.claros.common.form.FormDataEntryType\x12\x1d\n\x15isDataEntryTypeLocked\x18\x04 \x01(\x08\x12\x0c\n\x04name\x18\x05 \x01(\t\x12\x33\n\x04\x63\x65ll\x18\x06 \x01(\x0b\x32#.claros.operations.spreadsheet.CellH\x00\x12\x39\n\x0einstrumentData\x18\x07 \x03(\x0b\x32!.claros.instrument.InstrumentDataB\x0f\n\rFormFieldDatab\x06proto3')
  ,
  dependencies=[claros__common__form__formdataentry__type__pb2.DESCRIPTOR,claros__operations__spreadsheet__worksheet__cell__pb2.DESCRIPTOR,claros__instrument__data__pb2.DESCRIPTOR,])




_FORMFIELD = _descriptor.Descriptor(
  name='FormField',
  full_name='claros.common.form.FormField',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='guid', full_name='claros.common.form.FormField.guid', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='formFieldDefinitionId', full_name='claros.common.form.FormField.formFieldDefinitionId', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='formDataEntryType', full_name='claros.common.form.FormField.formDataEntryType', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='isDataEntryTypeLocked', full_name='claros.common.form.FormField.isDataEntryTypeLocked', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='claros.common.form.FormField.name', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='cell', full_name='claros.common.form.FormField.cell', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='instrumentData', full_name='claros.common.form.FormField.instrumentData', index=6,
      number=7, type=11, cpp_type=10, label=3,
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
    _descriptor.OneofDescriptor(
      name='FormFieldData', full_name='claros.common.form.FormField.FormFieldData',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=186,
  serialized_end=482,
)

_FORMFIELD.fields_by_name['formDataEntryType'].enum_type = claros__common__form__formdataentry__type__pb2._FORMDATAENTRYTYPE
_FORMFIELD.fields_by_name['cell'].message_type = claros__operations__spreadsheet__worksheet__cell__pb2._CELL
_FORMFIELD.fields_by_name['instrumentData'].message_type = claros__instrument__data__pb2._INSTRUMENTDATA
_FORMFIELD.oneofs_by_name['FormFieldData'].fields.append(
  _FORMFIELD.fields_by_name['cell'])
_FORMFIELD.fields_by_name['cell'].containing_oneof = _FORMFIELD.oneofs_by_name['FormFieldData']
DESCRIPTOR.message_types_by_name['FormField'] = _FORMFIELD
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

FormField = _reflection.GeneratedProtocolMessageType('FormField', (_message.Message,), dict(
  DESCRIPTOR = _FORMFIELD,
  __module__ = 'claros_common_form_formfield_pb2'
  # @@protoc_insertion_point(class_scope:claros.common.form.FormField)
  ))
_sym_db.RegisterMessage(FormField)


# @@protoc_insertion_point(module_scope)