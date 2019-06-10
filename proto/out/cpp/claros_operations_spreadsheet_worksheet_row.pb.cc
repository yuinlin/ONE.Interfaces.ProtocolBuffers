// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_operations_spreadsheet_worksheet_row.proto

#include "claros_operations_spreadsheet_worksheet_row.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_claros_5fcommon_5fcore_5ftimewindow_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_TimeWindow_claros_5fcommon_5fcore_5ftimewindow_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_claros_5foperations_5fspreadsheet_5fworksheet_5fcell_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Cell_claros_5foperations_5fspreadsheet_5fworksheet_5fcell_2eproto;
namespace claros {
namespace operations {
namespace spreadsheet {
class RowDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Row> _instance;
} _Row_default_instance_;
}  // namespace spreadsheet
}  // namespace operations
}  // namespace claros
static void InitDefaultsRow_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::claros::operations::spreadsheet::_Row_default_instance_;
    new (ptr) ::claros::operations::spreadsheet::Row();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::claros::operations::spreadsheet::Row::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_Row_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsRow_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto}, {
      &scc_info_TimeWindow_claros_5fcommon_5fcore_5ftimewindow_2eproto.base,
      &scc_info_Cell_claros_5foperations_5fspreadsheet_5fworksheet_5fcell_2eproto.base,}};

void InitDefaults_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Row_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::claros::operations::spreadsheet::Row, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::claros::operations::spreadsheet::Row, rownumber_),
  PROTOBUF_FIELD_OFFSET(::claros::operations::spreadsheet::Row, utctimewindow_),
  PROTOBUF_FIELD_OFFSET(::claros::operations::spreadsheet::Row, cells_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::claros::operations::spreadsheet::Row)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::claros::operations::spreadsheet::_Row_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto = {
  {}, AddDescriptors_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto, "claros_operations_spreadsheet_worksheet_row.proto", schemas,
  file_default_instances, TableStruct_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto::offsets,
  file_level_metadata_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto, 1, file_level_enum_descriptors_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto, file_level_service_descriptors_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto,
};

const char descriptor_table_protodef_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto[] =
  "\n1claros_operations_spreadsheet_workshee"
  "t_row.proto\022\035claros.operations.spreadshe"
  "et\032#claros_common_core_timewindow.proto\032"
  "2claros_operations_spreadsheet_worksheet"
  "_cell.proto\"\203\001\n\003Row\022\021\n\trowNumber\030\001 \001(\r\0225"
  "\n\rUTCTimeWindow\030\002 \001(\0132\036.claros.common.co"
  "re.TimeWindow\0222\n\005cells\030\003 \003(\0132#.claros.op"
  "erations.spreadsheet.Cellb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto = {
  false, InitDefaults_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto, 
  descriptor_table_protodef_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto,
  "claros_operations_spreadsheet_worksheet_row.proto", &assign_descriptors_table_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto, 313,
};

void AddDescriptors_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[2] =
  {
    ::AddDescriptors_claros_5fcommon_5fcore_5ftimewindow_2eproto,
    ::AddDescriptors_claros_5foperations_5fspreadsheet_5fworksheet_5fcell_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto, deps, 2);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto = []() { AddDescriptors_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto(); return true; }();
namespace claros {
namespace operations {
namespace spreadsheet {

// ===================================================================

void Row::InitAsDefaultInstance() {
  ::claros::operations::spreadsheet::_Row_default_instance_._instance.get_mutable()->utctimewindow_ = const_cast< ::claros::common::core::TimeWindow*>(
      ::claros::common::core::TimeWindow::internal_default_instance());
}
class Row::HasBitSetters {
 public:
  static const ::claros::common::core::TimeWindow& utctimewindow(const Row* msg);
};

const ::claros::common::core::TimeWindow&
Row::HasBitSetters::utctimewindow(const Row* msg) {
  return *msg->utctimewindow_;
}
void Row::clear_utctimewindow() {
  if (GetArenaNoVirtual() == nullptr && utctimewindow_ != nullptr) {
    delete utctimewindow_;
  }
  utctimewindow_ = nullptr;
}
void Row::clear_cells() {
  cells_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Row::kRowNumberFieldNumber;
const int Row::kUTCTimeWindowFieldNumber;
const int Row::kCellsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Row::Row()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:claros.operations.spreadsheet.Row)
}
Row::Row(const Row& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      cells_(from.cells_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_utctimewindow()) {
    utctimewindow_ = new ::claros::common::core::TimeWindow(*from.utctimewindow_);
  } else {
    utctimewindow_ = nullptr;
  }
  rownumber_ = from.rownumber_;
  // @@protoc_insertion_point(copy_constructor:claros.operations.spreadsheet.Row)
}

void Row::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Row_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto.base);
  ::memset(&utctimewindow_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&rownumber_) -
      reinterpret_cast<char*>(&utctimewindow_)) + sizeof(rownumber_));
}

Row::~Row() {
  // @@protoc_insertion_point(destructor:claros.operations.spreadsheet.Row)
  SharedDtor();
}

void Row::SharedDtor() {
  if (this != internal_default_instance()) delete utctimewindow_;
}

void Row::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Row& Row::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Row_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto.base);
  return *internal_default_instance();
}


void Row::Clear() {
// @@protoc_insertion_point(message_clear_start:claros.operations.spreadsheet.Row)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cells_.Clear();
  if (GetArenaNoVirtual() == nullptr && utctimewindow_ != nullptr) {
    delete utctimewindow_;
  }
  utctimewindow_ = nullptr;
  rownumber_ = 0u;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Row::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Row*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // uint32 rowNumber = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_rownumber(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // .claros.common.core.TimeWindow UTCTimeWindow = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::claros::common::core::TimeWindow::_InternalParse;
        object = msg->mutable_utctimewindow();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // repeated .claros.operations.spreadsheet.Cell cells = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          parser_till_end = ::claros::operations::spreadsheet::Cell::_InternalParse;
          object = msg->add_cells();
          if (size > end - ptr) goto len_delim_till_end;
          ptr += size;
          GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
              {parser_till_end, object}, ptr - size, ptr));
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 26 && (ptr += 1));
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Row::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:claros.operations.spreadsheet.Row)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 rowNumber = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rownumber_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .claros.common.core.TimeWindow UTCTimeWindow = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_utctimewindow()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .claros.operations.spreadsheet.Cell cells = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_cells()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:claros.operations.spreadsheet.Row)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:claros.operations.spreadsheet.Row)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Row::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:claros.operations.spreadsheet.Row)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 rowNumber = 1;
  if (this->rownumber() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->rownumber(), output);
  }

  // .claros.common.core.TimeWindow UTCTimeWindow = 2;
  if (this->has_utctimewindow()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, HasBitSetters::utctimewindow(this), output);
  }

  // repeated .claros.operations.spreadsheet.Cell cells = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->cells_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->cells(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:claros.operations.spreadsheet.Row)
}

::google::protobuf::uint8* Row::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:claros.operations.spreadsheet.Row)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 rowNumber = 1;
  if (this->rownumber() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->rownumber(), target);
  }

  // .claros.common.core.TimeWindow UTCTimeWindow = 2;
  if (this->has_utctimewindow()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, HasBitSetters::utctimewindow(this), target);
  }

  // repeated .claros.operations.spreadsheet.Cell cells = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->cells_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->cells(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:claros.operations.spreadsheet.Row)
  return target;
}

size_t Row::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:claros.operations.spreadsheet.Row)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .claros.operations.spreadsheet.Cell cells = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->cells_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->cells(static_cast<int>(i)));
    }
  }

  // .claros.common.core.TimeWindow UTCTimeWindow = 2;
  if (this->has_utctimewindow()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *utctimewindow_);
  }

  // uint32 rowNumber = 1;
  if (this->rownumber() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->rownumber());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Row::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:claros.operations.spreadsheet.Row)
  GOOGLE_DCHECK_NE(&from, this);
  const Row* source =
      ::google::protobuf::DynamicCastToGenerated<Row>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:claros.operations.spreadsheet.Row)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:claros.operations.spreadsheet.Row)
    MergeFrom(*source);
  }
}

void Row::MergeFrom(const Row& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:claros.operations.spreadsheet.Row)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cells_.MergeFrom(from.cells_);
  if (from.has_utctimewindow()) {
    mutable_utctimewindow()->::claros::common::core::TimeWindow::MergeFrom(from.utctimewindow());
  }
  if (from.rownumber() != 0) {
    set_rownumber(from.rownumber());
  }
}

void Row::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:claros.operations.spreadsheet.Row)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Row::CopyFrom(const Row& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:claros.operations.spreadsheet.Row)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Row::IsInitialized() const {
  return true;
}

void Row::Swap(Row* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Row::InternalSwap(Row* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&cells_)->InternalSwap(CastToBase(&other->cells_));
  swap(utctimewindow_, other->utctimewindow_);
  swap(rownumber_, other->rownumber_);
}

::google::protobuf::Metadata Row::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto);
  return ::file_level_metadata_claros_5foperations_5fspreadsheet_5fworksheet_5frow_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace spreadsheet
}  // namespace operations
}  // namespace claros
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::claros::operations::spreadsheet::Row* Arena::CreateMaybeMessage< ::claros::operations::spreadsheet::Row >(Arena* arena) {
  return Arena::CreateInternal< ::claros::operations::spreadsheet::Row >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>