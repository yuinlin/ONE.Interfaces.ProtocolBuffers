// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_form_field_text.proto

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

@class AuditEvent;
@class Note;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ClarosCommonFormFieldTextRoot

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
@interface ClarosCommonFormFieldTextRoot : GPBRootObject
@end

#pragma mark - FormFieldText

typedef GPB_ENUM(FormFieldText_FieldNumber) {
  FormFieldText_FieldNumber_Id_p = 1,
  FormFieldText_FieldNumber_Value = 2,
  FormFieldText_FieldNumber_Note = 3,
  FormFieldText_FieldNumber_AuditEvent = 4,
};

@interface FormFieldText : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *value;

@property(nonatomic, readwrite, strong, null_resettable) Note *note;
/** Test to see if @c note has been set. */
@property(nonatomic, readwrite) BOOL hasNote;

@property(nonatomic, readwrite, strong, null_resettable) AuditEvent *auditEvent;
/** Test to see if @c auditEvent has been set. */
@property(nonatomic, readwrite) BOOL hasAuditEvent;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)