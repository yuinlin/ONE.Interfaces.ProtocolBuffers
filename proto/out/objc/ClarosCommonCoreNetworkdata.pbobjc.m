// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_networkdata.proto

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

#import "ClarosCommonCoreNetworkdata.pbobjc.h"
#import "ClarosCommonFormFormtemplate.pbobjc.h"
#import "ClarosCommonFormForm.pbobjc.h"
#import "ClarosCommonCoreClarosdatetime.pbobjc.h"
#import "ClarosCommonCoreNote.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdirect-ivar-access"

#pragma mark - ClarosCommonCoreNetworkdataRoot

@implementation ClarosCommonCoreNetworkdataRoot

// No extensions in the file and none of the imports (direct or indirect)
// defined extensions, so no need to generate +extensionRegistry.

@end

#pragma mark - ClarosCommonCoreNetworkdataRoot_FileDescriptor

static GPBFileDescriptor *ClarosCommonCoreNetworkdataRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"claros.common.core"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - NetworkData

@implementation NetworkData

@dynamic responsesArray, responsesArray_Count;

typedef struct NetworkData__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *responsesArray;
} NetworkData__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "responsesArray",
        .dataTypeSpecific.className = GPBStringifySymbol(NetworkData_Response),
        .number = NetworkData_FieldNumber_ResponsesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(NetworkData__storage_, responsesArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[NetworkData class]
                                     rootClass:[ClarosCommonCoreNetworkdataRoot class]
                                          file:ClarosCommonCoreNetworkdataRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(NetworkData__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - NetworkData_Response

@implementation NetworkData_Response

@dynamic responseOneOfOneOfCase;
@dynamic formTemplate;
@dynamic form;
@dynamic dateTime;
@dynamic note;

typedef struct NetworkData_Response__storage_ {
  uint32_t _has_storage_[2];
  FormTemplate *formTemplate;
  Form *form;
  ClarosDateTime *dateTime;
  Note *note;
} NetworkData_Response__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "formTemplate",
        .dataTypeSpecific.className = GPBStringifySymbol(FormTemplate),
        .number = NetworkData_Response_FieldNumber_FormTemplate,
        .hasIndex = -1,
        .offset = (uint32_t)offsetof(NetworkData_Response__storage_, formTemplate),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom),
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "form",
        .dataTypeSpecific.className = GPBStringifySymbol(Form),
        .number = NetworkData_Response_FieldNumber_Form,
        .hasIndex = -1,
        .offset = (uint32_t)offsetof(NetworkData_Response__storage_, form),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "dateTime",
        .dataTypeSpecific.className = GPBStringifySymbol(ClarosDateTime),
        .number = NetworkData_Response_FieldNumber_DateTime,
        .hasIndex = -1,
        .offset = (uint32_t)offsetof(NetworkData_Response__storage_, dateTime),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom),
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "note",
        .dataTypeSpecific.className = GPBStringifySymbol(Note),
        .number = NetworkData_Response_FieldNumber_Note,
        .hasIndex = -1,
        .offset = (uint32_t)offsetof(NetworkData_Response__storage_, note),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[NetworkData_Response class]
                                     rootClass:[ClarosCommonCoreNetworkdataRoot class]
                                          file:ClarosCommonCoreNetworkdataRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(NetworkData_Response__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    static const char *oneofs[] = {
      "responseOneOf",
    };
    [localDescriptor setupOneofs:oneofs
                           count:(uint32_t)(sizeof(oneofs) / sizeof(char*))
                   firstHasIndex:-1];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\002\002\014\000\004\010\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    [localDescriptor setupContainingMessageClassName:GPBStringifySymbol(NetworkData)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

void NetworkData_Response_ClearResponseOneOfOneOfCase(NetworkData_Response *message) {
  GPBDescriptor *descriptor = [message descriptor];
  GPBOneofDescriptor *oneof = [descriptor.oneofs objectAtIndex:0];
  GPBMaybeClearOneof(message, oneof, -1, 0);
}

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)