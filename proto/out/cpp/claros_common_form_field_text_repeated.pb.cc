// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_form_field_text_repeated.proto

#include "claros_common_form_field_text_repeated.pb.h"

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

extern PROTOBUF_INTERNAL_EXPORT_claros_5fcommon_5fform_5ffield_5ftext_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_FormFieldText_claros_5fcommon_5fform_5ffield_5ftext_2eproto;
namespace claros {
namespace common {
namespace form {
class FormFieldTextRepeatedDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<FormFieldTextRepeated> _instance;
} _FormFieldTextRepeated_default_instance_;
}  // namespace form
}  // namespace common
}  // namespace claros
static void InitDefaultsFormFieldTextRepeated_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::claros::common::form::_FormFieldTextRepeated_default_instance_;
    new (ptr) ::claros::common::form::FormFieldTextRepeated();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::claros::common::form::FormFieldTextRepeated::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_FormFieldTextRepeated_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsFormFieldTextRepeated_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto}, {
      &scc_info_FormFieldText_claros_5fcommon_5fform_5ffield_5ftext_2eproto.base,}};

void InitDefaults_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_FormFieldTextRepeated_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::claros::common::form::FormFieldTextRepeated, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::claros::common::form::FormFieldTextRepeated, formfieldtextrepeated_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::claros::common::form::FormFieldTextRepeated)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::claros::common::form::_FormFieldTextRepeated_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto = {
  {}, AddDescriptors_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto, "claros_common_form_field_text_repeated.proto", schemas,
  file_default_instances, TableStruct_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto::offsets,
  file_level_metadata_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto, 1, file_level_enum_descriptors_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto, file_level_service_descriptors_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto,
};

const char descriptor_table_protodef_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto[] =
  "\n,claros_common_form_field_text_repeated"
  ".proto\022\022claros.common.form\032#claros_commo"
  "n_form_field_text.proto\"Y\n\025FormFieldText"
  "Repeated\022@\n\025formFieldTextRepeated\030\001 \003(\0132"
  "!.claros.common.form.FormFieldTextb\006prot"
  "o3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto = {
  false, InitDefaults_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto, 
  descriptor_table_protodef_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto,
  "claros_common_form_field_text_repeated.proto", &assign_descriptors_table_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto, 202,
};

void AddDescriptors_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_claros_5fcommon_5fform_5ffield_5ftext_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto = []() { AddDescriptors_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto(); return true; }();
namespace claros {
namespace common {
namespace form {

// ===================================================================

void FormFieldTextRepeated::InitAsDefaultInstance() {
}
class FormFieldTextRepeated::HasBitSetters {
 public:
};

void FormFieldTextRepeated::clear_formfieldtextrepeated() {
  formfieldtextrepeated_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FormFieldTextRepeated::kFormFieldTextRepeatedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FormFieldTextRepeated::FormFieldTextRepeated()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:claros.common.form.FormFieldTextRepeated)
}
FormFieldTextRepeated::FormFieldTextRepeated(const FormFieldTextRepeated& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      formfieldtextrepeated_(from.formfieldtextrepeated_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:claros.common.form.FormFieldTextRepeated)
}

void FormFieldTextRepeated::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_FormFieldTextRepeated_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto.base);
}

FormFieldTextRepeated::~FormFieldTextRepeated() {
  // @@protoc_insertion_point(destructor:claros.common.form.FormFieldTextRepeated)
  SharedDtor();
}

void FormFieldTextRepeated::SharedDtor() {
}

void FormFieldTextRepeated::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const FormFieldTextRepeated& FormFieldTextRepeated::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_FormFieldTextRepeated_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto.base);
  return *internal_default_instance();
}


void FormFieldTextRepeated::Clear() {
// @@protoc_insertion_point(message_clear_start:claros.common.form.FormFieldTextRepeated)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  formfieldtextrepeated_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* FormFieldTextRepeated::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<FormFieldTextRepeated*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // repeated .claros.common.form.FormFieldText formFieldTextRepeated = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          parser_till_end = ::claros::common::form::FormFieldText::_InternalParse;
          object = msg->add_formfieldtextrepeated();
          if (size > end - ptr) goto len_delim_till_end;
          ptr += size;
          GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
              {parser_till_end, object}, ptr - size, ptr));
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 10 && (ptr += 1));
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
bool FormFieldTextRepeated::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:claros.common.form.FormFieldTextRepeated)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .claros.common.form.FormFieldText formFieldTextRepeated = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_formfieldtextrepeated()));
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
  // @@protoc_insertion_point(parse_success:claros.common.form.FormFieldTextRepeated)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:claros.common.form.FormFieldTextRepeated)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void FormFieldTextRepeated::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:claros.common.form.FormFieldTextRepeated)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .claros.common.form.FormFieldText formFieldTextRepeated = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->formfieldtextrepeated_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->formfieldtextrepeated(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:claros.common.form.FormFieldTextRepeated)
}

::google::protobuf::uint8* FormFieldTextRepeated::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:claros.common.form.FormFieldTextRepeated)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .claros.common.form.FormFieldText formFieldTextRepeated = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->formfieldtextrepeated_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->formfieldtextrepeated(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:claros.common.form.FormFieldTextRepeated)
  return target;
}

size_t FormFieldTextRepeated::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:claros.common.form.FormFieldTextRepeated)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .claros.common.form.FormFieldText formFieldTextRepeated = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->formfieldtextrepeated_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->formfieldtextrepeated(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FormFieldTextRepeated::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:claros.common.form.FormFieldTextRepeated)
  GOOGLE_DCHECK_NE(&from, this);
  const FormFieldTextRepeated* source =
      ::google::protobuf::DynamicCastToGenerated<FormFieldTextRepeated>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:claros.common.form.FormFieldTextRepeated)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:claros.common.form.FormFieldTextRepeated)
    MergeFrom(*source);
  }
}

void FormFieldTextRepeated::MergeFrom(const FormFieldTextRepeated& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:claros.common.form.FormFieldTextRepeated)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  formfieldtextrepeated_.MergeFrom(from.formfieldtextrepeated_);
}

void FormFieldTextRepeated::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:claros.common.form.FormFieldTextRepeated)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FormFieldTextRepeated::CopyFrom(const FormFieldTextRepeated& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:claros.common.form.FormFieldTextRepeated)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FormFieldTextRepeated::IsInitialized() const {
  return true;
}

void FormFieldTextRepeated::Swap(FormFieldTextRepeated* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FormFieldTextRepeated::InternalSwap(FormFieldTextRepeated* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&formfieldtextrepeated_)->InternalSwap(CastToBase(&other->formfieldtextrepeated_));
}

::google::protobuf::Metadata FormFieldTextRepeated::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto);
  return ::file_level_metadata_claros_5fcommon_5fform_5ffield_5ftext_5frepeated_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace form
}  // namespace common
}  // namespace claros
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::claros::common::form::FormFieldTextRepeated* Arena::CreateMaybeMessage< ::claros::common::form::FormFieldTextRepeated >(Arena* arena) {
  return Arena::CreateInternal< ::claros::common::form::FormFieldTextRepeated >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>