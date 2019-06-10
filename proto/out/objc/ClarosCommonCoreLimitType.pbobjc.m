// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_limit_type.proto

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

#import <stdatomic.h>

#import "ClarosCommonCoreLimitType.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - ClarosCommonCoreLimitTypeRoot

@implementation ClarosCommonCoreLimitTypeRoot

// No extensions in the file and no imports, so no need to generate
// +extensionRegistry.

@end

#pragma mark - Enum LimitType

GPBEnumDescriptor *LimitType_EnumDescriptor(void) {
  static _Atomic(GPBEnumDescriptor*) descriptor = nil;
  if (!descriptor) {
    static const char *valueNames =
        "LUnknown\000LHighalarm\000LHighnear\000LLownear\000L"
        "Lowalarm\000";
    static const int32_t values[] = {
        LimitType_LUnknown,
        LimitType_LHighalarm,
        LimitType_LHighnear,
        LimitType_LLownear,
        LimitType_LLowalarm,
    };
    GPBEnumDescriptor *worker =
        [GPBEnumDescriptor allocDescriptorForName:GPBNSStringifySymbol(LimitType)
                                       valueNames:valueNames
                                           values:values
                                            count:(uint32_t)(sizeof(values) / sizeof(int32_t))
                                     enumVerifier:LimitType_IsValidValue];
    GPBEnumDescriptor *expected = nil;
    if (!atomic_compare_exchange_strong(&descriptor, &expected, worker)) {
      [worker release];
    }
  }
  return descriptor;
}

BOOL LimitType_IsValidValue(int32_t value__) {
  switch (value__) {
    case LimitType_LUnknown:
    case LimitType_LHighalarm:
    case LimitType_LHighnear:
    case LimitType_LLownear:
    case LimitType_LLowalarm:
      return YES;
    default:
      return NO;
  }
}


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)