# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_form_formcolumn.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='claros_common_form_formcolumn.proto',
  package='claros.common.form',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n#claros_common_form_formcolumn.proto\x12\x12\x63laros.common.form\"2\n\nFormColumn\x12\x0e\n\x06number\x18\x01 \x01(\r\x12\x14\n\x0c\x66ormFieldIds\x18\x02 \x03(\tb\x06proto3')
)




_FORMCOLUMN = _descriptor.Descriptor(
  name='FormColumn',
  full_name='claros.common.form.FormColumn',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='number', full_name='claros.common.form.FormColumn.number', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='formFieldIds', full_name='claros.common.form.FormColumn.formFieldIds', index=1,
      number=2, type=9, cpp_type=9, label=3,
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
  serialized_start=59,
  serialized_end=109,
)

DESCRIPTOR.message_types_by_name['FormColumn'] = _FORMCOLUMN
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

FormColumn = _reflection.GeneratedProtocolMessageType('FormColumn', (_message.Message,), dict(
  DESCRIPTOR = _FORMCOLUMN,
  __module__ = 'claros_common_form_formcolumn_pb2'
  # @@protoc_insertion_point(class_scope:claros.common.form.FormColumn)
  ))
_sym_db.RegisterMessage(FormColumn)


# @@protoc_insertion_point(module_scope)
