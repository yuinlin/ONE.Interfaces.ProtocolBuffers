// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_computation_computation.proto

#ifndef PROTOBUF_INCLUDED_claros_5fcommon_5fcomputation_5fcomputation_2eproto
#define PROTOBUF_INCLUDED_claros_5fcommon_5fcomputation_5fcomputation_2eproto

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
#include "claros_common_computation_variable.pb.h"
#include "claros_common_computation_expressionline.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_claros_5fcommon_5fcomputation_5fcomputation_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_claros_5fcommon_5fcomputation_5fcomputation_2eproto {
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
void AddDescriptors_claros_5fcommon_5fcomputation_5fcomputation_2eproto();
namespace claros {
namespace common {
namespace computation {
class Computation;
class ComputationDefaultTypeInternal;
extern ComputationDefaultTypeInternal _Computation_default_instance_;
}  // namespace computation
}  // namespace common
}  // namespace claros
namespace google {
namespace protobuf {
template<> ::claros::common::computation::Computation* Arena::CreateMaybeMessage<::claros::common::computation::Computation>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace claros {
namespace common {
namespace computation {

// ===================================================================

class Computation :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:claros.common.computation.Computation) */ {
 public:
  Computation();
  virtual ~Computation();

  Computation(const Computation& from);

  inline Computation& operator=(const Computation& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Computation(Computation&& from) noexcept
    : Computation() {
    *this = ::std::move(from);
  }

  inline Computation& operator=(Computation&& from) noexcept {
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
  static const Computation& default_instance();

  enum BindingCase {
    kLedgerId = 9,
    kFormId = 10,
    BINDING_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Computation* internal_default_instance() {
    return reinterpret_cast<const Computation*>(
               &_Computation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Computation* other);
  friend void swap(Computation& a, Computation& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Computation* New() const final {
    return CreateMaybeMessage<Computation>(nullptr);
  }

  Computation* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Computation>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Computation& from);
  void MergeFrom(const Computation& from);
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
  void InternalSwap(Computation* other);
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

  // repeated .claros.common.computation.Variable inputVariables = 4;
  int inputvariables_size() const;
  void clear_inputvariables();
  static const int kInputVariablesFieldNumber = 4;
  ::claros::common::computation::Variable* mutable_inputvariables(int index);
  ::google::protobuf::RepeatedPtrField< ::claros::common::computation::Variable >*
      mutable_inputvariables();
  const ::claros::common::computation::Variable& inputvariables(int index) const;
  ::claros::common::computation::Variable* add_inputvariables();
  const ::google::protobuf::RepeatedPtrField< ::claros::common::computation::Variable >&
      inputvariables() const;

  // repeated .claros.common.computation.Variable outputVariables = 5;
  int outputvariables_size() const;
  void clear_outputvariables();
  static const int kOutputVariablesFieldNumber = 5;
  ::claros::common::computation::Variable* mutable_outputvariables(int index);
  ::google::protobuf::RepeatedPtrField< ::claros::common::computation::Variable >*
      mutable_outputvariables();
  const ::claros::common::computation::Variable& outputvariables(int index) const;
  ::claros::common::computation::Variable* add_outputvariables();
  const ::google::protobuf::RepeatedPtrField< ::claros::common::computation::Variable >&
      outputvariables() const;

  // repeated .claros.common.computation.ExpressionLine expressionLines = 6;
  int expressionlines_size() const;
  void clear_expressionlines();
  static const int kExpressionLinesFieldNumber = 6;
  ::claros::common::computation::ExpressionLine* mutable_expressionlines(int index);
  ::google::protobuf::RepeatedPtrField< ::claros::common::computation::ExpressionLine >*
      mutable_expressionlines();
  const ::claros::common::computation::ExpressionLine& expressionlines(int index) const;
  ::claros::common::computation::ExpressionLine* add_expressionlines();
  const ::google::protobuf::RepeatedPtrField< ::claros::common::computation::ExpressionLine >&
      expressionlines() const;

  // string i18nKey = 1;
  void clear_i18nkey();
  static const int kI18NKeyFieldNumber = 1;
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

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string description = 3;
  void clear_description();
  static const int kDescriptionFieldNumber = 3;
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

  // bool isActive = 7;
  void clear_isactive();
  static const int kIsActiveFieldNumber = 7;
  bool isactive() const;
  void set_isactive(bool value);

  // bool isValid = 8;
  void clear_isvalid();
  static const int kIsValidFieldNumber = 8;
  bool isvalid() const;
  void set_isvalid(bool value);

  // string ledgerId = 9;
  private:
  bool has_ledgerid() const;
  public:
  void clear_ledgerid();
  static const int kLedgerIdFieldNumber = 9;
  const ::std::string& ledgerid() const;
  void set_ledgerid(const ::std::string& value);
  #if LANG_CXX11
  void set_ledgerid(::std::string&& value);
  #endif
  void set_ledgerid(const char* value);
  void set_ledgerid(const char* value, size_t size);
  ::std::string* mutable_ledgerid();
  ::std::string* release_ledgerid();
  void set_allocated_ledgerid(::std::string* ledgerid);

  // string formId = 10;
  private:
  bool has_formid() const;
  public:
  void clear_formid();
  static const int kFormIdFieldNumber = 10;
  const ::std::string& formid() const;
  void set_formid(const ::std::string& value);
  #if LANG_CXX11
  void set_formid(::std::string&& value);
  #endif
  void set_formid(const char* value);
  void set_formid(const char* value, size_t size);
  ::std::string* mutable_formid();
  ::std::string* release_formid();
  void set_allocated_formid(::std::string* formid);

  void clear_binding();
  BindingCase binding_case() const;
  // @@protoc_insertion_point(class_scope:claros.common.computation.Computation)
 private:
  class HasBitSetters;
  void set_has_ledgerid();
  void set_has_formid();

  inline bool has_binding() const;
  inline void clear_has_binding();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::claros::common::computation::Variable > inputvariables_;
  ::google::protobuf::RepeatedPtrField< ::claros::common::computation::Variable > outputvariables_;
  ::google::protobuf::RepeatedPtrField< ::claros::common::computation::ExpressionLine > expressionlines_;
  ::google::protobuf::internal::ArenaStringPtr i18nkey_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  bool isactive_;
  bool isvalid_;
  union BindingUnion {
    BindingUnion() {}
    ::google::protobuf::internal::ArenaStringPtr ledgerid_;
    ::google::protobuf::internal::ArenaStringPtr formid_;
  } binding_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::TableStruct_claros_5fcommon_5fcomputation_5fcomputation_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Computation

// string i18nKey = 1;
inline void Computation::clear_i18nkey() {
  i18nkey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Computation::i18nkey() const {
  // @@protoc_insertion_point(field_get:claros.common.computation.Computation.i18nKey)
  return i18nkey_.GetNoArena();
}
inline void Computation::set_i18nkey(const ::std::string& value) {
  
  i18nkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.computation.Computation.i18nKey)
}
#if LANG_CXX11
inline void Computation::set_i18nkey(::std::string&& value) {
  
  i18nkey_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.computation.Computation.i18nKey)
}
#endif
inline void Computation::set_i18nkey(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  i18nkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.computation.Computation.i18nKey)
}
inline void Computation::set_i18nkey(const char* value, size_t size) {
  
  i18nkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.computation.Computation.i18nKey)
}
inline ::std::string* Computation::mutable_i18nkey() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.computation.Computation.i18nKey)
  return i18nkey_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Computation::release_i18nkey() {
  // @@protoc_insertion_point(field_release:claros.common.computation.Computation.i18nKey)
  
  return i18nkey_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Computation::set_allocated_i18nkey(::std::string* i18nkey) {
  if (i18nkey != nullptr) {
    
  } else {
    
  }
  i18nkey_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), i18nkey);
  // @@protoc_insertion_point(field_set_allocated:claros.common.computation.Computation.i18nKey)
}

// string name = 2;
inline void Computation::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Computation::name() const {
  // @@protoc_insertion_point(field_get:claros.common.computation.Computation.name)
  return name_.GetNoArena();
}
inline void Computation::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.computation.Computation.name)
}
#if LANG_CXX11
inline void Computation::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.computation.Computation.name)
}
#endif
inline void Computation::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.computation.Computation.name)
}
inline void Computation::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.computation.Computation.name)
}
inline ::std::string* Computation::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.computation.Computation.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Computation::release_name() {
  // @@protoc_insertion_point(field_release:claros.common.computation.Computation.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Computation::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:claros.common.computation.Computation.name)
}

// string description = 3;
inline void Computation::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Computation::description() const {
  // @@protoc_insertion_point(field_get:claros.common.computation.Computation.description)
  return description_.GetNoArena();
}
inline void Computation::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.computation.Computation.description)
}
#if LANG_CXX11
inline void Computation::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.computation.Computation.description)
}
#endif
inline void Computation::set_description(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.computation.Computation.description)
}
inline void Computation::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.computation.Computation.description)
}
inline ::std::string* Computation::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.computation.Computation.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Computation::release_description() {
  // @@protoc_insertion_point(field_release:claros.common.computation.Computation.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Computation::set_allocated_description(::std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:claros.common.computation.Computation.description)
}

// repeated .claros.common.computation.Variable inputVariables = 4;
inline int Computation::inputvariables_size() const {
  return inputvariables_.size();
}
inline ::claros::common::computation::Variable* Computation::mutable_inputvariables(int index) {
  // @@protoc_insertion_point(field_mutable:claros.common.computation.Computation.inputVariables)
  return inputvariables_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::claros::common::computation::Variable >*
Computation::mutable_inputvariables() {
  // @@protoc_insertion_point(field_mutable_list:claros.common.computation.Computation.inputVariables)
  return &inputvariables_;
}
inline const ::claros::common::computation::Variable& Computation::inputvariables(int index) const {
  // @@protoc_insertion_point(field_get:claros.common.computation.Computation.inputVariables)
  return inputvariables_.Get(index);
}
inline ::claros::common::computation::Variable* Computation::add_inputvariables() {
  // @@protoc_insertion_point(field_add:claros.common.computation.Computation.inputVariables)
  return inputvariables_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::claros::common::computation::Variable >&
Computation::inputvariables() const {
  // @@protoc_insertion_point(field_list:claros.common.computation.Computation.inputVariables)
  return inputvariables_;
}

// repeated .claros.common.computation.Variable outputVariables = 5;
inline int Computation::outputvariables_size() const {
  return outputvariables_.size();
}
inline ::claros::common::computation::Variable* Computation::mutable_outputvariables(int index) {
  // @@protoc_insertion_point(field_mutable:claros.common.computation.Computation.outputVariables)
  return outputvariables_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::claros::common::computation::Variable >*
Computation::mutable_outputvariables() {
  // @@protoc_insertion_point(field_mutable_list:claros.common.computation.Computation.outputVariables)
  return &outputvariables_;
}
inline const ::claros::common::computation::Variable& Computation::outputvariables(int index) const {
  // @@protoc_insertion_point(field_get:claros.common.computation.Computation.outputVariables)
  return outputvariables_.Get(index);
}
inline ::claros::common::computation::Variable* Computation::add_outputvariables() {
  // @@protoc_insertion_point(field_add:claros.common.computation.Computation.outputVariables)
  return outputvariables_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::claros::common::computation::Variable >&
Computation::outputvariables() const {
  // @@protoc_insertion_point(field_list:claros.common.computation.Computation.outputVariables)
  return outputvariables_;
}

// repeated .claros.common.computation.ExpressionLine expressionLines = 6;
inline int Computation::expressionlines_size() const {
  return expressionlines_.size();
}
inline ::claros::common::computation::ExpressionLine* Computation::mutable_expressionlines(int index) {
  // @@protoc_insertion_point(field_mutable:claros.common.computation.Computation.expressionLines)
  return expressionlines_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::claros::common::computation::ExpressionLine >*
Computation::mutable_expressionlines() {
  // @@protoc_insertion_point(field_mutable_list:claros.common.computation.Computation.expressionLines)
  return &expressionlines_;
}
inline const ::claros::common::computation::ExpressionLine& Computation::expressionlines(int index) const {
  // @@protoc_insertion_point(field_get:claros.common.computation.Computation.expressionLines)
  return expressionlines_.Get(index);
}
inline ::claros::common::computation::ExpressionLine* Computation::add_expressionlines() {
  // @@protoc_insertion_point(field_add:claros.common.computation.Computation.expressionLines)
  return expressionlines_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::claros::common::computation::ExpressionLine >&
Computation::expressionlines() const {
  // @@protoc_insertion_point(field_list:claros.common.computation.Computation.expressionLines)
  return expressionlines_;
}

// bool isActive = 7;
inline void Computation::clear_isactive() {
  isactive_ = false;
}
inline bool Computation::isactive() const {
  // @@protoc_insertion_point(field_get:claros.common.computation.Computation.isActive)
  return isactive_;
}
inline void Computation::set_isactive(bool value) {
  
  isactive_ = value;
  // @@protoc_insertion_point(field_set:claros.common.computation.Computation.isActive)
}

// bool isValid = 8;
inline void Computation::clear_isvalid() {
  isvalid_ = false;
}
inline bool Computation::isvalid() const {
  // @@protoc_insertion_point(field_get:claros.common.computation.Computation.isValid)
  return isvalid_;
}
inline void Computation::set_isvalid(bool value) {
  
  isvalid_ = value;
  // @@protoc_insertion_point(field_set:claros.common.computation.Computation.isValid)
}

// string ledgerId = 9;
inline bool Computation::has_ledgerid() const {
  return binding_case() == kLedgerId;
}
inline void Computation::set_has_ledgerid() {
  _oneof_case_[0] = kLedgerId;
}
inline void Computation::clear_ledgerid() {
  if (has_ledgerid()) {
    binding_.ledgerid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_binding();
  }
}
inline const ::std::string& Computation::ledgerid() const {
  // @@protoc_insertion_point(field_get:claros.common.computation.Computation.ledgerId)
  if (has_ledgerid()) {
    return binding_.ledgerid_.GetNoArena();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void Computation::set_ledgerid(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:claros.common.computation.Computation.ledgerId)
  if (!has_ledgerid()) {
    clear_binding();
    set_has_ledgerid();
    binding_.ledgerid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  binding_.ledgerid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.computation.Computation.ledgerId)
}
#if LANG_CXX11
inline void Computation::set_ledgerid(::std::string&& value) {
  // @@protoc_insertion_point(field_set:claros.common.computation.Computation.ledgerId)
  if (!has_ledgerid()) {
    clear_binding();
    set_has_ledgerid();
    binding_.ledgerid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  binding_.ledgerid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.computation.Computation.ledgerId)
}
#endif
inline void Computation::set_ledgerid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  if (!has_ledgerid()) {
    clear_binding();
    set_has_ledgerid();
    binding_.ledgerid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  binding_.ledgerid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.computation.Computation.ledgerId)
}
inline void Computation::set_ledgerid(const char* value, size_t size) {
  if (!has_ledgerid()) {
    clear_binding();
    set_has_ledgerid();
    binding_.ledgerid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  binding_.ledgerid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.computation.Computation.ledgerId)
}
inline ::std::string* Computation::mutable_ledgerid() {
  if (!has_ledgerid()) {
    clear_binding();
    set_has_ledgerid();
    binding_.ledgerid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:claros.common.computation.Computation.ledgerId)
  return binding_.ledgerid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Computation::release_ledgerid() {
  // @@protoc_insertion_point(field_release:claros.common.computation.Computation.ledgerId)
  if (has_ledgerid()) {
    clear_has_binding();
    return binding_.ledgerid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return nullptr;
  }
}
inline void Computation::set_allocated_ledgerid(::std::string* ledgerid) {
  if (has_binding()) {
    clear_binding();
  }
  if (ledgerid != nullptr) {
    set_has_ledgerid();
    binding_.ledgerid_.UnsafeSetDefault(ledgerid);
  }
  // @@protoc_insertion_point(field_set_allocated:claros.common.computation.Computation.ledgerId)
}

// string formId = 10;
inline bool Computation::has_formid() const {
  return binding_case() == kFormId;
}
inline void Computation::set_has_formid() {
  _oneof_case_[0] = kFormId;
}
inline void Computation::clear_formid() {
  if (has_formid()) {
    binding_.formid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_binding();
  }
}
inline const ::std::string& Computation::formid() const {
  // @@protoc_insertion_point(field_get:claros.common.computation.Computation.formId)
  if (has_formid()) {
    return binding_.formid_.GetNoArena();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void Computation::set_formid(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:claros.common.computation.Computation.formId)
  if (!has_formid()) {
    clear_binding();
    set_has_formid();
    binding_.formid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  binding_.formid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.computation.Computation.formId)
}
#if LANG_CXX11
inline void Computation::set_formid(::std::string&& value) {
  // @@protoc_insertion_point(field_set:claros.common.computation.Computation.formId)
  if (!has_formid()) {
    clear_binding();
    set_has_formid();
    binding_.formid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  binding_.formid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.computation.Computation.formId)
}
#endif
inline void Computation::set_formid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  if (!has_formid()) {
    clear_binding();
    set_has_formid();
    binding_.formid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  binding_.formid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.computation.Computation.formId)
}
inline void Computation::set_formid(const char* value, size_t size) {
  if (!has_formid()) {
    clear_binding();
    set_has_formid();
    binding_.formid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  binding_.formid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.computation.Computation.formId)
}
inline ::std::string* Computation::mutable_formid() {
  if (!has_formid()) {
    clear_binding();
    set_has_formid();
    binding_.formid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:claros.common.computation.Computation.formId)
  return binding_.formid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Computation::release_formid() {
  // @@protoc_insertion_point(field_release:claros.common.computation.Computation.formId)
  if (has_formid()) {
    clear_has_binding();
    return binding_.formid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return nullptr;
  }
}
inline void Computation::set_allocated_formid(::std::string* formid) {
  if (has_binding()) {
    clear_binding();
  }
  if (formid != nullptr) {
    set_has_formid();
    binding_.formid_.UnsafeSetDefault(formid);
  }
  // @@protoc_insertion_point(field_set_allocated:claros.common.computation.Computation.formId)
}

inline bool Computation::has_binding() const {
  return binding_case() != BINDING_NOT_SET;
}
inline void Computation::clear_has_binding() {
  _oneof_case_[0] = BINDING_NOT_SET;
}
inline Computation::BindingCase Computation::binding_case() const {
  return Computation::BindingCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace computation
}  // namespace common
}  // namespace claros

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_claros_5fcommon_5fcomputation_5fcomputation_2eproto