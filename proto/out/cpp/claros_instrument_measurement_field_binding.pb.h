// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_instrument_measurement_field_binding.proto

#ifndef PROTOBUF_INCLUDED_claros_5finstrument_5fmeasurement_5ffield_5fbinding_2eproto
#define PROTOBUF_INCLUDED_claros_5finstrument_5fmeasurement_5ffield_5fbinding_2eproto

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
#include "claros_common_core_clarosdatetime.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_claros_5finstrument_5fmeasurement_5ffield_5fbinding_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_claros_5finstrument_5fmeasurement_5ffield_5fbinding_2eproto {
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
void AddDescriptors_claros_5finstrument_5fmeasurement_5ffield_5fbinding_2eproto();
namespace claros {
namespace instrument {
class InstrumentMeasurementFieldBinding;
class InstrumentMeasurementFieldBindingDefaultTypeInternal;
extern InstrumentMeasurementFieldBindingDefaultTypeInternal _InstrumentMeasurementFieldBinding_default_instance_;
}  // namespace instrument
}  // namespace claros
namespace google {
namespace protobuf {
template<> ::claros::instrument::InstrumentMeasurementFieldBinding* Arena::CreateMaybeMessage<::claros::instrument::InstrumentMeasurementFieldBinding>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace claros {
namespace instrument {

// ===================================================================

class InstrumentMeasurementFieldBinding :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:claros.instrument.InstrumentMeasurementFieldBinding) */ {
 public:
  InstrumentMeasurementFieldBinding();
  virtual ~InstrumentMeasurementFieldBinding();

  InstrumentMeasurementFieldBinding(const InstrumentMeasurementFieldBinding& from);

  inline InstrumentMeasurementFieldBinding& operator=(const InstrumentMeasurementFieldBinding& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InstrumentMeasurementFieldBinding(InstrumentMeasurementFieldBinding&& from) noexcept
    : InstrumentMeasurementFieldBinding() {
    *this = ::std::move(from);
  }

  inline InstrumentMeasurementFieldBinding& operator=(InstrumentMeasurementFieldBinding&& from) noexcept {
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
  static const InstrumentMeasurementFieldBinding& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InstrumentMeasurementFieldBinding* internal_default_instance() {
    return reinterpret_cast<const InstrumentMeasurementFieldBinding*>(
               &_InstrumentMeasurementFieldBinding_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(InstrumentMeasurementFieldBinding* other);
  friend void swap(InstrumentMeasurementFieldBinding& a, InstrumentMeasurementFieldBinding& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InstrumentMeasurementFieldBinding* New() const final {
    return CreateMaybeMessage<InstrumentMeasurementFieldBinding>(nullptr);
  }

  InstrumentMeasurementFieldBinding* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<InstrumentMeasurementFieldBinding>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const InstrumentMeasurementFieldBinding& from);
  void MergeFrom(const InstrumentMeasurementFieldBinding& from);
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
  void InternalSwap(InstrumentMeasurementFieldBinding* other);
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

  // string instrumentMeasurementId = 1;
  void clear_instrumentmeasurementid();
  static const int kInstrumentMeasurementIdFieldNumber = 1;
  const ::std::string& instrumentmeasurementid() const;
  void set_instrumentmeasurementid(const ::std::string& value);
  #if LANG_CXX11
  void set_instrumentmeasurementid(::std::string&& value);
  #endif
  void set_instrumentmeasurementid(const char* value);
  void set_instrumentmeasurementid(const char* value, size_t size);
  ::std::string* mutable_instrumentmeasurementid();
  ::std::string* release_instrumentmeasurementid();
  void set_allocated_instrumentmeasurementid(::std::string* instrumentmeasurementid);

  // .claros.common.core.ClarosDateTime timestamp = 2;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 2;
  const ::claros::common::core::ClarosDateTime& timestamp() const;
  ::claros::common::core::ClarosDateTime* release_timestamp();
  ::claros::common::core::ClarosDateTime* mutable_timestamp();
  void set_allocated_timestamp(::claros::common::core::ClarosDateTime* timestamp);

  // uint32 unitId = 3;
  void clear_unitid();
  static const int kUnitIdFieldNumber = 3;
  ::google::protobuf::uint32 unitid() const;
  void set_unitid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:claros.instrument.InstrumentMeasurementFieldBinding)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr instrumentmeasurementid_;
  ::claros::common::core::ClarosDateTime* timestamp_;
  ::google::protobuf::uint32 unitid_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_claros_5finstrument_5fmeasurement_5ffield_5fbinding_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InstrumentMeasurementFieldBinding

// string instrumentMeasurementId = 1;
inline void InstrumentMeasurementFieldBinding::clear_instrumentmeasurementid() {
  instrumentmeasurementid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& InstrumentMeasurementFieldBinding::instrumentmeasurementid() const {
  // @@protoc_insertion_point(field_get:claros.instrument.InstrumentMeasurementFieldBinding.instrumentMeasurementId)
  return instrumentmeasurementid_.GetNoArena();
}
inline void InstrumentMeasurementFieldBinding::set_instrumentmeasurementid(const ::std::string& value) {
  
  instrumentmeasurementid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.instrument.InstrumentMeasurementFieldBinding.instrumentMeasurementId)
}
#if LANG_CXX11
inline void InstrumentMeasurementFieldBinding::set_instrumentmeasurementid(::std::string&& value) {
  
  instrumentmeasurementid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.instrument.InstrumentMeasurementFieldBinding.instrumentMeasurementId)
}
#endif
inline void InstrumentMeasurementFieldBinding::set_instrumentmeasurementid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  instrumentmeasurementid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.instrument.InstrumentMeasurementFieldBinding.instrumentMeasurementId)
}
inline void InstrumentMeasurementFieldBinding::set_instrumentmeasurementid(const char* value, size_t size) {
  
  instrumentmeasurementid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.instrument.InstrumentMeasurementFieldBinding.instrumentMeasurementId)
}
inline ::std::string* InstrumentMeasurementFieldBinding::mutable_instrumentmeasurementid() {
  
  // @@protoc_insertion_point(field_mutable:claros.instrument.InstrumentMeasurementFieldBinding.instrumentMeasurementId)
  return instrumentmeasurementid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* InstrumentMeasurementFieldBinding::release_instrumentmeasurementid() {
  // @@protoc_insertion_point(field_release:claros.instrument.InstrumentMeasurementFieldBinding.instrumentMeasurementId)
  
  return instrumentmeasurementid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void InstrumentMeasurementFieldBinding::set_allocated_instrumentmeasurementid(::std::string* instrumentmeasurementid) {
  if (instrumentmeasurementid != nullptr) {
    
  } else {
    
  }
  instrumentmeasurementid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), instrumentmeasurementid);
  // @@protoc_insertion_point(field_set_allocated:claros.instrument.InstrumentMeasurementFieldBinding.instrumentMeasurementId)
}

// .claros.common.core.ClarosDateTime timestamp = 2;
inline bool InstrumentMeasurementFieldBinding::has_timestamp() const {
  return this != internal_default_instance() && timestamp_ != nullptr;
}
inline const ::claros::common::core::ClarosDateTime& InstrumentMeasurementFieldBinding::timestamp() const {
  const ::claros::common::core::ClarosDateTime* p = timestamp_;
  // @@protoc_insertion_point(field_get:claros.instrument.InstrumentMeasurementFieldBinding.timestamp)
  return p != nullptr ? *p : *reinterpret_cast<const ::claros::common::core::ClarosDateTime*>(
      &::claros::common::core::_ClarosDateTime_default_instance_);
}
inline ::claros::common::core::ClarosDateTime* InstrumentMeasurementFieldBinding::release_timestamp() {
  // @@protoc_insertion_point(field_release:claros.instrument.InstrumentMeasurementFieldBinding.timestamp)
  
  ::claros::common::core::ClarosDateTime* temp = timestamp_;
  timestamp_ = nullptr;
  return temp;
}
inline ::claros::common::core::ClarosDateTime* InstrumentMeasurementFieldBinding::mutable_timestamp() {
  
  if (timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<::claros::common::core::ClarosDateTime>(GetArenaNoVirtual());
    timestamp_ = p;
  }
  // @@protoc_insertion_point(field_mutable:claros.instrument.InstrumentMeasurementFieldBinding.timestamp)
  return timestamp_;
}
inline void InstrumentMeasurementFieldBinding::set_allocated_timestamp(::claros::common::core::ClarosDateTime* timestamp) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(timestamp_);
  }
  if (timestamp) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      timestamp = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    
  } else {
    
  }
  timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:claros.instrument.InstrumentMeasurementFieldBinding.timestamp)
}

// uint32 unitId = 3;
inline void InstrumentMeasurementFieldBinding::clear_unitid() {
  unitid_ = 0u;
}
inline ::google::protobuf::uint32 InstrumentMeasurementFieldBinding::unitid() const {
  // @@protoc_insertion_point(field_get:claros.instrument.InstrumentMeasurementFieldBinding.unitId)
  return unitid_;
}
inline void InstrumentMeasurementFieldBinding::set_unitid(::google::protobuf::uint32 value) {
  
  unitid_ = value;
  // @@protoc_insertion_point(field_set:claros.instrument.InstrumentMeasurementFieldBinding.unitId)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace instrument
}  // namespace claros

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_claros_5finstrument_5fmeasurement_5ffield_5fbinding_2eproto