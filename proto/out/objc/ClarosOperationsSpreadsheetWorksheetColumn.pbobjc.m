// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_operations_spreadsheet_worksheet_column.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers_RuntimeSupport.h>
#else
 #import "GPBProtocolBuffers_RuntimeSupport.h"
#endif

#import "ClarosOperationsSpreadsheetWorksheetColumn.pbobjc.h"
#import "ClarosCommonCoreDatasourceType.pbobjc.h"
#import "ClarosCommonCoreLimit.pbobjc.h"
#import "ClarosInstrumentMeasurementBinding.pbobjc.h"
#import "ClarosCommonComputationBinding.pbobjc.h"
#import "ClarosCommonCoreReportablequalifierdefinition.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdirect-ivar-access"

#pragma mark - ClarosOperationsSpreadsheetWorksheetColumnRoot

@implementation ClarosOperationsSpreadsheetWorksheetColumnRoot

// No extensions in the file and none of the imports (direct or indirect)
// defined extensions, so no need to generate +extensionRegistry.

@end

#pragma mark - ClarosOperationsSpreadsheetWorksheetColumnRoot_FileDescriptor

static GPBFileDescriptor *ClarosOperationsSpreadsheetWorksheetColumnRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"claros.operations.spreadsheet"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - Column

@implementation Column

@dynamic bindingOneOfCase;
@dynamic columnNumber;
@dynamic name;
@dynamic description_p;
@dynamic parameterId;
@dynamic displayUnitId;
@dynamic locationId;
@dynamic isActive;
@dynamic limitsArray, limitsArray_Count;
@dynamic dataSourceType;
@dynamic instrumentMeasurementBinding;
@dynamic computationBinding;
@dynamic reportableQualiferDefinitionArray, reportableQualiferDefinitionArray_Count;

typedef struct Column__storage_ {
  uint32_t _has_storage_[2];
  uint32_t columnNumber;
  uint32_t parameterId;
  uint32_t displayUnitId;
  DataSourceType dataSourceType;
  NSString *name;
  NSString *description_p;
  NSString *locationId;
  NSMutableArray *limitsArray;
  InstrumentMeasurementBinding *instrumentMeasurementBinding;
  ComputationBinding *computationBinding;
  NSMutableArray *reportableQualiferDefinitionArray;
} Column__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "columnNumber",
        .dataTypeSpecific.className = NULL,
        .number = Column_FieldNumber_ColumnNumber,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Column__storage_, columnNumber),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom),
        .dataType = GPBDataTypeUInt32,
      },
      {
        .name = "name",
        .dataTypeSpecific.className = NULL,
        .number = Column_FieldNumber_Name,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Column__storage_, name),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "description_p",
        .dataTypeSpecific.className = NULL,
        .number = Column_FieldNumber_Description_p,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(Column__storage_, description_p),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "parameterId",
        .dataTypeSpecific.className = NULL,
        .number = Column_FieldNumber_ParameterId,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(Column__storage_, parameterId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom),
        .dataType = GPBDataTypeUInt32,
      },
      {
        .name = "displayUnitId",
        .dataTypeSpecific.className = NULL,
        .number = Column_FieldNumber_DisplayUnitId,
        .hasIndex = 4,
        .offset = (uint32_t)offsetof(Column__storage_, displayUnitId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom),
        .dataType = GPBDataTypeUInt32,
      },
      {
        .name = "locationId",
        .dataTypeSpecific.className = NULL,
        .number = Column_FieldNumber_LocationId,
        .hasIndex = 5,
        .offset = (uint32_t)offsetof(Column__storage_, locationId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "isActive",
        .dataTypeSpecific.className = NULL,
        .number = Column_FieldNumber_IsActive,
        .hasIndex = 6,
        .offset = 7,  // Stored in _has_storage_ to save space.
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom),
        .dataType = GPBDataTypeBool,
      },
      {
        .name = "limitsArray",
        .dataTypeSpecific.className = GPBStringifySymbol(Limit),
        .number = Column_FieldNumber_LimitsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Column__storage_, limitsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "dataSourceType",
        .dataTypeSpecific.enumDescFunc = DataSourceType_EnumDescriptor,
        .number = Column_FieldNumber_DataSourceType,
        .hasIndex = 8,
        .offset = (uint32_t)offsetof(Column__storage_, dataSourceType),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "instrumentMeasurementBinding",
        .dataTypeSpecific.className = GPBStringifySymbol(InstrumentMeasurementBinding),
        .number = Column_FieldNumber_InstrumentMeasurementBinding,
        .hasIndex = -1,
        .offset = (uint32_t)offsetof(Column__storage_, instrumentMeasurementBinding),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom),
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "computationBinding",
        .dataTypeSpecific.className = GPBStringifySymbol(ComputationBinding),
        .number = Column_FieldNumber_ComputationBinding,
        .hasIndex = -1,
        .offset = (uint32_t)offsetof(Column__storage_, computationBinding),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom),
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "reportableQualiferDefinitionArray",
        .dataTypeSpecific.className = GPBStringifySymbol(ReportableQualifierDefinition),
        .number = Column_FieldNumber_ReportableQualiferDefinitionArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Column__storage_, reportableQualiferDefinitionArray),
        .flags = (GPBFieldFlags)(GPBFieldRepeated | GPBFieldTextFormatNameCustom),
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Column class]
                                     rootClass:[ClarosOperationsSpreadsheetWorksheetColumnRoot class]
                                          file:ClarosOperationsSpreadsheetWorksheetColumnRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Column__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    static const char *oneofs[] = {
      "binding",
    };
    [localDescriptor setupOneofs:oneofs
                           count:(uint32_t)(sizeof(oneofs) / sizeof(char*))
                   firstHasIndex:-1];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\t\001\014\000\004\013\000\005\r\000\006\n\000\007\010\000\t\016\000\n\034\000\013\022\000\014\000reportableQua"
        "liferDefinition\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

int32_t Column_DataSourceType_RawValue(Column *message) {
  GPBDescriptor *descriptor = [Column descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:Column_FieldNumber_DataSourceType];
  return GPBGetMessageInt32Field(message, field);
}

void SetColumn_DataSourceType_RawValue(Column *message, int32_t value) {
  GPBDescriptor *descriptor = [Column descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:Column_FieldNumber_DataSourceType];
  GPBSetInt32IvarWithFieldInternal(message, field, value, descriptor.file.syntax);
}

void Column_ClearBindingOneOfCase(Column *message) {
  GPBDescriptor *descriptor = [message descriptor];
  GPBOneofDescriptor *oneof = [descriptor.oneofs objectAtIndex:0];
  GPBMaybeClearOneof(message, oneof, -1, 0);
}

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)