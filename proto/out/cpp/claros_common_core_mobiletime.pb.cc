// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_mobiletime.proto

#include "claros_common_core_mobiletime.pb.h"

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
class MobileTimeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MobileTime> _instance;
} _MobileTime_default_instance_;
}  // namespace core
}  // namespace common
}  // namespace claros
static void InitDefaultsMobileTime_claros_5fcommon_5fcore_5fmobiletime_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::claros::common::core::_MobileTime_default_instance_;
    new (ptr) ::claros::common::core::MobileTime();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::claros::common::core::MobileTime::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_MobileTime_claros_5fcommon_5fcore_5fmobiletime_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsMobileTime_claros_5fcommon_5fcore_5fmobiletime_2eproto}, {}};

void InitDefaults_claros_5fcommon_5fcore_5fmobiletime_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_MobileTime_claros_5fcommon_5fcore_5fmobiletime_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_claros_5fcommon_5fcore_5fmobiletime_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_claros_5fcommon_5fcore_5fmobiletime_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_claros_5fcommon_5fcore_5fmobiletime_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_claros_5fcommon_5fcore_5fmobiletime_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::claros::common::core::MobileTime, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::claros::common::core::MobileTime, hours_),
  PROTOBUF_FIELD_OFFSET(::claros::common::core::MobileTime, minutes_),
  PROTOBUF_FIELD_OFFSET(::claros::common::core::MobileTime, seconds_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::claros::common::core::MobileTime)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::claros::common::core::_MobileTime_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_claros_5fcommon_5fcore_5fmobiletime_2eproto = {
  {}, AddDescriptors_claros_5fcommon_5fcore_5fmobiletime_2eproto, "claros_common_core_mobiletime.proto", schemas,
  file_default_instances, TableStruct_claros_5fcommon_5fcore_5fmobiletime_2eproto::offsets,
  file_level_metadata_claros_5fcommon_5fcore_5fmobiletime_2eproto, 1, file_level_enum_descriptors_claros_5fcommon_5fcore_5fmobiletime_2eproto, file_level_service_descriptors_claros_5fcommon_5fcore_5fmobiletime_2eproto,
};

const char descriptor_table_protodef_claros_5fcommon_5fcore_5fmobiletime_2eproto[] =
  "\n#claros_common_core_mobiletime.proto\022\022c"
  "laros.common.core\"=\n\nMobileTime\022\r\n\005hours"
  "\030\001 \001(\r\022\017\n\007minutes\030\002 \001(\r\022\017\n\007seconds\030\003 \001(\r"
  "b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_claros_5fcommon_5fcore_5fmobiletime_2eproto = {
  false, InitDefaults_claros_5fcommon_5fcore_5fmobiletime_2eproto, 
  descriptor_table_protodef_claros_5fcommon_5fcore_5fmobiletime_2eproto,
  "claros_common_core_mobiletime.proto", &assign_descriptors_table_claros_5fcommon_5fcore_5fmobiletime_2eproto, 128,
};

void AddDescriptors_claros_5fcommon_5fcore_5fmobiletime_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_claros_5fcommon_5fcore_5fmobiletime_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_claros_5fcommon_5fcore_5fmobiletime_2eproto = []() { AddDescriptors_claros_5fcommon_5fcore_5fmobiletime_2eproto(); return true; }();
namespace claros {
namespace common {
namespace core {

// ===================================================================

void MobileTime::InitAsDefaultInstance() {
}
class MobileTime::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MobileTime::kHoursFieldNumber;
const int MobileTime::kMinutesFieldNumber;
const int MobileTime::kSecondsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MobileTime::MobileTime()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:claros.common.core.MobileTime)
}
MobileTime::MobileTime(const MobileTime& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&hours_, &from.hours_,
    static_cast<size_t>(reinterpret_cast<char*>(&seconds_) -
    reinterpret_cast<char*>(&hours_)) + sizeof(seconds_));
  // @@protoc_insertion_point(copy_constructor:claros.common.core.MobileTime)
}

void MobileTime::SharedCtor() {
  ::memset(&hours_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&seconds_) -
      reinterpret_cast<char*>(&hours_)) + sizeof(seconds_));
}

MobileTime::~MobileTime() {
  // @@protoc_insertion_point(destructor:claros.common.core.MobileTime)
  SharedDtor();
}

void MobileTime::SharedDtor() {
}

void MobileTime::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MobileTime& MobileTime::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_MobileTime_claros_5fcommon_5fcore_5fmobiletime_2eproto.base);
  return *internal_default_instance();
}


void MobileTime::Clear() {
// @@protoc_insertion_point(message_clear_start:claros.common.core.MobileTime)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&hours_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&seconds_) -
      reinterpret_cast<char*>(&hours_)) + sizeof(seconds_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* MobileTime::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<MobileTime*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // uint32 hours = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_hours(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // uint32 minutes = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_minutes(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // uint32 seconds = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 24) goto handle_unusual;
        msg->set_seconds(::google::protobuf::internal::ReadVarint(&ptr));
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
bool MobileTime::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:claros.common.core.MobileTime)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 hours = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &hours_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 minutes = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &minutes_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 seconds = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (24 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &seconds_)));
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
  // @@protoc_insertion_point(parse_success:claros.common.core.MobileTime)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:claros.common.core.MobileTime)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void MobileTime::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:claros.common.core.MobileTime)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 hours = 1;
  if (this->hours() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->hours(), output);
  }

  // uint32 minutes = 2;
  if (this->minutes() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->minutes(), output);
  }

  // uint32 seconds = 3;
  if (this->seconds() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->seconds(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:claros.common.core.MobileTime)
}

::google::protobuf::uint8* MobileTime::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:claros.common.core.MobileTime)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 hours = 1;
  if (this->hours() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->hours(), target);
  }

  // uint32 minutes = 2;
  if (this->minutes() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->minutes(), target);
  }

  // uint32 seconds = 3;
  if (this->seconds() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->seconds(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:claros.common.core.MobileTime)
  return target;
}

size_t MobileTime::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:claros.common.core.MobileTime)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 hours = 1;
  if (this->hours() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->hours());
  }

  // uint32 minutes = 2;
  if (this->minutes() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->minutes());
  }

  // uint32 seconds = 3;
  if (this->seconds() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->seconds());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MobileTime::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:claros.common.core.MobileTime)
  GOOGLE_DCHECK_NE(&from, this);
  const MobileTime* source =
      ::google::protobuf::DynamicCastToGenerated<MobileTime>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:claros.common.core.MobileTime)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:claros.common.core.MobileTime)
    MergeFrom(*source);
  }
}

void MobileTime::MergeFrom(const MobileTime& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:claros.common.core.MobileTime)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.hours() != 0) {
    set_hours(from.hours());
  }
  if (from.minutes() != 0) {
    set_minutes(from.minutes());
  }
  if (from.seconds() != 0) {
    set_seconds(from.seconds());
  }
}

void MobileTime::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:claros.common.core.MobileTime)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MobileTime::CopyFrom(const MobileTime& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:claros.common.core.MobileTime)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MobileTime::IsInitialized() const {
  return true;
}

void MobileTime::Swap(MobileTime* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MobileTime::InternalSwap(MobileTime* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(hours_, other->hours_);
  swap(minutes_, other->minutes_);
  swap(seconds_, other->seconds_);
}

::google::protobuf::Metadata MobileTime::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_claros_5fcommon_5fcore_5fmobiletime_2eproto);
  return ::file_level_metadata_claros_5fcommon_5fcore_5fmobiletime_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace core
}  // namespace common
}  // namespace claros
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::claros::common::core::MobileTime* Arena::CreateMaybeMessage< ::claros::common::core::MobileTime >(Arena* arena) {
  return Arena::CreateInternal< ::claros::common::core::MobileTime >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>