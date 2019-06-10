// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_operations_spreadsheet_worksheet.proto

#ifndef PROTOBUF_INCLUDED_claros_5foperations_5fspreadsheet_5fworksheet_2eproto
#define PROTOBUF_INCLUDED_claros_5foperations_5fspreadsheet_5fworksheet_2eproto

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
#include "claros_operations_spreadsheet_worksheet_type.pb.h"
#include "claros_operations_spreadsheet_worksheet_definition.pb.h"
#include "claros_operations_spreadsheet_worksheet_row.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_claros_5foperations_5fspreadsheet_5fworksheet_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_claros_5foperations_5fspreadsheet_5fworksheet_2eproto {
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
void AddDescriptors_claros_5foperations_5fspreadsheet_5fworksheet_2eproto();
namespace claros {
namespace operations {
namespace spreadsheet {
class Worksheet;
class WorksheetDefaultTypeInternal;
extern WorksheetDefaultTypeInternal _Worksheet_default_instance_;
}  // namespace spreadsheet
}  // namespace operations
}  // namespace claros
namespace google {
namespace protobuf {
template<> ::claros::operations::spreadsheet::Worksheet* Arena::CreateMaybeMessage<::claros::operations::spreadsheet::Worksheet>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace claros {
namespace operations {
namespace spreadsheet {

// ===================================================================

class Worksheet :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:claros.operations.spreadsheet.Worksheet) */ {
 public:
  Worksheet();
  virtual ~Worksheet();

  Worksheet(const Worksheet& from);

  inline Worksheet& operator=(const Worksheet& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Worksheet(Worksheet&& from) noexcept
    : Worksheet() {
    *this = ::std::move(from);
  }

  inline Worksheet& operator=(Worksheet&& from) noexcept {
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
  static const Worksheet& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Worksheet* internal_default_instance() {
    return reinterpret_cast<const Worksheet*>(
               &_Worksheet_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Worksheet* other);
  friend void swap(Worksheet& a, Worksheet& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Worksheet* New() const final {
    return CreateMaybeMessage<Worksheet>(nullptr);
  }

  Worksheet* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Worksheet>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Worksheet& from);
  void MergeFrom(const Worksheet& from);
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
  void InternalSwap(Worksheet* other);
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

  // repeated .claros.operations.spreadsheet.WorksheetDefinition worksheetDefinitions = 2;
  int worksheetdefinitions_size() const;
  void clear_worksheetdefinitions();
  static const int kWorksheetDefinitionsFieldNumber = 2;
  ::claros::operations::spreadsheet::WorksheetDefinition* mutable_worksheetdefinitions(int index);
  ::google::protobuf::RepeatedPtrField< ::claros::operations::spreadsheet::WorksheetDefinition >*
      mutable_worksheetdefinitions();
  const ::claros::operations::spreadsheet::WorksheetDefinition& worksheetdefinitions(int index) const;
  ::claros::operations::spreadsheet::WorksheetDefinition* add_worksheetdefinitions();
  const ::google::protobuf::RepeatedPtrField< ::claros::operations::spreadsheet::WorksheetDefinition >&
      worksheetdefinitions() const;

  // repeated .claros.operations.spreadsheet.Row rows = 3;
  int rows_size() const;
  void clear_rows();
  static const int kRowsFieldNumber = 3;
  ::claros::operations::spreadsheet::Row* mutable_rows(int index);
  ::google::protobuf::RepeatedPtrField< ::claros::operations::spreadsheet::Row >*
      mutable_rows();
  const ::claros::operations::spreadsheet::Row& rows(int index) const;
  ::claros::operations::spreadsheet::Row* add_rows();
  const ::google::protobuf::RepeatedPtrField< ::claros::operations::spreadsheet::Row >&
      rows() const;

  // .claros.operations.spreadsheet.WorksheetType worksheetType = 1;
  void clear_worksheettype();
  static const int kWorksheetTypeFieldNumber = 1;
  ::claros::operations::spreadsheet::WorksheetType worksheettype() const;
  void set_worksheettype(::claros::operations::spreadsheet::WorksheetType value);

  // @@protoc_insertion_point(class_scope:claros.operations.spreadsheet.Worksheet)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::claros::operations::spreadsheet::WorksheetDefinition > worksheetdefinitions_;
  ::google::protobuf::RepeatedPtrField< ::claros::operations::spreadsheet::Row > rows_;
  int worksheettype_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_claros_5foperations_5fspreadsheet_5fworksheet_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Worksheet

// .claros.operations.spreadsheet.WorksheetType worksheetType = 1;
inline void Worksheet::clear_worksheettype() {
  worksheettype_ = 0;
}
inline ::claros::operations::spreadsheet::WorksheetType Worksheet::worksheettype() const {
  // @@protoc_insertion_point(field_get:claros.operations.spreadsheet.Worksheet.worksheetType)
  return static_cast< ::claros::operations::spreadsheet::WorksheetType >(worksheettype_);
}
inline void Worksheet::set_worksheettype(::claros::operations::spreadsheet::WorksheetType value) {
  
  worksheettype_ = value;
  // @@protoc_insertion_point(field_set:claros.operations.spreadsheet.Worksheet.worksheetType)
}

// repeated .claros.operations.spreadsheet.WorksheetDefinition worksheetDefinitions = 2;
inline int Worksheet::worksheetdefinitions_size() const {
  return worksheetdefinitions_.size();
}
inline ::claros::operations::spreadsheet::WorksheetDefinition* Worksheet::mutable_worksheetdefinitions(int index) {
  // @@protoc_insertion_point(field_mutable:claros.operations.spreadsheet.Worksheet.worksheetDefinitions)
  return worksheetdefinitions_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::claros::operations::spreadsheet::WorksheetDefinition >*
Worksheet::mutable_worksheetdefinitions() {
  // @@protoc_insertion_point(field_mutable_list:claros.operations.spreadsheet.Worksheet.worksheetDefinitions)
  return &worksheetdefinitions_;
}
inline const ::claros::operations::spreadsheet::WorksheetDefinition& Worksheet::worksheetdefinitions(int index) const {
  // @@protoc_insertion_point(field_get:claros.operations.spreadsheet.Worksheet.worksheetDefinitions)
  return worksheetdefinitions_.Get(index);
}
inline ::claros::operations::spreadsheet::WorksheetDefinition* Worksheet::add_worksheetdefinitions() {
  // @@protoc_insertion_point(field_add:claros.operations.spreadsheet.Worksheet.worksheetDefinitions)
  return worksheetdefinitions_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::claros::operations::spreadsheet::WorksheetDefinition >&
Worksheet::worksheetdefinitions() const {
  // @@protoc_insertion_point(field_list:claros.operations.spreadsheet.Worksheet.worksheetDefinitions)
  return worksheetdefinitions_;
}

// repeated .claros.operations.spreadsheet.Row rows = 3;
inline int Worksheet::rows_size() const {
  return rows_.size();
}
inline ::claros::operations::spreadsheet::Row* Worksheet::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:claros.operations.spreadsheet.Worksheet.rows)
  return rows_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::claros::operations::spreadsheet::Row >*
Worksheet::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:claros.operations.spreadsheet.Worksheet.rows)
  return &rows_;
}
inline const ::claros::operations::spreadsheet::Row& Worksheet::rows(int index) const {
  // @@protoc_insertion_point(field_get:claros.operations.spreadsheet.Worksheet.rows)
  return rows_.Get(index);
}
inline ::claros::operations::spreadsheet::Row* Worksheet::add_rows() {
  // @@protoc_insertion_point(field_add:claros.operations.spreadsheet.Worksheet.rows)
  return rows_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::claros::operations::spreadsheet::Row >&
Worksheet::rows() const {
  // @@protoc_insertion_point(field_list:claros.operations.spreadsheet.Worksheet.rows)
  return rows_;
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
#endif  // PROTOBUF_INCLUDED_claros_5foperations_5fspreadsheet_5fworksheet_2eproto
