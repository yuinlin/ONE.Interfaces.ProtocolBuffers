// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_instrument_measurement_definition.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class ClarosDateTime;
@class Limit;
@class MilliAmpBinding;
@class SCSensorBinding;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ClarosInstrumentMeasurementDefinitionRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface ClarosInstrumentMeasurementDefinitionRoot : GPBRootObject
@end

#pragma mark - InstrumentMeasurementDefinition

typedef GPB_ENUM(InstrumentMeasurementDefinition_FieldNumber) {
  InstrumentMeasurementDefinition_FieldNumber_InstrumentMeasurementId = 1,
  InstrumentMeasurementDefinition_FieldNumber_Name = 2,
  InstrumentMeasurementDefinition_FieldNumber_FusionId = 3,
  InstrumentMeasurementDefinition_FieldNumber_LocationId = 4,
  InstrumentMeasurementDefinition_FieldNumber_ParameterId = 5,
  InstrumentMeasurementDefinition_FieldNumber_DisplayUnitId = 6,
  InstrumentMeasurementDefinition_FieldNumber_IsVisible = 7,
  InstrumentMeasurementDefinition_FieldNumber_ScSensorBinding = 8,
  InstrumentMeasurementDefinition_FieldNumber_MilliAmpBinding = 9,
  InstrumentMeasurementDefinition_FieldNumber_LimitsArray = 10,
  InstrumentMeasurementDefinition_FieldNumber_CreatedById = 11,
  InstrumentMeasurementDefinition_FieldNumber_CreatedOn = 12,
  InstrumentMeasurementDefinition_FieldNumber_ModifiedById = 13,
  InstrumentMeasurementDefinition_FieldNumber_ModifiedOn = 14,
};

typedef GPB_ENUM(InstrumentMeasurementDefinition_Binding_OneOfCase) {
  InstrumentMeasurementDefinition_Binding_OneOfCase_GPBUnsetOneOfCase = 0,
  InstrumentMeasurementDefinition_Binding_OneOfCase_ScSensorBinding = 8,
  InstrumentMeasurementDefinition_Binding_OneOfCase_MilliAmpBinding = 9,
};

@interface InstrumentMeasurementDefinition : GPBMessage

/** This is nullable.  In the case of Instrument Data this would be null until it reaches Claros.Instrument.Measurement */
@property(nonatomic, readwrite, copy, null_resettable) NSString *instrumentMeasurementId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite, copy, null_resettable) NSString *fusionId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *locationId;

@property(nonatomic, readwrite) uint32_t parameterId;

@property(nonatomic, readwrite) uint32_t displayUnitId;

@property(nonatomic, readwrite) BOOL isVisible;

@property(nonatomic, readonly) InstrumentMeasurementDefinition_Binding_OneOfCase bindingOneOfCase;

@property(nonatomic, readwrite, strong, null_resettable) SCSensorBinding *scSensorBinding;

@property(nonatomic, readwrite, strong, null_resettable) MilliAmpBinding *milliAmpBinding;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Limit*> *limitsArray;
/** The number of items in @c limitsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger limitsArray_Count;

@property(nonatomic, readwrite, copy, null_resettable) NSString *createdById;

@property(nonatomic, readwrite, strong, null_resettable) ClarosDateTime *createdOn;
/** Test to see if @c createdOn has been set. */
@property(nonatomic, readwrite) BOOL hasCreatedOn;

@property(nonatomic, readwrite, copy, null_resettable) NSString *modifiedById;

@property(nonatomic, readwrite, strong, null_resettable) ClarosDateTime *modifiedOn;
/** Test to see if @c modifiedOn has been set. */
@property(nonatomic, readwrite) BOOL hasModifiedOn;

@end

/**
 * Clears whatever value was set for the oneof 'binding'.
 **/
void InstrumentMeasurementDefinition_ClearBindingOneOfCase(InstrumentMeasurementDefinition *message);

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)