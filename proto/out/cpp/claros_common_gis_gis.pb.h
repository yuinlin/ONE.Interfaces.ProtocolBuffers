// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_gis_gis.proto

#ifndef PROTOBUF_INCLUDED_claros_5fcommon_5fgis_5fgis_2eproto
#define PROTOBUF_INCLUDED_claros_5fcommon_5fgis_5fgis_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "claros_common_gis_point2d.pb.h"
#include "claros_common_gis_point3d.pb.h"
#include "claros_common_gis_multi_point2d.pb.h"
#include "claros_common_gis_multi_point3d.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_claros_5fcommon_5fgis_5fgis_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_claros_5fcommon_5fgis_5fgis_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_claros_5fcommon_5fgis_5fgis_2eproto();
namespace claros {
namespace common {
namespace gis {
class GIS;
class GISDefaultTypeInternal;
extern GISDefaultTypeInternal _GIS_default_instance_;
}  // namespace gis
}  // namespace common
}  // namespace claros
namespace google {
namespace protobuf {
template<> ::claros::common::gis::GIS* Arena::CreateMaybeMessage<::claros::common::gis::GIS>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace claros {
namespace common {
namespace gis {

// ===================================================================

class GIS :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:claros.common.gis.GIS) */ {
 public:
  GIS();
  virtual ~GIS();

  GIS(const GIS& from);

  inline GIS& operator=(const GIS& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GIS(GIS&& from) noexcept
    : GIS() {
    *this = ::std::move(from);
  }

  inline GIS& operator=(GIS&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const GIS& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GIS* internal_default_instance() {
    return reinterpret_cast<const GIS*>(
               &_GIS_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GIS* other);
  friend void swap(GIS& a, GIS& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GIS* New() const final {
    return CreateMaybeMessage<GIS>(nullptr);
  }

  GIS* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GIS>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GIS& from);
  void MergeFrom(const GIS& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GIS* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .claros.common.gis.Point2D point2d = 1;
  bool has_point2d() const;
  void clear_point2d();
  static const int kPoint2DFieldNumber = 1;
  const ::claros::common::gis::Point2D& point2d() const;
  ::claros::common::gis::Point2D* release_point2d();
  ::claros::common::gis::Point2D* mutable_point2d();
  void set_allocated_point2d(::claros::common::gis::Point2D* point2d);

  // .claros.common.gis.Point3D point3d = 2;
  bool has_point3d() const;
  void clear_point3d();
  static const int kPoint3DFieldNumber = 2;
  const ::claros::common::gis::Point3D& point3d() const;
  ::claros::common::gis::Point3D* release_point3d();
  ::claros::common::gis::Point3D* mutable_point3d();
  void set_allocated_point3d(::claros::common::gis::Point3D* point3d);

  // .claros.common.gis.MultiPoint2D multi_point2d = 3;
  bool has_multi_point2d() const;
  void clear_multi_point2d();
  static const int kMultiPoint2DFieldNumber = 3;
  const ::claros::common::gis::MultiPoint2D& multi_point2d() const;
  ::claros::common::gis::MultiPoint2D* release_multi_point2d();
  ::claros::common::gis::MultiPoint2D* mutable_multi_point2d();
  void set_allocated_multi_point2d(::claros::common::gis::MultiPoint2D* multi_point2d);

  // .claros.common.gis.MultiPoint3D multi_point3d = 4;
  bool has_multi_point3d() const;
  void clear_multi_point3d();
  static const int kMultiPoint3DFieldNumber = 4;
  const ::claros::common::gis::MultiPoint3D& multi_point3d() const;
  ::claros::common::gis::MultiPoint3D* release_multi_point3d();
  ::claros::common::gis::MultiPoint3D* mutable_multi_point3d();
  void set_allocated_multi_point3d(::claros::common::gis::MultiPoint3D* multi_point3d);

  // @@protoc_insertion_point(class_scope:claros.common.gis.GIS)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::claros::common::gis::Point2D* point2d_;
  ::claros::common::gis::Point3D* point3d_;
  ::claros::common::gis::MultiPoint2D* multi_point2d_;
  ::claros::common::gis::MultiPoint3D* multi_point3d_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_claros_5fcommon_5fgis_5fgis_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GIS

// .claros.common.gis.Point2D point2d = 1;
inline bool GIS::has_point2d() const {
  return this != internal_default_instance() && point2d_ != nullptr;
}
inline const ::claros::common::gis::Point2D& GIS::point2d() const {
  const ::claros::common::gis::Point2D* p = point2d_;
  // @@protoc_insertion_point(field_get:claros.common.gis.GIS.point2d)
  return p != nullptr ? *p : *reinterpret_cast<const ::claros::common::gis::Point2D*>(
      &::claros::common::gis::_Point2D_default_instance_);
}
inline ::claros::common::gis::Point2D* GIS::release_point2d() {
  // @@protoc_insertion_point(field_release:claros.common.gis.GIS.point2d)
  
  ::claros::common::gis::Point2D* temp = point2d_;
  point2d_ = nullptr;
  return temp;
}
inline ::claros::common::gis::Point2D* GIS::mutable_point2d() {
  
  if (point2d_ == nullptr) {
    auto* p = CreateMaybeMessage<::claros::common::gis::Point2D>(GetArenaNoVirtual());
    point2d_ = p;
  }
  // @@protoc_insertion_point(field_mutable:claros.common.gis.GIS.point2d)
  return point2d_;
}
inline void GIS::set_allocated_point2d(::claros::common::gis::Point2D* point2d) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(point2d_);
  }
  if (point2d) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      point2d = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, point2d, submessage_arena);
    }
    
  } else {
    
  }
  point2d_ = point2d;
  // @@protoc_insertion_point(field_set_allocated:claros.common.gis.GIS.point2d)
}

// .claros.common.gis.Point3D point3d = 2;
inline bool GIS::has_point3d() const {
  return this != internal_default_instance() && point3d_ != nullptr;
}
inline const ::claros::common::gis::Point3D& GIS::point3d() const {
  const ::claros::common::gis::Point3D* p = point3d_;
  // @@protoc_insertion_point(field_get:claros.common.gis.GIS.point3d)
  return p != nullptr ? *p : *reinterpret_cast<const ::claros::common::gis::Point3D*>(
      &::claros::common::gis::_Point3D_default_instance_);
}
inline ::claros::common::gis::Point3D* GIS::release_point3d() {
  // @@protoc_insertion_point(field_release:claros.common.gis.GIS.point3d)
  
  ::claros::common::gis::Point3D* temp = point3d_;
  point3d_ = nullptr;
  return temp;
}
inline ::claros::common::gis::Point3D* GIS::mutable_point3d() {
  
  if (point3d_ == nullptr) {
    auto* p = CreateMaybeMessage<::claros::common::gis::Point3D>(GetArenaNoVirtual());
    point3d_ = p;
  }
  // @@protoc_insertion_point(field_mutable:claros.common.gis.GIS.point3d)
  return point3d_;
}
inline void GIS::set_allocated_point3d(::claros::common::gis::Point3D* point3d) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(point3d_);
  }
  if (point3d) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      point3d = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, point3d, submessage_arena);
    }
    
  } else {
    
  }
  point3d_ = point3d;
  // @@protoc_insertion_point(field_set_allocated:claros.common.gis.GIS.point3d)
}

// .claros.common.gis.MultiPoint2D multi_point2d = 3;
inline bool GIS::has_multi_point2d() const {
  return this != internal_default_instance() && multi_point2d_ != nullptr;
}
inline const ::claros::common::gis::MultiPoint2D& GIS::multi_point2d() const {
  const ::claros::common::gis::MultiPoint2D* p = multi_point2d_;
  // @@protoc_insertion_point(field_get:claros.common.gis.GIS.multi_point2d)
  return p != nullptr ? *p : *reinterpret_cast<const ::claros::common::gis::MultiPoint2D*>(
      &::claros::common::gis::_MultiPoint2D_default_instance_);
}
inline ::claros::common::gis::MultiPoint2D* GIS::release_multi_point2d() {
  // @@protoc_insertion_point(field_release:claros.common.gis.GIS.multi_point2d)
  
  ::claros::common::gis::MultiPoint2D* temp = multi_point2d_;
  multi_point2d_ = nullptr;
  return temp;
}
inline ::claros::common::gis::MultiPoint2D* GIS::mutable_multi_point2d() {
  
  if (multi_point2d_ == nullptr) {
    auto* p = CreateMaybeMessage<::claros::common::gis::MultiPoint2D>(GetArenaNoVirtual());
    multi_point2d_ = p;
  }
  // @@protoc_insertion_point(field_mutable:claros.common.gis.GIS.multi_point2d)
  return multi_point2d_;
}
inline void GIS::set_allocated_multi_point2d(::claros::common::gis::MultiPoint2D* multi_point2d) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(multi_point2d_);
  }
  if (multi_point2d) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      multi_point2d = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, multi_point2d, submessage_arena);
    }
    
  } else {
    
  }
  multi_point2d_ = multi_point2d;
  // @@protoc_insertion_point(field_set_allocated:claros.common.gis.GIS.multi_point2d)
}

// .claros.common.gis.MultiPoint3D multi_point3d = 4;
inline bool GIS::has_multi_point3d() const {
  return this != internal_default_instance() && multi_point3d_ != nullptr;
}
inline const ::claros::common::gis::MultiPoint3D& GIS::multi_point3d() const {
  const ::claros::common::gis::MultiPoint3D* p = multi_point3d_;
  // @@protoc_insertion_point(field_get:claros.common.gis.GIS.multi_point3d)
  return p != nullptr ? *p : *reinterpret_cast<const ::claros::common::gis::MultiPoint3D*>(
      &::claros::common::gis::_MultiPoint3D_default_instance_);
}
inline ::claros::common::gis::MultiPoint3D* GIS::release_multi_point3d() {
  // @@protoc_insertion_point(field_release:claros.common.gis.GIS.multi_point3d)
  
  ::claros::common::gis::MultiPoint3D* temp = multi_point3d_;
  multi_point3d_ = nullptr;
  return temp;
}
inline ::claros::common::gis::MultiPoint3D* GIS::mutable_multi_point3d() {
  
  if (multi_point3d_ == nullptr) {
    auto* p = CreateMaybeMessage<::claros::common::gis::MultiPoint3D>(GetArenaNoVirtual());
    multi_point3d_ = p;
  }
  // @@protoc_insertion_point(field_mutable:claros.common.gis.GIS.multi_point3d)
  return multi_point3d_;
}
inline void GIS::set_allocated_multi_point3d(::claros::common::gis::MultiPoint3D* multi_point3d) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(multi_point3d_);
  }
  if (multi_point3d) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      multi_point3d = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, multi_point3d, submessage_arena);
    }
    
  } else {
    
  }
  multi_point3d_ = multi_point3d;
  // @@protoc_insertion_point(field_set_allocated:claros.common.gis.GIS.multi_point3d)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace gis
}  // namespace common
}  // namespace claros

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_claros_5fcommon_5fgis_5fgis_2eproto