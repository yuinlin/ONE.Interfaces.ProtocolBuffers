// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_reportablequalifier.proto

#include "claros_common_core_reportablequalifier.pb.h"

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
class ReportableQualifierDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ReportableQualifier> _instance;
} _ReportableQualifier_default_instance_;
}  // namespace core
}  // namespace common
}  // namespace claros
static void InitDefaultsReportableQualifier_claros_5fcommon_5fcore_5freportablequalifier_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::claros::common::core::_ReportableQualifier_default_instance_;
    new (ptr) ::claros::common::core::ReportableQualifier();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::claros::common::core::ReportableQualifier::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ReportableQualifier_claros_5fcommon_5fcore_5freportablequalifier_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsReportableQualifier_claros_5fcommon_5fcore_5freportablequalifier_2eproto}, {}};

void InitDefaults_claros_5fcommon_5fcore_5freportablequalifier_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_ReportableQualifier_claros_5fcommon_5fcore_5freportablequalifier_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_claros_5fcommon_5fcore_5freportablequalifier_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_claros_5fcommon_5fcore_5freportablequalifier_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_claros_5fcommon_5fcore_5freportablequalifier_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_claros_5fcommon_5fcore_5freportablequalifier_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::claros::common::core::ReportableQualifier, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::claros::common::core::ReportableQualifier, reportablequalifiertype_),
  PROTOBUF_FIELD_OFFSET(::claros::common::core::ReportableQualifier, qualifiedvalue_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::claros::common::core::ReportableQualifier)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::claros::common::core::_ReportableQualifier_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_claros_5fcommon_5fcore_5freportablequalifier_2eproto = {
  {}, AddDescriptors_claros_5fcommon_5fcore_5freportablequalifier_2eproto, "claros_common_core_reportablequalifier.proto", schemas,
  file_default_instances, TableStruct_claros_5fcommon_5fcore_5freportablequalifier_2eproto::offsets,
  file_level_metadata_claros_5fcommon_5fcore_5freportablequalifier_2eproto, 1, file_level_enum_descriptors_claros_5fcommon_5fcore_5freportablequalifier_2eproto, file_level_service_descriptors_claros_5fcommon_5fcore_5freportablequalifier_2eproto,
};

const char descriptor_table_protodef_claros_5fcommon_5fcore_5freportablequalifier_2eproto[] =
  "\n,claros_common_core_reportablequalifier"
  ".proto\022\022claros.common.core\0321claros_commo"
  "n_core_reportablequalifier_type.proto\"{\n"
  "\023ReportableQualifier\022L\n\027reportableQualif"
  "ierType\030\001 \001(\0162+.claros.common.core.Repor"
  "tableQualifierType\022\026\n\016qualifiedValue\030\002 \001"
  "(\tb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_claros_5fcommon_5fcore_5freportablequalifier_2eproto = {
  false, InitDefaults_claros_5fcommon_5fcore_5freportablequalifier_2eproto, 
  descriptor_table_protodef_claros_5fcommon_5fcore_5freportablequalifier_2eproto,
  "claros_common_core_reportablequalifier.proto", &assign_descriptors_table_claros_5fcommon_5fcore_5freportablequalifier_2eproto, 250,
};

void AddDescriptors_claros_5fcommon_5fcore_5freportablequalifier_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_claros_5fcommon_5fcore_5freportablequalifier_5ftype_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_claros_5fcommon_5fcore_5freportablequalifier_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_claros_5fcommon_5fcore_5freportablequalifier_2eproto = []() { AddDescriptors_claros_5fcommon_5fcore_5freportablequalifier_2eproto(); return true; }();
namespace claros {
namespace common {
namespace core {

// ===================================================================

void ReportableQualifier::InitAsDefaultInstance() {
}
class ReportableQualifier::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReportableQualifier::kReportableQualifierTypeFieldNumber;
const int ReportableQualifier::kQualifiedValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReportableQualifier::ReportableQualifier()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:claros.common.core.ReportableQualifier)
}
ReportableQualifier::ReportableQualifier(const ReportableQualifier& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  qualifiedvalue_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.qualifiedvalue().size() > 0) {
    qualifiedvalue_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.qualifiedvalue_);
  }
  reportablequalifiertype_ = from.reportablequalifiertype_;
  // @@protoc_insertion_point(copy_constructor:claros.common.core.ReportableQualifier)
}

void ReportableQualifier::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_ReportableQualifier_claros_5fcommon_5fcore_5freportablequalifier_2eproto.base);
  qualifiedvalue_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  reportablequalifiertype_ = 0;
}

ReportableQualifier::~ReportableQualifier() {
  // @@protoc_insertion_point(destructor:claros.common.core.ReportableQualifier)
  SharedDtor();
}

void ReportableQualifier::SharedDtor() {
  qualifiedvalue_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ReportableQualifier::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ReportableQualifier& ReportableQualifier::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_ReportableQualifier_claros_5fcommon_5fcore_5freportablequalifier_2eproto.base);
  return *internal_default_instance();
}


void ReportableQualifier::Clear() {
// @@protoc_insertion_point(message_clear_start:claros.common.core.ReportableQualifier)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  qualifiedvalue_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  reportablequalifiertype_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ReportableQualifier::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<ReportableQualifier*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // .claros.common.core.ReportableQualifierType reportableQualifierType = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        ::google::protobuf::uint64 val = ::google::protobuf::internal::ReadVarint(&ptr);
        msg->set_reportablequalifiertype(static_cast<::claros::common::core::ReportableQualifierType>(val));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // string qualifiedValue = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("claros.common.core.ReportableQualifier.qualifiedValue");
        object = msg->mutable_qualifiedvalue();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
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
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ReportableQualifier::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:claros.common.core.ReportableQualifier)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .claros.common.core.ReportableQualifierType reportableQualifierType = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {
          int value = 0;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_reportablequalifiertype(static_cast< ::claros::common::core::ReportableQualifierType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string qualifiedValue = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_qualifiedvalue()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->qualifiedvalue().data(), static_cast<int>(this->qualifiedvalue().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "claros.common.core.ReportableQualifier.qualifiedValue"));
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
  // @@protoc_insertion_point(parse_success:claros.common.core.ReportableQualifier)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:claros.common.core.ReportableQualifier)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ReportableQualifier::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:claros.common.core.ReportableQualifier)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .claros.common.core.ReportableQualifierType reportableQualifierType = 1;
  if (this->reportablequalifiertype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->reportablequalifiertype(), output);
  }

  // string qualifiedValue = 2;
  if (this->qualifiedvalue().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->qualifiedvalue().data(), static_cast<int>(this->qualifiedvalue().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "claros.common.core.ReportableQualifier.qualifiedValue");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->qualifiedvalue(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:claros.common.core.ReportableQualifier)
}

::google::protobuf::uint8* ReportableQualifier::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:claros.common.core.ReportableQualifier)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .claros.common.core.ReportableQualifierType reportableQualifierType = 1;
  if (this->reportablequalifiertype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->reportablequalifiertype(), target);
  }

  // string qualifiedValue = 2;
  if (this->qualifiedvalue().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->qualifiedvalue().data(), static_cast<int>(this->qualifiedvalue().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "claros.common.core.ReportableQualifier.qualifiedValue");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->qualifiedvalue(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:claros.common.core.ReportableQualifier)
  return target;
}

size_t ReportableQualifier::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:claros.common.core.ReportableQualifier)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string qualifiedValue = 2;
  if (this->qualifiedvalue().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->qualifiedvalue());
  }

  // .claros.common.core.ReportableQualifierType reportableQualifierType = 1;
  if (this->reportablequalifiertype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->reportablequalifiertype());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ReportableQualifier::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:claros.common.core.ReportableQualifier)
  GOOGLE_DCHECK_NE(&from, this);
  const ReportableQualifier* source =
      ::google::protobuf::DynamicCastToGenerated<ReportableQualifier>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:claros.common.core.ReportableQualifier)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:claros.common.core.ReportableQualifier)
    MergeFrom(*source);
  }
}

void ReportableQualifier::MergeFrom(const ReportableQualifier& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:claros.common.core.ReportableQualifier)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.qualifiedvalue().size() > 0) {

    qualifiedvalue_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.qualifiedvalue_);
  }
  if (from.reportablequalifiertype() != 0) {
    set_reportablequalifiertype(from.reportablequalifiertype());
  }
}

void ReportableQualifier::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:claros.common.core.ReportableQualifier)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReportableQualifier::CopyFrom(const ReportableQualifier& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:claros.common.core.ReportableQualifier)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReportableQualifier::IsInitialized() const {
  return true;
}

void ReportableQualifier::Swap(ReportableQualifier* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReportableQualifier::InternalSwap(ReportableQualifier* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  qualifiedvalue_.Swap(&other->qualifiedvalue_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(reportablequalifiertype_, other->reportablequalifiertype_);
}

::google::protobuf::Metadata ReportableQualifier::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_claros_5fcommon_5fcore_5freportablequalifier_2eproto);
  return ::file_level_metadata_claros_5fcommon_5fcore_5freportablequalifier_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace core
}  // namespace common
}  // namespace claros
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::claros::common::core::ReportableQualifier* Arena::CreateMaybeMessage< ::claros::common::core::ReportableQualifier >(Arena* arena) {
  return Arena::CreateInternal< ::claros::common::core::ReportableQualifier >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>