// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_parameter.proto

#ifndef PROTOBUF_INCLUDED_claros_5fcommon_5fcore_5fparameter_2eproto
#define PROTOBUF_INCLUDED_claros_5fcommon_5fcore_5fparameter_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_claros_5fcommon_5fcore_5fparameter_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_claros_5fcommon_5fcore_5fparameter_2eproto {
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
void AddDescriptors_claros_5fcommon_5fcore_5fparameter_2eproto();
namespace claros {
namespace common {
namespace core {
class Parameter;
class ParameterDefaultTypeInternal;
extern ParameterDefaultTypeInternal _Parameter_default_instance_;
}  // namespace core
}  // namespace common
}  // namespace claros
namespace google {
namespace protobuf {
template<> ::claros::common::core::Parameter* Arena::CreateMaybeMessage<::claros::common::core::Parameter>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace claros {
namespace common {
namespace core {

// ===================================================================

class Parameter :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:claros.common.core.Parameter) */ {
 public:
  Parameter();
  virtual ~Parameter();

  Parameter(const Parameter& from);

  inline Parameter& operator=(const Parameter& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Parameter(Parameter&& from) noexcept
    : Parameter() {
    *this = ::std::move(from);
  }

  inline Parameter& operator=(Parameter&& from) noexcept {
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
  static const Parameter& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Parameter* internal_default_instance() {
    return reinterpret_cast<const Parameter*>(
               &_Parameter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Parameter* other);
  friend void swap(Parameter& a, Parameter& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Parameter* New() const final {
    return CreateMaybeMessage<Parameter>(nullptr);
  }

  Parameter* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Parameter>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Parameter& from);
  void MergeFrom(const Parameter& from);
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
  void InternalSwap(Parameter* other);
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

  // string Id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // string i18nKey = 3;
  void clear_i18nkey();
  static const int kI18NKeyFieldNumber = 3;
  const ::std::string& i18nkey() const;
  void set_i18nkey(const ::std::string& value);
  #if LANG_CXX11
  void set_i18nkey(::std::string&& value);
  #endif
  void set_i18nkey(const char* value);
  void set_i18nkey(const char* value, size_t size);
  ::std::string* mutable_i18nkey();
  ::std::string* release_i18nkey();
  void set_allocated_i18nkey(::std::string* i18nkey);

  // string parameterTypeId = 4;
  void clear_parametertypeid();
  static const int kParameterTypeIdFieldNumber = 4;
  const ::std::string& parametertypeid() const;
  void set_parametertypeid(const ::std::string& value);
  #if LANG_CXX11
  void set_parametertypeid(::std::string&& value);
  #endif
  void set_parametertypeid(const char* value);
  void set_parametertypeid(const char* value, size_t size);
  ::std::string* mutable_parametertypeid();
  ::std::string* release_parametertypeid();
  void set_allocated_parametertypeid(::std::string* parametertypeid);

  // string quantityTypeId = 5;
  void clear_quantitytypeid();
  static const int kQuantityTypeIdFieldNumber = 5;
  const ::std::string& quantitytypeid() const;
  void set_quantitytypeid(const ::std::string& value);
  #if LANG_CXX11
  void set_quantitytypeid(::std::string&& value);
  #endif
  void set_quantitytypeid(const char* value);
  void set_quantitytypeid(const char* value, size_t size);
  ::std::string* mutable_quantitytypeid();
  ::std::string* release_quantitytypeid();
  void set_allocated_quantitytypeid(::std::string* quantitytypeid);

  // string description = 6;
  void clear_description();
  static const int kDescriptionFieldNumber = 6;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // string tenantId = 7;
  void clear_tenantid();
  static const int kTenantIdFieldNumber = 7;
  const ::std::string& tenantid() const;
  void set_tenantid(const ::std::string& value);
  #if LANG_CXX11
  void set_tenantid(::std::string&& value);
  #endif
  void set_tenantid(const char* value);
  void set_tenantid(const char* value, size_t size);
  ::std::string* mutable_tenantid();
  ::std::string* release_tenantid();
  void set_allocated_tenantid(::std::string* tenantid);

  // string createdById = 8;
  void clear_createdbyid();
  static const int kCreatedByIdFieldNumber = 8;
  const ::std::string& createdbyid() const;
  void set_createdbyid(const ::std::string& value);
  #if LANG_CXX11
  void set_createdbyid(::std::string&& value);
  #endif
  void set_createdbyid(const char* value);
  void set_createdbyid(const char* value, size_t size);
  ::std::string* mutable_createdbyid();
  ::std::string* release_createdbyid();
  void set_allocated_createdbyid(::std::string* createdbyid);

  // string modifiedById = 10;
  void clear_modifiedbyid();
  static const int kModifiedByIdFieldNumber = 10;
  const ::std::string& modifiedbyid() const;
  void set_modifiedbyid(const ::std::string& value);
  #if LANG_CXX11
  void set_modifiedbyid(::std::string&& value);
  #endif
  void set_modifiedbyid(const char* value);
  void set_modifiedbyid(const char* value, size_t size);
  ::std::string* mutable_modifiedbyid();
  ::std::string* release_modifiedbyid();
  void set_allocated_modifiedbyid(::std::string* modifiedbyid);

  // .claros.common.core.ClarosDateTime createdOn = 9;
  bool has_createdon() const;
  void clear_createdon();
  static const int kCreatedOnFieldNumber = 9;
  const ::claros::common::core::ClarosDateTime& createdon() const;
  ::claros::common::core::ClarosDateTime* release_createdon();
  ::claros::common::core::ClarosDateTime* mutable_createdon();
  void set_allocated_createdon(::claros::common::core::ClarosDateTime* createdon);

  // .claros.common.core.ClarosDateTime modifiedOn = 11;
  bool has_modifiedon() const;
  void clear_modifiedon();
  static const int kModifiedOnFieldNumber = 11;
  const ::claros::common::core::ClarosDateTime& modifiedon() const;
  ::claros::common::core::ClarosDateTime* release_modifiedon();
  ::claros::common::core::ClarosDateTime* mutable_modifiedon();
  void set_allocated_modifiedon(::claros::common::core::ClarosDateTime* modifiedon);

  // uint32 IntId = 2;
  void clear_intid();
  static const int kIntIdFieldNumber = 2;
  ::google::protobuf::uint32 intid() const;
  void set_intid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:claros.common.core.Parameter)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr i18nkey_;
  ::google::protobuf::internal::ArenaStringPtr parametertypeid_;
  ::google::protobuf::internal::ArenaStringPtr quantitytypeid_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::internal::ArenaStringPtr tenantid_;
  ::google::protobuf::internal::ArenaStringPtr createdbyid_;
  ::google::protobuf::internal::ArenaStringPtr modifiedbyid_;
  ::claros::common::core::ClarosDateTime* createdon_;
  ::claros::common::core::ClarosDateTime* modifiedon_;
  ::google::protobuf::uint32 intid_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_claros_5fcommon_5fcore_5fparameter_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Parameter

// string Id = 1;
inline void Parameter::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Parameter::id() const {
  // @@protoc_insertion_point(field_get:claros.common.core.Parameter.Id)
  return id_.GetNoArena();
}
inline void Parameter::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.core.Parameter.Id)
}
#if LANG_CXX11
inline void Parameter::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.core.Parameter.Id)
}
#endif
inline void Parameter::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.core.Parameter.Id)
}
inline void Parameter::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.core.Parameter.Id)
}
inline ::std::string* Parameter::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.core.Parameter.Id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Parameter::release_id() {
  // @@protoc_insertion_point(field_release:claros.common.core.Parameter.Id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_id(::std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Parameter.Id)
}

// uint32 IntId = 2;
inline void Parameter::clear_intid() {
  intid_ = 0u;
}
inline ::google::protobuf::uint32 Parameter::intid() const {
  // @@protoc_insertion_point(field_get:claros.common.core.Parameter.IntId)
  return intid_;
}
inline void Parameter::set_intid(::google::protobuf::uint32 value) {
  
  intid_ = value;
  // @@protoc_insertion_point(field_set:claros.common.core.Parameter.IntId)
}

// string i18nKey = 3;
inline void Parameter::clear_i18nkey() {
  i18nkey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Parameter::i18nkey() const {
  // @@protoc_insertion_point(field_get:claros.common.core.Parameter.i18nKey)
  return i18nkey_.GetNoArena();
}
inline void Parameter::set_i18nkey(const ::std::string& value) {
  
  i18nkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.core.Parameter.i18nKey)
}
#if LANG_CXX11
inline void Parameter::set_i18nkey(::std::string&& value) {
  
  i18nkey_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.core.Parameter.i18nKey)
}
#endif
inline void Parameter::set_i18nkey(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  i18nkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.core.Parameter.i18nKey)
}
inline void Parameter::set_i18nkey(const char* value, size_t size) {
  
  i18nkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.core.Parameter.i18nKey)
}
inline ::std::string* Parameter::mutable_i18nkey() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.core.Parameter.i18nKey)
  return i18nkey_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Parameter::release_i18nkey() {
  // @@protoc_insertion_point(field_release:claros.common.core.Parameter.i18nKey)
  
  return i18nkey_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_i18nkey(::std::string* i18nkey) {
  if (i18nkey != nullptr) {
    
  } else {
    
  }
  i18nkey_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), i18nkey);
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Parameter.i18nKey)
}

// string parameterTypeId = 4;
inline void Parameter::clear_parametertypeid() {
  parametertypeid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Parameter::parametertypeid() const {
  // @@protoc_insertion_point(field_get:claros.common.core.Parameter.parameterTypeId)
  return parametertypeid_.GetNoArena();
}
inline void Parameter::set_parametertypeid(const ::std::string& value) {
  
  parametertypeid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.core.Parameter.parameterTypeId)
}
#if LANG_CXX11
inline void Parameter::set_parametertypeid(::std::string&& value) {
  
  parametertypeid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.core.Parameter.parameterTypeId)
}
#endif
inline void Parameter::set_parametertypeid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  parametertypeid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.core.Parameter.parameterTypeId)
}
inline void Parameter::set_parametertypeid(const char* value, size_t size) {
  
  parametertypeid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.core.Parameter.parameterTypeId)
}
inline ::std::string* Parameter::mutable_parametertypeid() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.core.Parameter.parameterTypeId)
  return parametertypeid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Parameter::release_parametertypeid() {
  // @@protoc_insertion_point(field_release:claros.common.core.Parameter.parameterTypeId)
  
  return parametertypeid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_parametertypeid(::std::string* parametertypeid) {
  if (parametertypeid != nullptr) {
    
  } else {
    
  }
  parametertypeid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), parametertypeid);
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Parameter.parameterTypeId)
}

// string quantityTypeId = 5;
inline void Parameter::clear_quantitytypeid() {
  quantitytypeid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Parameter::quantitytypeid() const {
  // @@protoc_insertion_point(field_get:claros.common.core.Parameter.quantityTypeId)
  return quantitytypeid_.GetNoArena();
}
inline void Parameter::set_quantitytypeid(const ::std::string& value) {
  
  quantitytypeid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.core.Parameter.quantityTypeId)
}
#if LANG_CXX11
inline void Parameter::set_quantitytypeid(::std::string&& value) {
  
  quantitytypeid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.core.Parameter.quantityTypeId)
}
#endif
inline void Parameter::set_quantitytypeid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  quantitytypeid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.core.Parameter.quantityTypeId)
}
inline void Parameter::set_quantitytypeid(const char* value, size_t size) {
  
  quantitytypeid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.core.Parameter.quantityTypeId)
}
inline ::std::string* Parameter::mutable_quantitytypeid() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.core.Parameter.quantityTypeId)
  return quantitytypeid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Parameter::release_quantitytypeid() {
  // @@protoc_insertion_point(field_release:claros.common.core.Parameter.quantityTypeId)
  
  return quantitytypeid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_quantitytypeid(::std::string* quantitytypeid) {
  if (quantitytypeid != nullptr) {
    
  } else {
    
  }
  quantitytypeid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), quantitytypeid);
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Parameter.quantityTypeId)
}

// string description = 6;
inline void Parameter::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Parameter::description() const {
  // @@protoc_insertion_point(field_get:claros.common.core.Parameter.description)
  return description_.GetNoArena();
}
inline void Parameter::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.core.Parameter.description)
}
#if LANG_CXX11
inline void Parameter::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.core.Parameter.description)
}
#endif
inline void Parameter::set_description(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.core.Parameter.description)
}
inline void Parameter::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.core.Parameter.description)
}
inline ::std::string* Parameter::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.core.Parameter.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Parameter::release_description() {
  // @@protoc_insertion_point(field_release:claros.common.core.Parameter.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_description(::std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Parameter.description)
}

// string tenantId = 7;
inline void Parameter::clear_tenantid() {
  tenantid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Parameter::tenantid() const {
  // @@protoc_insertion_point(field_get:claros.common.core.Parameter.tenantId)
  return tenantid_.GetNoArena();
}
inline void Parameter::set_tenantid(const ::std::string& value) {
  
  tenantid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.core.Parameter.tenantId)
}
#if LANG_CXX11
inline void Parameter::set_tenantid(::std::string&& value) {
  
  tenantid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.core.Parameter.tenantId)
}
#endif
inline void Parameter::set_tenantid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  tenantid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.core.Parameter.tenantId)
}
inline void Parameter::set_tenantid(const char* value, size_t size) {
  
  tenantid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.core.Parameter.tenantId)
}
inline ::std::string* Parameter::mutable_tenantid() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.core.Parameter.tenantId)
  return tenantid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Parameter::release_tenantid() {
  // @@protoc_insertion_point(field_release:claros.common.core.Parameter.tenantId)
  
  return tenantid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_tenantid(::std::string* tenantid) {
  if (tenantid != nullptr) {
    
  } else {
    
  }
  tenantid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tenantid);
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Parameter.tenantId)
}

// string createdById = 8;
inline void Parameter::clear_createdbyid() {
  createdbyid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Parameter::createdbyid() const {
  // @@protoc_insertion_point(field_get:claros.common.core.Parameter.createdById)
  return createdbyid_.GetNoArena();
}
inline void Parameter::set_createdbyid(const ::std::string& value) {
  
  createdbyid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.core.Parameter.createdById)
}
#if LANG_CXX11
inline void Parameter::set_createdbyid(::std::string&& value) {
  
  createdbyid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.core.Parameter.createdById)
}
#endif
inline void Parameter::set_createdbyid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  createdbyid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.core.Parameter.createdById)
}
inline void Parameter::set_createdbyid(const char* value, size_t size) {
  
  createdbyid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.core.Parameter.createdById)
}
inline ::std::string* Parameter::mutable_createdbyid() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.core.Parameter.createdById)
  return createdbyid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Parameter::release_createdbyid() {
  // @@protoc_insertion_point(field_release:claros.common.core.Parameter.createdById)
  
  return createdbyid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_createdbyid(::std::string* createdbyid) {
  if (createdbyid != nullptr) {
    
  } else {
    
  }
  createdbyid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), createdbyid);
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Parameter.createdById)
}

// .claros.common.core.ClarosDateTime createdOn = 9;
inline bool Parameter::has_createdon() const {
  return this != internal_default_instance() && createdon_ != nullptr;
}
inline const ::claros::common::core::ClarosDateTime& Parameter::createdon() const {
  const ::claros::common::core::ClarosDateTime* p = createdon_;
  // @@protoc_insertion_point(field_get:claros.common.core.Parameter.createdOn)
  return p != nullptr ? *p : *reinterpret_cast<const ::claros::common::core::ClarosDateTime*>(
      &::claros::common::core::_ClarosDateTime_default_instance_);
}
inline ::claros::common::core::ClarosDateTime* Parameter::release_createdon() {
  // @@protoc_insertion_point(field_release:claros.common.core.Parameter.createdOn)
  
  ::claros::common::core::ClarosDateTime* temp = createdon_;
  createdon_ = nullptr;
  return temp;
}
inline ::claros::common::core::ClarosDateTime* Parameter::mutable_createdon() {
  
  if (createdon_ == nullptr) {
    auto* p = CreateMaybeMessage<::claros::common::core::ClarosDateTime>(GetArenaNoVirtual());
    createdon_ = p;
  }
  // @@protoc_insertion_point(field_mutable:claros.common.core.Parameter.createdOn)
  return createdon_;
}
inline void Parameter::set_allocated_createdon(::claros::common::core::ClarosDateTime* createdon) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(createdon_);
  }
  if (createdon) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      createdon = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, createdon, submessage_arena);
    }
    
  } else {
    
  }
  createdon_ = createdon;
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Parameter.createdOn)
}

// string modifiedById = 10;
inline void Parameter::clear_modifiedbyid() {
  modifiedbyid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Parameter::modifiedbyid() const {
  // @@protoc_insertion_point(field_get:claros.common.core.Parameter.modifiedById)
  return modifiedbyid_.GetNoArena();
}
inline void Parameter::set_modifiedbyid(const ::std::string& value) {
  
  modifiedbyid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.core.Parameter.modifiedById)
}
#if LANG_CXX11
inline void Parameter::set_modifiedbyid(::std::string&& value) {
  
  modifiedbyid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.core.Parameter.modifiedById)
}
#endif
inline void Parameter::set_modifiedbyid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  modifiedbyid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.core.Parameter.modifiedById)
}
inline void Parameter::set_modifiedbyid(const char* value, size_t size) {
  
  modifiedbyid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.core.Parameter.modifiedById)
}
inline ::std::string* Parameter::mutable_modifiedbyid() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.core.Parameter.modifiedById)
  return modifiedbyid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Parameter::release_modifiedbyid() {
  // @@protoc_insertion_point(field_release:claros.common.core.Parameter.modifiedById)
  
  return modifiedbyid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_modifiedbyid(::std::string* modifiedbyid) {
  if (modifiedbyid != nullptr) {
    
  } else {
    
  }
  modifiedbyid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), modifiedbyid);
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Parameter.modifiedById)
}

// .claros.common.core.ClarosDateTime modifiedOn = 11;
inline bool Parameter::has_modifiedon() const {
  return this != internal_default_instance() && modifiedon_ != nullptr;
}
inline const ::claros::common::core::ClarosDateTime& Parameter::modifiedon() const {
  const ::claros::common::core::ClarosDateTime* p = modifiedon_;
  // @@protoc_insertion_point(field_get:claros.common.core.Parameter.modifiedOn)
  return p != nullptr ? *p : *reinterpret_cast<const ::claros::common::core::ClarosDateTime*>(
      &::claros::common::core::_ClarosDateTime_default_instance_);
}
inline ::claros::common::core::ClarosDateTime* Parameter::release_modifiedon() {
  // @@protoc_insertion_point(field_release:claros.common.core.Parameter.modifiedOn)
  
  ::claros::common::core::ClarosDateTime* temp = modifiedon_;
  modifiedon_ = nullptr;
  return temp;
}
inline ::claros::common::core::ClarosDateTime* Parameter::mutable_modifiedon() {
  
  if (modifiedon_ == nullptr) {
    auto* p = CreateMaybeMessage<::claros::common::core::ClarosDateTime>(GetArenaNoVirtual());
    modifiedon_ = p;
  }
  // @@protoc_insertion_point(field_mutable:claros.common.core.Parameter.modifiedOn)
  return modifiedon_;
}
inline void Parameter::set_allocated_modifiedon(::claros::common::core::ClarosDateTime* modifiedon) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(modifiedon_);
  }
  if (modifiedon) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      modifiedon = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, modifiedon, submessage_arena);
    }
    
  } else {
    
  }
  modifiedon_ = modifiedon;
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Parameter.modifiedOn)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace core
}  // namespace common
}  // namespace claros

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_claros_5fcommon_5fcore_5fparameter_2eproto