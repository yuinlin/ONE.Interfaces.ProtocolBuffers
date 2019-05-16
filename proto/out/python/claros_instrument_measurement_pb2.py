# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_instrument_measurement.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import claros_common_measurement_pb2 as claros__common__measurement__pb2
import claros_instrument_event_pb2 as claros__instrument__event__pb2
import claros_common_gis_gis_pb2 as claros__common__gis__gis__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='claros_instrument_measurement.proto',
  package='claros.instrument',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n#claros_instrument_measurement.proto\x12\x11\x63laros.instrument\x1a\x1f\x63laros_common_measurement.proto\x1a\x1d\x63laros_instrument_event.proto\x1a\x1b\x63laros_common_gis_gis.proto\"\xda\x02\n\x15InstrumentMeasurement\x12\x1f\n\x17instrumentMeasurementId\x18\x01 \x01(\t\x12\x0f\n\x07\x63hannel\x18\x02 \x01(\x05\x12\x10\n\x08\x66usionId\x18\x03 \x01(\t\x12/\n\x0bmeasurement\x18\x04 \x01(\x0b\x32\x1a.claros.common.Measurement\x12H\n\x16supportingMeasurements\x18\x05 \x01(\x0b\x32(.claros.instrument.InstrumentMeasurement\x12#\n\x03gis\x18\x06 \x01(\x0b\x32\x16.claros.common.gis.GIS\x12\x1f\n\x17measurementDataExtended\x18\x07 \x01(\t\x12<\n\x10measurementEvent\x18\x08 \x01(\x0b\x32\".claros.instrument.InstrumentEventb\x06proto3')
  ,
  dependencies=[claros__common__measurement__pb2.DESCRIPTOR,claros__instrument__event__pb2.DESCRIPTOR,claros__common__gis__gis__pb2.DESCRIPTOR,])




_INSTRUMENTMEASUREMENT = _descriptor.Descriptor(
  name='InstrumentMeasurement',
  full_name='claros.instrument.InstrumentMeasurement',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='instrumentMeasurementId', full_name='claros.instrument.InstrumentMeasurement.instrumentMeasurementId', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='channel', full_name='claros.instrument.InstrumentMeasurement.channel', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='fusionId', full_name='claros.instrument.InstrumentMeasurement.fusionId', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='measurement', full_name='claros.instrument.InstrumentMeasurement.measurement', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='supportingMeasurements', full_name='claros.instrument.InstrumentMeasurement.supportingMeasurements', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='gis', full_name='claros.instrument.InstrumentMeasurement.gis', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='measurementDataExtended', full_name='claros.instrument.InstrumentMeasurement.measurementDataExtended', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='measurementEvent', full_name='claros.instrument.InstrumentMeasurement.measurementEvent', index=7,
      number=8, type=11, cpp_type=10, label=1,
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
  serialized_start=152,
  serialized_end=498,
)

_INSTRUMENTMEASUREMENT.fields_by_name['measurement'].message_type = claros__common__measurement__pb2._MEASUREMENT
_INSTRUMENTMEASUREMENT.fields_by_name['supportingMeasurements'].message_type = _INSTRUMENTMEASUREMENT
_INSTRUMENTMEASUREMENT.fields_by_name['gis'].message_type = claros__common__gis__gis__pb2._GIS
_INSTRUMENTMEASUREMENT.fields_by_name['measurementEvent'].message_type = claros__instrument__event__pb2._INSTRUMENTEVENT
DESCRIPTOR.message_types_by_name['InstrumentMeasurement'] = _INSTRUMENTMEASUREMENT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

InstrumentMeasurement = _reflection.GeneratedProtocolMessageType('InstrumentMeasurement', (_message.Message,), dict(
  DESCRIPTOR = _INSTRUMENTMEASUREMENT,
  __module__ = 'claros_instrument_measurement_pb2'
  # @@protoc_insertion_point(class_scope:claros.instrument.InstrumentMeasurement)
  ))
_sym_db.RegisterMessage(InstrumentMeasurement)


# @@protoc_insertion_point(module_scope)