// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_configuration_rights.proto

#ifndef PROTOBUF_INCLUDED_claros_5fcommon_5fconfiguration_5frights_2eproto
#define PROTOBUF_INCLUDED_claros_5fcommon_5fconfiguration_5frights_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_claros_5fcommon_5fconfiguration_5frights_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_claros_5fcommon_5fconfiguration_5frights_2eproto {
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
void AddDescriptors_claros_5fcommon_5fconfiguration_5frights_2eproto();
namespace claros {
namespace common {
namespace configuration {
class Rights;
class RightsDefaultTypeInternal;
extern RightsDefaultTypeInternal _Rights_default_instance_;
}  // namespace configuration
}  // namespace common
}  // namespace claros
namespace google {
namespace protobuf {
template<> ::claros::common::configuration::Rights* Arena::CreateMaybeMessage<::claros::common::configuration::Rights>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace claros {
namespace common {
namespace configuration {

// ===================================================================

class Rights :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:claros.common.configuration.Rights) */ {
 public:
  Rights();
  virtual ~Rights();

  Rights(const Rights& from);

  inline Rights& operator=(const Rights& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Rights(Rights&& from) noexcept
    : Rights() {
    *this = ::std::move(from);
  }

  inline Rights& operator=(Rights&& from) noexcept {
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
  static const Rights& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Rights* internal_default_instance() {
    return reinterpret_cast<const Rights*>(
               &_Rights_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Rights* other);
  friend void swap(Rights& a, Rights& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Rights* New() const final {
    return CreateMaybeMessage<Rights>(nullptr);
  }

  Rights* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Rights>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Rights& from);
  void MergeFrom(const Rights& from);
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
  void InternalSwap(Rights* other);
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

  // bool view = 2;
  void clear_view();
  static const int kViewFieldNumber = 2;
  bool view() const;
  void set_view(bool value);

  // bool edit = 3;
  void clear_edit();
  static const int kEditFieldNumber = 3;
  bool edit() const;
  void set_edit(bool value);

  // bool delete = 4;
  void clear_delete_();
  static const int kDeleteFieldNumber = 4;
  bool delete_() const;
  void set_delete_(bool value);

  // bool create = 5;
  void clear_create();
  static const int kCreateFieldNumber = 5;
  bool create() const;
  void set_create(bool value);

  // @@protoc_insertion_point(class_scope:claros.common.configuration.Rights)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool view_;
  bool edit_;
  bool delete__;
  bool create_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_claros_5fcommon_5fconfiguration_5frights_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Rights

// bool view = 2;
inline void Rights::clear_view() {
  view_ = false;
}
inline bool Rights::view() const {
  // @@protoc_insertion_point(field_get:claros.common.configuration.Rights.view)
  return view_;
}
inline void Rights::set_view(bool value) {
  
  view_ = value;
  // @@protoc_insertion_point(field_set:claros.common.configuration.Rights.view)
}

// bool edit = 3;
inline void Rights::clear_edit() {
  edit_ = false;
}
inline bool Rights::edit() const {
  // @@protoc_insertion_point(field_get:claros.common.configuration.Rights.edit)
  return edit_;
}
inline void Rights::set_edit(bool value) {
  
  edit_ = value;
  // @@protoc_insertion_point(field_set:claros.common.configuration.Rights.edit)
}

// bool delete = 4;
inline void Rights::clear_delete_() {
  delete__ = false;
}
inline bool Rights::delete_() const {
  // @@protoc_insertion_point(field_get:claros.common.configuration.Rights.delete)
  return delete__;
}
inline void Rights::set_delete_(bool value) {
  
  delete__ = value;
  // @@protoc_insertion_point(field_set:claros.common.configuration.Rights.delete)
}

// bool create = 5;
inline void Rights::clear_create() {
  create_ = false;
}
inline bool Rights::create() const {
  // @@protoc_insertion_point(field_get:claros.common.configuration.Rights.create)
  return create_;
}
inline void Rights::set_create(bool value) {
  
  create_ = value;
  // @@protoc_insertion_point(field_set:claros.common.configuration.Rights.create)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace configuration
}  // namespace common
}  // namespace claros

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_claros_5fcommon_5fconfiguration_5frights_2eproto