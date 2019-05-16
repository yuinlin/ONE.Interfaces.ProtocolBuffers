// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_instrument_calibration_standard.proto

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

@class CalibrationValue;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ClarosInstrumentCalibrationStandardRoot

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
@interface ClarosInstrumentCalibrationStandardRoot : GPBRootObject
@end

#pragma mark - CalibrationStandard

typedef GPB_ENUM(CalibrationStandard_FieldNumber) {
  CalibrationStandard_FieldNumber_KnownValue = 1,
  CalibrationStandard_FieldNumber_MeasuredValue = 2,
  CalibrationStandard_FieldNumber_SecondaryValuesArray = 4,
};

@interface CalibrationStandard : GPBMessage

/** this is the primary value  (Concentration) */
@property(nonatomic, readwrite, strong, null_resettable) CalibrationValue *knownValue;
/** Test to see if @c knownValue has been set. */
@property(nonatomic, readwrite) BOOL hasKnownValue;

@property(nonatomic, readwrite, strong, null_resettable) CalibrationValue *measuredValue;
/** Test to see if @c measuredValue has been set. */
@property(nonatomic, readwrite) BOOL hasMeasuredValue;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<CalibrationValue*> *secondaryValuesArray;
/** The number of items in @c secondaryValuesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger secondaryValuesArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)