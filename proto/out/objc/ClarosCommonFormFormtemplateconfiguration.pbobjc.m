// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_form_formtemplateconfiguration.proto

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

#import "ClarosCommonFormFormtemplateconfiguration.pbobjc.h"
#import "ClarosCommonFormFormtemplateType.pbobjc.h"
#import "ClarosCommonCoreRecurrence.pbobjc.h"
#import "ClarosCommonFormFormlayout.pbobjc.h"
#import "ClarosCommonFormFormfieldDefinition.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - ClarosCommonFormFormtemplateconfigurationRoot

@implementation ClarosCommonFormFormtemplateconfigurationRoot

// No extensions in the file and none of the imports (direct or indirect)
// defined extensions, so no need to generate +extensionRegistry.

@end

#pragma mark - ClarosCommonFormFormtemplateconfigurationRoot_FileDescriptor

static GPBFileDescriptor *ClarosCommonFormFormtemplateconfigurationRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"claros.common.form"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - FormTemplateConfiguration

@implementation FormTemplateConfiguration

@dynamic formTemplateType;
@dynamic hasRecurrence, recurrence;
@dynamic hasFormLayout, formLayout;
@dynamic formFieldDefinitionsArray, formFieldDefinitionsArray_Count;

typedef struct FormTemplateConfiguration__storage_ {
  uint32_t _has_storage_[1];
  FormTemplateType formTemplateType;
  Recurrence *recurrence;
  FormLayout *formLayout;
  NSMutableArray *formFieldDefinitionsArray;
} FormTemplateConfiguration__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "formTemplateType",
        .dataTypeSpecific.enumDescFunc = FormTemplateType_EnumDescriptor,
        .number = FormTemplateConfiguration_FieldNumber_FormTemplateType,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(FormTemplateConfiguration__storage_, formTemplateType),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "recurrence",
        .dataTypeSpecific.className = GPBStringifySymbol(Recurrence),
        .number = FormTemplateConfiguration_FieldNumber_Recurrence,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(FormTemplateConfiguration__storage_, recurrence),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "formLayout",
        .dataTypeSpecific.className = GPBStringifySymbol(FormLayout),
        .number = FormTemplateConfiguration_FieldNumber_FormLayout,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(FormTemplateConfiguration__storage_, formLayout),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom),
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "formFieldDefinitionsArray",
        .dataTypeSpecific.className = GPBStringifySymbol(FormFieldDefinition),
        .number = FormTemplateConfiguration_FieldNumber_FormFieldDefinitionsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(FormTemplateConfiguration__storage_, formFieldDefinitionsArray),
        .flags = (GPBFieldFlags)(GPBFieldRepeated | GPBFieldTextFormatNameCustom),
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[FormTemplateConfiguration class]
                                     rootClass:[ClarosCommonFormFormtemplateconfigurationRoot class]
                                          file:ClarosCommonFormFormtemplateconfigurationRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(FormTemplateConfiguration__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\003\001\020\000\003\n\000\004\000formFieldDefinitions\000";
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

int32_t FormTemplateConfiguration_FormTemplateType_RawValue(FormTemplateConfiguration *message) {
  GPBDescriptor *descriptor = [FormTemplateConfiguration descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:FormTemplateConfiguration_FieldNumber_FormTemplateType];
  return GPBGetMessageInt32Field(message, field);
}

void SetFormTemplateConfiguration_FormTemplateType_RawValue(FormTemplateConfiguration *message, int32_t value) {
  GPBDescriptor *descriptor = [FormTemplateConfiguration descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:FormTemplateConfiguration_FieldNumber_FormTemplateType];
  GPBSetInt32IvarWithFieldInternal(message, field, value, descriptor.file.syntax);
}


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)