// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_operations_spreadsheet_spreadsheet.proto

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

@class SpreadsheetDefinition;
@class Worksheet;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ClarosOperationsSpreadsheetSpreadsheetRoot

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
@interface ClarosOperationsSpreadsheetSpreadsheetRoot : GPBRootObject
@end

#pragma mark - Spreadsheet

typedef GPB_ENUM(Spreadsheet_FieldNumber) {
  Spreadsheet_FieldNumber_Name = 1,
  Spreadsheet_FieldNumber_LocationId = 2,
  Spreadsheet_FieldNumber_TimeDefinitionArray = 3,
  Spreadsheet_FieldNumber_WorksheetArray = 4,
};

@interface Spreadsheet : GPBMessage

/** header */
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite, copy, null_resettable) NSString *locationId;

/** definition */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SpreadsheetDefinition*> *timeDefinitionArray;
/** The number of items in @c timeDefinitionArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger timeDefinitionArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Worksheet*> *worksheetArray;
/** The number of items in @c worksheetArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger worksheetArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)