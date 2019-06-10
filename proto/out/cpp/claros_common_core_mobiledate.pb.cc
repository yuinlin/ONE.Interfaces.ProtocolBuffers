// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_mobiledate.proto

#include "claros_common_core_mobiledate.pb.h"

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

namespace claros {
namespace common {
namespace core {
class MobileDateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MobileDate> _instance;
} _MobileDate_default_instance_;
}  // namespace core
}  // namespace common
}  // namespace claros
static void InitDefaultsMobileDate_claros_5fcommon_5fcore_5fmobiledate_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::claros::common::core::_MobileDate_default_instance_;
    new (ptr) ::claros::common::core::MobileDate();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::claros::common::core::MobileDate::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_MobileDate_claros_5fcommon_5fcore_5fmobiledate_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsMobileDate_claros_5fcommon_5fcore_5fmobiledate_2eproto}, {}};

void InitDefaults_claros_5fcommon_5fcore_5fmobiledate_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_MobileDate_claros_5fcommon_5fcore_5fmobiledate_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_claros_5fcommon_5fcore_5fmobiledate_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_claros_5fcommon_5fcore_5fmobiledate_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_claros_5fcommon_5fcore_5fmobiledate_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_claros_5fcommon_5fcore_5fmobiledate_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::claros::common::core::MobileDate, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::claros::common::core::MobileDate, year_),
  PROTOBUF_FIELD_OFFSET(::claros::common::core::MobileDate, month_),
  PROTOBUF_FIELD_OFFSET(::claros::common::core::MobileDate, day_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::claros::common::core::MobileDate)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::claros::common::core::_MobileDate_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_claros_5fcommon_5fcore_5fmobiledate_2eproto = {
  {}, AddDescriptors_claros_5fcommon_5fcore_5fmobiledate_2eproto, "claros_common_core_mobiledate.proto", schemas,
  file_default_instances, TableStruct_claros_5fcommon_5fcore_5fmobiledate_2eproto::offsets,
  file_level_metadata_claros_5fcommon_5fcore_5fmobiledate_2eproto, 1, file_level_enum_descriptors_claros_5fcommon_5fcore_5fmobiledate_2eproto, file_level_service_descriptors_claros_5fcommon_5fcore_5fmobiledate_2eproto,
};

const char descriptor_table_protodef_claros_5fcommon_5fcore_5fmobiledate_2eproto[] =
  "\n#claros_common_core_mobiledate.proto\022\022c"
  "laros.common.core\"6\n\nMobileDate\022\014\n\004year\030"
  "\001 \001(\r\022\r\n\005month\030\002 \001(\r\022\013\n\003day\030\003 \001(\rb\006proto"
  "3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_claros_5fcommon_5fcore_5fmobiledate_2eproto = {
  false, InitDefaults_claros_5fcommon_5fcore_5fmobiledate_2eproto, 
  descriptor_table_protodef_claros_5fcommon_5fcore_5fmobiledate_2eproto,
  "claros_common_core_mobiledate.proto", &assign_descriptors_table_claros_5fcommon_5fcore_5fmobiledate_2eproto, 121,
};

void AddDescriptors_claros_5fcommon_5fcore_5fmobiledate_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_claros_5fcommon_5fcore_5fmobiledate_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_claros_5fcommon_5fcore_5fmobiledate_2eproto = []() { AddDescriptors_claros_5fcommon_5fcore_5fmobiledate_2eproto(); return true; }();
namespace claros {
namespace common {
namespace core {

// ===================================================================

void MobileDate::InitAsDefaultInstance() {
}
class MobileDate::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MobileDate::kYearFieldNumber;
const int MobileDate::kMonthFieldNumber;
const int MobileDate::kDayFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MobileDate::MobileDate()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:claros.common.core.MobileDate)
}
MobileDate::MobileDate(const MobileDate& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&year_, &from.year_,
    static_cast<size_t>(reinterpret_cast<char*>(&day_) -
    reinterpret_cast<char*>(&year_)) + sizeof(day_));
  // @@protoc_insertion_point(copy_constructor:claros.common.core.MobileDate)
}

void MobileDate::SharedCtor() {
  ::memset(&year_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&day_) -
      reinterpret_cast<char*>(&year_)) + sizeof(day_));
}

MobileDate::~MobileDate() {
  // @@protoc_insertion_point(destructor:claros.common.core.MobileDate)
  SharedDtor();
}

void MobileDate::SharedDtor() {
}

void MobileDate::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MobileDate& MobileDate::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_MobileDate_claros_5fcommon_5fcore_5fmobiledate_2eproto.base);
  return *internal_default_instance();
}


void MobileDate::Clear() {
// @@protoc_insertion_point(message_clear_start:claros.common.core.MobileDate)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&year_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&day_) -
      reinterpret_cast<char*>(&year_)) + sizeof(day_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* MobileDate::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<MobileDate*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // uint32 year = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_year(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // uint32 month = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_month(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // uint32 day = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 24) goto handle_unusual;
        msg->set_day(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
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
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool MobileDate::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:claros.common.core.MobileDate)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 year = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &year_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 month = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &month_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 day = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (24 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &day_)));
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
  // @@protoc_insertion_point(parse_success:claros.common.core.MobileDate)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:claros.common.core.MobileDate)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void MobileDate::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:claros.common.core.MobileDate)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 year = 1;
  if (this->year() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->year(), output);
  }

  // uint32 month = 2;
  if (this->month() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->month(), output);
  }

  // uint32 day = 3;
  if (this->day() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->day(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:claros.common.core.MobileDate)
}

::google::protobuf::uint8* MobileDate::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:claros.common.core.MobileDate)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 year = 1;
  if (this->year() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->year(), target);
  }

  // uint32 month = 2;
  if (this->month() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->month(), target);
  }

  // uint32 day = 3;
  if (this->day() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->day(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:claros.common.core.MobileDate)
  return target;
}

size_t MobileDate::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:claros.common.core.MobileDate)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 year = 1;
  if (this->year() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->year());
  }

  // uint32 month = 2;
  if (this->month() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->month());
  }

  // uint32 day = 3;
  if (this->day() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->day());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MobileDate::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:claros.common.core.MobileDate)
  GOOGLE_DCHECK_NE(&from, this);
  const MobileDate* source =
      ::google::protobuf::DynamicCastToGenerated<MobileDate>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:claros.common.core.MobileDate)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:claros.common.core.MobileDate)
    MergeFrom(*source);
  }
}

void MobileDate::MergeFrom(const MobileDate& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:claros.common.core.MobileDate)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.year() != 0) {
    set_year(from.year());
  }
  if (from.month() != 0) {
    set_month(from.month());
  }
  if (from.day() != 0) {
    set_day(from.day());
  }
}

void MobileDate::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:claros.common.core.MobileDate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MobileDate::CopyFrom(const MobileDate& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:claros.common.core.MobileDate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MobileDate::IsInitialized() const {
  return true;
}

void MobileDate::Swap(MobileDate* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MobileDate::InternalSwap(MobileDate* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(year_, other->year_);
  swap(month_, other->month_);
  swap(day_, other->day_);
}

::google::protobuf::Metadata MobileDate::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_claros_5fcommon_5fcore_5fmobiledate_2eproto);
  return ::file_level_metadata_claros_5fcommon_5fcore_5fmobiledate_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace core
}  // namespace common
}  // namespace claros
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::claros::common::core::MobileDate* Arena::CreateMaybeMessage< ::claros::common::core::MobileDate >(Arena* arena) {
  return Arena::CreateInternal< ::claros::common::core::MobileDate >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
