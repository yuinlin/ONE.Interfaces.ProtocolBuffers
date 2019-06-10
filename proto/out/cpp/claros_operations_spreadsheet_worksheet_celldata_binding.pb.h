// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_operations_spreadsheet_worksheet_celldata_binding.proto

#ifndef PROTOBUF_INCLUDED_claros_5foperations_5fspreadsheet_5fworksheet_5fcelldata_5fbinding_2eproto
#define PROTOBUF_INCLUDED_claros_5foperations_5fspreadsheet_5fworksheet_5fcelldata_5fbinding_2eproto

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
#include "claros_common_form_binding.pb.h"
#include "claros_common_computation_binding.pb.h"
#include "claros_instrument_measurement_binding.pb.h"
#include "claros_instrument_measurement_field_binding.pb.h"
#include "claros_operations_spreadsheet_binding.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_claros_5foperations_5fspreadsheet_5fworksheet_5fcelldata_5fbinding_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_claros_5foperations_5fspreadsheet_5fworksheet_5fcelldata_5fbinding_2eproto {
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
void AddDescriptors_claros_5foperations_5fspreadsheet_5fworksheet_5fcelldata_5fbinding_2eproto();
namespace claros {
namespace operations {
namespace spreadsheet {
class CellDataBinding;
class CellDataBindingDefaultTypeInternal;
extern CellDataBindingDefaultTypeInternal _CellDataBinding_default_instance_;
}  // namespace spreadsheet
}  // namespace operations
}  // namespace claros
namespace google {
namespace protobuf {
template<> ::claros::operations::spreadsheet::CellDataBinding* Arena::CreateMaybeMessage<::claros::operations::spreadsheet::CellDataBinding>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace claros {
namespace operations {
namespace spreadsheet {

// ===================================================================

class CellDataBinding :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:claros.operations.spreadsheet.CellDataBinding) */ {
 public:
  CellDataBinding();
  virtual ~CellDataBinding();

  CellDataBinding(const CellDataBinding& from);

  inline CellDataBinding& operator=(const CellDataBinding& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CellDataBinding(CellDataBinding&& from) noexcept
    : CellDataBinding() {
    *this = ::std::move(from);
  }

  inline CellDataBinding& operator=(CellDataBinding&& from) noexcept {
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
  static const CellDataBinding& default_instance();

  enum BindingCase {
    kInstrumentMeasurementBinding = 7,
    kComputationBinding = 8,
    kFormBinding = 9,
    kSpreadsheetBinding = 10,
    kFieldInstrumentMeasurementBinding = 11,
    BINDING_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CellDataBinding* internal_default_instance() {
    return reinterpret_cast<const CellDataBinding*>(
               &_CellDataBinding_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CellDataBinding* other);
  friend void swap(CellDataBinding& a, CellDataBinding& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CellDataBinding* New() const final {
    return CreateMaybeMessage<CellDataBinding>(nullptr);
  }

  CellDataBinding* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CellDataBinding>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CellDataBinding& from);
  void MergeFrom(const CellDataBinding& from);
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
  void InternalSwap(CellDataBinding* other);
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

  // .claros.instrument.InstrumentMeasurementBinding instrumentMeasurementBinding = 7;
  bool has_instrumentmeasurementbinding() const;
  void clear_instrumentmeasurementbinding();
  static const int kInstrumentMeasurementBindingFieldNumber = 7;
  const ::claros::instrument::InstrumentMeasurementBinding& instrumentmeasurementbinding() const;
  ::claros::instrument::InstrumentMeasurementBinding* release_instrumentmeasurementbinding();
  ::claros::instrument::InstrumentMeasurementBinding* mutable_instrumentmeasurementbinding();
  void set_allocated_instrumentmeasurementbinding(::claros::instrument::InstrumentMeasurementBinding* instrumentmeasurementbinding);

  // .claros.common.computation.ComputationBinding computationBinding = 8;
  bool has_computationbinding() const;
  void clear_computationbinding();
  static const int kComputationBindingFieldNumber = 8;
  const ::claros::common::computation::ComputationBinding& computationbinding() const;
  ::claros::common::computation::ComputationBinding* release_computationbinding();
  ::claros::common::computation::ComputationBinding* mutable_computationbinding();
  void set_allocated_computationbinding(::claros::common::computation::ComputationBinding* computationbinding);

  // .claros.common.form.FormBinding formBinding = 9;
  bool has_formbinding() const;
  void clear_formbinding();
  static const int kFormBindingFieldNumber = 9;
  const ::claros::common::form::FormBinding& formbinding() const;
  ::claros::common::form::FormBinding* release_formbinding();
  ::claros::common::form::FormBinding* mutable_formbinding();
  void set_allocated_formbinding(::claros::common::form::FormBinding* formbinding);

  // .claros.operations.spreadsheet.SpreadsheetBinding spreadsheetBinding = 10;
  bool has_spreadsheetbinding() const;
  void clear_spreadsheetbinding();
  static const int kSpreadsheetBindingFieldNumber = 10;
  const ::claros::operations::spreadsheet::SpreadsheetBinding& spreadsheetbinding() const;
  ::claros::operations::spreadsheet::SpreadsheetBinding* release_spreadsheetbinding();
  ::claros::operations::spreadsheet::SpreadsheetBinding* mutable_spreadsheetbinding();
  void set_allocated_spreadsheetbinding(::claros::operations::spreadsheet::SpreadsheetBinding* spreadsheetbinding);

  // .claros.instrument.InstrumentMeasurementFieldBinding fieldInstrumentMeasurementBinding = 11;
  bool has_fieldinstrumentmeasurementbinding() const;
  void clear_fieldinstrumentmeasurementbinding();
  static const int kFieldInstrumentMeasurementBindingFieldNumber = 11;
  const ::claros::instrument::InstrumentMeasurementFieldBinding& fieldinstrumentmeasurementbinding() const;
  ::claros::instrument::InstrumentMeasurementFieldBinding* release_fieldinstrumentmeasurementbinding();
  ::claros::instrument::InstrumentMeasurementFieldBinding* mutable_fieldinstrumentmeasurementbinding();
  void set_allocated_fieldinstrumentmeasurementbinding(::claros::instrument::InstrumentMeasurementFieldBinding* fieldinstrumentmeasurementbinding);

  void clear_binding();
  BindingCase binding_case() const;
  // @@protoc_insertion_point(class_scope:claros.operations.spreadsheet.CellDataBinding)
 private:
  class HasBitSetters;
  void set_has_instrumentmeasurementbinding();
  void set_has_computationbinding();
  void set_has_formbinding();
  void set_has_spreadsheetbinding();
  void set_has_fieldinstrumentmeasurementbinding();

  inline bool has_binding() const;
  inline void clear_has_binding();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  union BindingUnion {
    BindingUnion() {}
    ::claros::instrument::InstrumentMeasurementBinding* instrumentmeasurementbinding_;
    ::claros::common::computation::ComputationBinding* computationbinding_;
    ::claros::common::form::FormBinding* formbinding_;
    ::claros::operations::spreadsheet::SpreadsheetBinding* spreadsheetbinding_;
    ::claros::instrument::InstrumentMeasurementFieldBinding* fieldinstrumentmeasurementbinding_;
  } binding_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::TableStruct_claros_5foperations_5fspreadsheet_5fworksheet_5fcelldata_5fbinding_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CellDataBinding

// .claros.instrument.InstrumentMeasurementBinding instrumentMeasurementBinding = 7;
inline bool CellDataBinding::has_instrumentmeasurementbinding() const {
  return binding_case() == kInstrumentMeasurementBinding;
}
inline void CellDataBinding::set_has_instrumentmeasurementbinding() {
  _oneof_case_[0] = kInstrumentMeasurementBinding;
}
inline ::claros::instrument::InstrumentMeasurementBinding* CellDataBinding::release_instrumentmeasurementbinding() {
  // @@protoc_insertion_point(field_release:claros.operations.spreadsheet.CellDataBinding.instrumentMeasurementBinding)
  if (has_instrumentmeasurementbinding()) {
    clear_has_binding();
      ::claros::instrument::InstrumentMeasurementBinding* temp = binding_.instrumentmeasurementbinding_;
    binding_.instrumentmeasurementbinding_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::claros::instrument::InstrumentMeasurementBinding& CellDataBinding::instrumentmeasurementbinding() const {
  // @@protoc_insertion_point(field_get:claros.operations.spreadsheet.CellDataBinding.instrumentMeasurementBinding)
  return has_instrumentmeasurementbinding()
      ? *binding_.instrumentmeasurementbinding_
      : *reinterpret_cast< ::claros::instrument::InstrumentMeasurementBinding*>(&::claros::instrument::_InstrumentMeasurementBinding_default_instance_);
}
inline ::claros::instrument::InstrumentMeasurementBinding* CellDataBinding::mutable_instrumentmeasurementbinding() {
  if (!has_instrumentmeasurementbinding()) {
    clear_binding();
    set_has_instrumentmeasurementbinding();
    binding_.instrumentmeasurementbinding_ = CreateMaybeMessage< ::claros::instrument::InstrumentMeasurementBinding >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:claros.operations.spreadsheet.CellDataBinding.instrumentMeasurementBinding)
  return binding_.instrumentmeasurementbinding_;
}

// .claros.common.computation.ComputationBinding computationBinding = 8;
inline bool CellDataBinding::has_computationbinding() const {
  return binding_case() == kComputationBinding;
}
inline void CellDataBinding::set_has_computationbinding() {
  _oneof_case_[0] = kComputationBinding;
}
inline ::claros::common::computation::ComputationBinding* CellDataBinding::release_computationbinding() {
  // @@protoc_insertion_point(field_release:claros.operations.spreadsheet.CellDataBinding.computationBinding)
  if (has_computationbinding()) {
    clear_has_binding();
      ::claros::common::computation::ComputationBinding* temp = binding_.computationbinding_;
    binding_.computationbinding_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::claros::common::computation::ComputationBinding& CellDataBinding::computationbinding() const {
  // @@protoc_insertion_point(field_get:claros.operations.spreadsheet.CellDataBinding.computationBinding)
  return has_computationbinding()
      ? *binding_.computationbinding_
      : *reinterpret_cast< ::claros::common::computation::ComputationBinding*>(&::claros::common::computation::_ComputationBinding_default_instance_);
}
inline ::claros::common::computation::ComputationBinding* CellDataBinding::mutable_computationbinding() {
  if (!has_computationbinding()) {
    clear_binding();
    set_has_computationbinding();
    binding_.computationbinding_ = CreateMaybeMessage< ::claros::common::computation::ComputationBinding >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:claros.operations.spreadsheet.CellDataBinding.computationBinding)
  return binding_.computationbinding_;
}

// .claros.common.form.FormBinding formBinding = 9;
inline bool CellDataBinding::has_formbinding() const {
  return binding_case() == kFormBinding;
}
inline void CellDataBinding::set_has_formbinding() {
  _oneof_case_[0] = kFormBinding;
}
inline ::claros::common::form::FormBinding* CellDataBinding::release_formbinding() {
  // @@protoc_insertion_point(field_release:claros.operations.spreadsheet.CellDataBinding.formBinding)
  if (has_formbinding()) {
    clear_has_binding();
      ::claros::common::form::FormBinding* temp = binding_.formbinding_;
    binding_.formbinding_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::claros::common::form::FormBinding& CellDataBinding::formbinding() const {
  // @@protoc_insertion_point(field_get:claros.operations.spreadsheet.CellDataBinding.formBinding)
  return has_formbinding()
      ? *binding_.formbinding_
      : *reinterpret_cast< ::claros::common::form::FormBinding*>(&::claros::common::form::_FormBinding_default_instance_);
}
inline ::claros::common::form::FormBinding* CellDataBinding::mutable_formbinding() {
  if (!has_formbinding()) {
    clear_binding();
    set_has_formbinding();
    binding_.formbinding_ = CreateMaybeMessage< ::claros::common::form::FormBinding >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:claros.operations.spreadsheet.CellDataBinding.formBinding)
  return binding_.formbinding_;
}

// .claros.operations.spreadsheet.SpreadsheetBinding spreadsheetBinding = 10;
inline bool CellDataBinding::has_spreadsheetbinding() const {
  return binding_case() == kSpreadsheetBinding;
}
inline void CellDataBinding::set_has_spreadsheetbinding() {
  _oneof_case_[0] = kSpreadsheetBinding;
}
inline ::claros::operations::spreadsheet::SpreadsheetBinding* CellDataBinding::release_spreadsheetbinding() {
  // @@protoc_insertion_point(field_release:claros.operations.spreadsheet.CellDataBinding.spreadsheetBinding)
  if (has_spreadsheetbinding()) {
    clear_has_binding();
      ::claros::operations::spreadsheet::SpreadsheetBinding* temp = binding_.spreadsheetbinding_;
    binding_.spreadsheetbinding_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::claros::operations::spreadsheet::SpreadsheetBinding& CellDataBinding::spreadsheetbinding() const {
  // @@protoc_insertion_point(field_get:claros.operations.spreadsheet.CellDataBinding.spreadsheetBinding)
  return has_spreadsheetbinding()
      ? *binding_.spreadsheetbinding_
      : *reinterpret_cast< ::claros::operations::spreadsheet::SpreadsheetBinding*>(&::claros::operations::spreadsheet::_SpreadsheetBinding_default_instance_);
}
inline ::claros::operations::spreadsheet::SpreadsheetBinding* CellDataBinding::mutable_spreadsheetbinding() {
  if (!has_spreadsheetbinding()) {
    clear_binding();
    set_has_spreadsheetbinding();
    binding_.spreadsheetbinding_ = CreateMaybeMessage< ::claros::operations::spreadsheet::SpreadsheetBinding >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:claros.operations.spreadsheet.CellDataBinding.spreadsheetBinding)
  return binding_.spreadsheetbinding_;
}

// .claros.instrument.InstrumentMeasurementFieldBinding fieldInstrumentMeasurementBinding = 11;
inline bool CellDataBinding::has_fieldinstrumentmeasurementbinding() const {
  return binding_case() == kFieldInstrumentMeasurementBinding;
}
inline void CellDataBinding::set_has_fieldinstrumentmeasurementbinding() {
  _oneof_case_[0] = kFieldInstrumentMeasurementBinding;
}
inline ::claros::instrument::InstrumentMeasurementFieldBinding* CellDataBinding::release_fieldinstrumentmeasurementbinding() {
  // @@protoc_insertion_point(field_release:claros.operations.spreadsheet.CellDataBinding.fieldInstrumentMeasurementBinding)
  if (has_fieldinstrumentmeasurementbinding()) {
    clear_has_binding();
      ::claros::instrument::InstrumentMeasurementFieldBinding* temp = binding_.fieldinstrumentmeasurementbinding_;
    binding_.fieldinstrumentmeasurementbinding_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::claros::instrument::InstrumentMeasurementFieldBinding& CellDataBinding::fieldinstrumentmeasurementbinding() const {
  // @@protoc_insertion_point(field_get:claros.operations.spreadsheet.CellDataBinding.fieldInstrumentMeasurementBinding)
  return has_fieldinstrumentmeasurementbinding()
      ? *binding_.fieldinstrumentmeasurementbinding_
      : *reinterpret_cast< ::claros::instrument::InstrumentMeasurementFieldBinding*>(&::claros::instrument::_InstrumentMeasurementFieldBinding_default_instance_);
}
inline ::claros::instrument::InstrumentMeasurementFieldBinding* CellDataBinding::mutable_fieldinstrumentmeasurementbinding() {
  if (!has_fieldinstrumentmeasurementbinding()) {
    clear_binding();
    set_has_fieldinstrumentmeasurementbinding();
    binding_.fieldinstrumentmeasurementbinding_ = CreateMaybeMessage< ::claros::instrument::InstrumentMeasurementFieldBinding >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:claros.operations.spreadsheet.CellDataBinding.fieldInstrumentMeasurementBinding)
  return binding_.fieldinstrumentmeasurementbinding_;
}

inline bool CellDataBinding::has_binding() const {
  return binding_case() != BINDING_NOT_SET;
}
inline void CellDataBinding::clear_has_binding() {
  _oneof_case_[0] = BINDING_NOT_SET;
}
inline CellDataBinding::BindingCase CellDataBinding::binding_case() const {
  return CellDataBinding::BindingCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace spreadsheet
}  // namespace operations
}  // namespace claros

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_claros_5foperations_5fspreadsheet_5fworksheet_5fcelldata_5fbinding_2eproto
