// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_gis_multi_point3d.proto

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

@class Point3D;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ClarosCommonGisMultiPoint3DRoot

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
@interface ClarosCommonGisMultiPoint3DRoot : GPBRootObject
@end

#pragma mark - MultiPoint3D

typedef GPB_ENUM(MultiPoint3D_FieldNumber) {
  MultiPoint3D_FieldNumber_PointArray = 1,
};

@interface MultiPoint3D : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Point3D*> *pointArray;
/** The number of items in @c pointArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger pointArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
