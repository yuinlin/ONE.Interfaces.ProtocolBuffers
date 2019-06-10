// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_instrument_measurement_milliamp_binding.proto

#ifndef PROTOBUF_INCLUDED_claros_5finstrument_5fmeasurement_5fmilliamp_5fbinding_2eproto
#define PROTOBUF_INCLUDED_claros_5finstrument_5fmeasurement_5fmilliamp_5fbinding_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_claros_5finstrument_5fmeasurement_5fmilliamp_5fbinding_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_claros_5finstrument_5fmeasurement_5fmilliamp_5fbinding_2eproto {
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
void AddDescriptors_claros_5finstrument_5fmeasurement_5fmilliamp_5fbinding_2eproto();
namespace claros {
namespace instrument {
class MilliAmpBinding;
class MilliAmpBindingDefaultTypeInternal;
extern MilliAmpBindingDefaultTypeInternal _MilliAmpBinding_default_instance_;
}  // namespace instrument
}  // namespace claros
namespace google {
namespace protobuf {
template<> ::claros::instrument::MilliAmpBinding* Arena::CreateMaybeMessage<::claros::instrument::MilliAmpBinding>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace claros {
namespace instrument {

// ===================================================================

class MilliAmpBinding :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:claros.instrument.MilliAmpBinding) */ {
 public:
  MilliAmpBinding();
  virtual ~MilliAmpBinding();

  MilliAmpBinding(const MilliAmpBinding& from);

  inline MilliAmpBinding& operator=(const MilliAmpBinding& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MilliAmpBinding(MilliAmpBinding&& from) noexcept
    : MilliAmpBinding() {
    *this = ::std::move(from);
  }

  inline MilliAmpBinding& operator=(MilliAmpBinding&& from) noexcept {
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
  static const MilliAmpBinding& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MilliAmpBinding* internal_default_instance() {
    return reinterpret_cast<const MilliAmpBinding*>(
               &_MilliAmpBinding_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MilliAmpBinding* other);
  friend void swap(MilliAmpBinding& a, MilliAmpBinding& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MilliAmpBinding* New() const final {
    return CreateMaybeMessage<MilliAmpBinding>(nullptr);
  }

  MilliAmpBinding* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MilliAmpBinding>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MilliAmpBinding& from);
  void MergeFrom(const MilliAmpBinding& from);
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
  void InternalSwap(MilliAmpBinding* other);
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

  // string cardName = 1;
  void clear_cardname();
  static const int kCardNameFieldNumber = 1;
  const ::std::string& cardname() const;
  void set_cardname(const ::std::string& value);
  #if LANG_CXX11
  void set_cardname(::std::string&& value);
  #endif
  void set_cardname(const char* value);
  void set_cardname(const char* value, size_t size);
  ::std::string* mutable_cardname();
  ::std::string* release_cardname();
  void set_allocated_cardname(::std::string* cardname);

  // .claros.common.core.ClarosDateTime validFrom = 3;
  bool has_validfrom() const;
  void clear_validfrom();
  static const int kValidFromFieldNumber = 3;
  const ::claros::common::core::ClarosDateTime& validfrom() const;
  ::claros::common::core::ClarosDateTime* release_validfrom();
  ::claros::common::core::ClarosDateTime* mutable_validfrom();
  void set_allocated_validfrom(::claros::common::core::ClarosDateTime* validfrom);

  // .claros.common.core.ClarosDateTime validTo = 4;
  bool has_validto() const;
  void clear_validto();
  static const int kValidToFieldNumber = 4;
  const ::claros::common::core::ClarosDateTime& validto() const;
  ::claros::common::core::ClarosDateTime* release_validto();
  ::claros::common::core::ClarosDateTime* mutable_validto();
  void set_allocated_validto(::claros::common::core::ClarosDateTime* validto);

  // uint32 channel = 2;
  void clear_channel();
  static const int kChannelFieldNumber = 2;
  ::google::protobuf::uint32 channel() const;
  void set_channel(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:claros.instrument.MilliAmpBinding)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr cardname_;
  ::claros::common::core::ClarosDateTime* validfrom_;
  ::claros::common::core::ClarosDateTime* validto_;
  ::google::protobuf::uint32 channel_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_claros_5finstrument_5fmeasurement_5fmilliamp_5fbinding_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MilliAmpBinding

// string cardName = 1;
inline void MilliAmpBinding::clear_cardname() {
  cardname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MilliAmpBinding::cardname() const {
  // @@protoc_insertion_point(field_get:claros.instrument.MilliAmpBinding.cardName)
  return cardname_.GetNoArena();
}
inline void MilliAmpBinding::set_cardname(const ::std::string& value) {
  
  cardname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.instrument.MilliAmpBinding.cardName)
}
#if LANG_CXX11
inline void MilliAmpBinding::set_cardname(::std::string&& value) {
  
  cardname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.instrument.MilliAmpBinding.cardName)
}
#endif
inline void MilliAmpBinding::set_cardname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  cardname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.instrument.MilliAmpBinding.cardName)
}
inline void MilliAmpBinding::set_cardname(const char* value, size_t size) {
  
  cardname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.instrument.MilliAmpBinding.cardName)
}
inline ::std::string* MilliAmpBinding::mutable_cardname() {
  
  // @@protoc_insertion_point(field_mutable:claros.instrument.MilliAmpBinding.cardName)
  return cardname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MilliAmpBinding::release_cardname() {
  // @@protoc_insertion_point(field_release:claros.instrument.MilliAmpBinding.cardName)
  
  return cardname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MilliAmpBinding::set_allocated_cardname(::std::string* cardname) {
  if (cardname != nullptr) {
    
  } else {
    
  }
  cardname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cardname);
  // @@protoc_insertion_point(field_set_allocated:claros.instrument.MilliAmpBinding.cardName)
}

// uint32 channel = 2;
inline void MilliAmpBinding::clear_channel() {
  channel_ = 0u;
}
inline ::google::protobuf::uint32 MilliAmpBinding::channel() const {
  // @@protoc_insertion_point(field_get:claros.instrument.MilliAmpBinding.channel)
  return channel_;
}
inline void MilliAmpBinding::set_channel(::google::protobuf::uint32 value) {
  
  channel_ = value;
  // @@protoc_insertion_point(field_set:claros.instrument.MilliAmpBinding.channel)
}

// .claros.common.core.ClarosDateTime validFrom = 3;
inline bool MilliAmpBinding::has_validfrom() const {
  return this != internal_default_instance() && validfrom_ != nullptr;
}
inline const ::claros::common::core::ClarosDateTime& MilliAmpBinding::validfrom() const {
  const ::claros::common::core::ClarosDateTime* p = validfrom_;
  // @@protoc_insertion_point(field_get:claros.instrument.MilliAmpBinding.validFrom)
  return p != nullptr ? *p : *reinterpret_cast<const ::claros::common::core::ClarosDateTime*>(
      &::claros::common::core::_ClarosDateTime_default_instance_);
}
inline ::claros::common::core::ClarosDateTime* MilliAmpBinding::release_validfrom() {
  // @@protoc_insertion_point(field_release:claros.instrument.MilliAmpBinding.validFrom)
  
  ::claros::common::core::ClarosDateTime* temp = validfrom_;
  validfrom_ = nullptr;
  return temp;
}
inline ::claros::common::core::ClarosDateTime* MilliAmpBinding::mutable_validfrom() {
  
  if (validfrom_ == nullptr) {
    auto* p = CreateMaybeMessage<::claros::common::core::ClarosDateTime>(GetArenaNoVirtual());
    validfrom_ = p;
  }
  // @@protoc_insertion_point(field_mutable:claros.instrument.MilliAmpBinding.validFrom)
  return validfrom_;
}
inline void MilliAmpBinding::set_allocated_validfrom(::claros::common::core::ClarosDateTime* validfrom) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(validfrom_);
  }
  if (validfrom) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      validfrom = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, validfrom, submessage_arena);
    }
    
  } else {
    
  }
  validfrom_ = validfrom;
  // @@protoc_insertion_point(field_set_allocated:claros.instrument.MilliAmpBinding.validFrom)
}

// .claros.common.core.ClarosDateTime validTo = 4;
inline bool MilliAmpBinding::has_validto() const {
  return this != internal_default_instance() && validto_ != nullptr;
}
inline const ::claros::common::core::ClarosDateTime& MilliAmpBinding::validto() const {
  const ::claros::common::core::ClarosDateTime* p = validto_;
  // @@protoc_insertion_point(field_get:claros.instrument.MilliAmpBinding.validTo)
  return p != nullptr ? *p : *reinterpret_cast<const ::claros::common::core::ClarosDateTime*>(
      &::claros::common::core::_ClarosDateTime_default_instance_);
}
inline ::claros::common::core::ClarosDateTime* MilliAmpBinding::release_validto() {
  // @@protoc_insertion_point(field_release:claros.instrument.MilliAmpBinding.validTo)
  
  ::claros::common::core::ClarosDateTime* temp = validto_;
  validto_ = nullptr;
  return temp;
}
inline ::claros::common::core::ClarosDateTime* MilliAmpBinding::mutable_validto() {
  
  if (validto_ == nullptr) {
    auto* p = CreateMaybeMessage<::claros::common::core::ClarosDateTime>(GetArenaNoVirtual());
    validto_ = p;
  }
  // @@protoc_insertion_point(field_mutable:claros.instrument.MilliAmpBinding.validTo)
  return validto_;
}
inline void MilliAmpBinding::set_allocated_validto(::claros::common::core::ClarosDateTime* validto) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(validto_);
  }
  if (validto) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      validto = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, validto, submessage_arena);
    }
    
  } else {
    
  }
  validto_ = validto;
  // @@protoc_insertion_point(field_set_allocated:claros.instrument.MilliAmpBinding.validTo)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace instrument
}  // namespace claros

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_claros_5finstrument_5fmeasurement_5fmilliamp_5fbinding_2eproto
