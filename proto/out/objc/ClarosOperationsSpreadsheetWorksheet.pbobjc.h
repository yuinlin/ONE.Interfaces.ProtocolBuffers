// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_operations_spreadsheet_worksheet.proto

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

@class Row;
@class WorksheetDefinition;
GPB_ENUM_FWD_DECLARE(WorksheetType);

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ClarosOperationsSpreadsheetWorksheetRoot

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
@interface ClarosOperationsSpreadsheetWorksheetRoot : GPBRootObject
@end

#pragma mark - Worksheet

typedef GPB_ENUM(Worksheet_FieldNumber) {
  Worksheet_FieldNumber_WorksheetType = 1,
  Worksheet_FieldNumber_WorksheetDefinitionsArray = 2,
  Worksheet_FieldNumber_RowsArray = 3,
};

@interface Worksheet : GPBMessage

/** header */
@property(nonatomic, readwrite) enum WorksheetType worksheetType;

/** definition */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<WorksheetDefinition*> *worksheetDefinitionsArray;
/** The number of items in @c worksheetDefinitionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger worksheetDefinitionsArray_Count;

/** data */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Row*> *rowsArray;
/** The number of items in @c rowsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger rowsArray_Count;

@end

/**
 * Fetches the raw value of a @c Worksheet's @c worksheetType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t Worksheet_WorksheetType_RawValue(Worksheet *message);
/**
 * Sets the raw value of an @c Worksheet's @c worksheetType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetWorksheet_WorksheetType_RawValue(Worksheet *message, int32_t value);

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)