// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_note.proto

#include "claros_common_core_note.pb.h"

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

extern PROTOBUF_INTERNAL_EXPORT_claros_5fcommon_5fcore_5fclarosdatetime_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_ClarosDateTime_claros_5fcommon_5fcore_5fclarosdatetime_2eproto;
namespace claros {
namespace common {
namespace core {
class NoteDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Note> _instance;
} _Note_default_instance_;
}  // namespace core
}  // namespace common
}  // namespace claros
static void InitDefaultsNote_claros_5fcommon_5fcore_5fnote_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::claros::common::core::_Note_default_instance_;
    new (ptr) ::claros::common::core::Note();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::claros::common::core::Note::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Note_claros_5fcommon_5fcore_5fnote_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsNote_claros_5fcommon_5fcore_5fnote_2eproto}, {
      &scc_info_ClarosDateTime_claros_5fcommon_5fcore_5fclarosdatetime_2eproto.base,}};

void InitDefaults_claros_5fcommon_5fcore_5fnote_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Note_claros_5fcommon_5fcore_5fnote_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_claros_5fcommon_5fcore_5fnote_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_claros_5fcommon_5fcore_5fnote_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_claros_5fcommon_5fcore_5fnote_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_claros_5fcommon_5fcore_5fnote_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::claros::common::core::Note, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::claros::common::core::Note, id_),
  PROTOBUF_FIELD_OFFSET(::claros::common::core::Note, timestamp_),
  PROTOBUF_FIELD_OFFSET(::claros::common::core::Note, userid_),
  PROTOBUF_FIELD_OFFSET(::claros::common::core::Note, text_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::claros::common::core::Note)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::claros::common::core::_Note_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_claros_5fcommon_5fcore_5fnote_2eproto = {
  {}, AddDescriptors_claros_5fcommon_5fcore_5fnote_2eproto, "claros_common_core_note.proto", schemas,
  file_default_instances, TableStruct_claros_5fcommon_5fcore_5fnote_2eproto::offsets,
  file_level_metadata_claros_5fcommon_5fcore_5fnote_2eproto, 1, file_level_enum_descriptors_claros_5fcommon_5fcore_5fnote_2eproto, file_level_service_descriptors_claros_5fcommon_5fcore_5fnote_2eproto,
};

const char descriptor_table_protodef_claros_5fcommon_5fcore_5fnote_2eproto[] =
  "\n\035claros_common_core_note.proto\022\022claros."
  "common.core\032\'claros_common_core_clarosda"
  "tetime.proto\"g\n\004Note\022\n\n\002id\030\001 \001(\t\0225\n\ttime"
  "Stamp\030\004 \001(\0132\".claros.common.core.ClarosD"
  "ateTime\022\016\n\006userId\030\005 \001(\t\022\014\n\004text\030\006 \001(\tb\006p"
  "roto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_claros_5fcommon_5fcore_5fnote_2eproto = {
  false, InitDefaults_claros_5fcommon_5fcore_5fnote_2eproto, 
  descriptor_table_protodef_claros_5fcommon_5fcore_5fnote_2eproto,
  "claros_common_core_note.proto", &assign_descriptors_table_claros_5fcommon_5fcore_5fnote_2eproto, 205,
};

void AddDescriptors_claros_5fcommon_5fcore_5fnote_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_claros_5fcommon_5fcore_5fclarosdatetime_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_claros_5fcommon_5fcore_5fnote_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_claros_5fcommon_5fcore_5fnote_2eproto = []() { AddDescriptors_claros_5fcommon_5fcore_5fnote_2eproto(); return true; }();
namespace claros {
namespace common {
namespace core {

// ===================================================================

void Note::InitAsDefaultInstance() {
  ::claros::common::core::_Note_default_instance_._instance.get_mutable()->timestamp_ = const_cast< ::claros::common::core::ClarosDateTime*>(
      ::claros::common::core::ClarosDateTime::internal_default_instance());
}
class Note::HasBitSetters {
 public:
  static const ::claros::common::core::ClarosDateTime& timestamp(const Note* msg);
};

const ::claros::common::core::ClarosDateTime&
Note::HasBitSetters::timestamp(const Note* msg) {
  return *msg->timestamp_;
}
void Note::clear_timestamp() {
  if (GetArenaNoVirtual() == nullptr && timestamp_ != nullptr) {
    delete timestamp_;
  }
  timestamp_ = nullptr;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Note::kIdFieldNumber;
const int Note::kTimeStampFieldNumber;
const int Note::kUserIdFieldNumber;
const int Note::kTextFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Note::Note()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:claros.common.core.Note)
}
Note::Note(const Note& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  userid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.userid().size() > 0) {
    userid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.userid_);
  }
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.text().size() > 0) {
    text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  if (from.has_timestamp()) {
    timestamp_ = new ::claros::common::core::ClarosDateTime(*from.timestamp_);
  } else {
    timestamp_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:claros.common.core.Note)
}

void Note::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Note_claros_5fcommon_5fcore_5fnote_2eproto.base);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  userid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  timestamp_ = nullptr;
}

Note::~Note() {
  // @@protoc_insertion_point(destructor:claros.common.core.Note)
  SharedDtor();
}

void Note::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  userid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  text_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete timestamp_;
}

void Note::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Note& Note::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Note_claros_5fcommon_5fcore_5fnote_2eproto.base);
  return *internal_default_instance();
}


void Note::Clear() {
// @@protoc_insertion_point(message_clear_start:claros.common.core.Note)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  userid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && timestamp_ != nullptr) {
    delete timestamp_;
  }
  timestamp_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Note::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Note*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string id = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("claros.common.core.Note.id");
        object = msg->mutable_id();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // .claros.common.core.ClarosDateTime timeStamp = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 34) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::claros::common::core::ClarosDateTime::_InternalParse;
        object = msg->mutable_timestamp();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // string userId = 5;
      case 5: {
        if (static_cast<::google::protobuf::uint8>(tag) != 42) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("claros.common.core.Note.userId");
        object = msg->mutable_userid();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // string text = 6;
      case 6: {
        if (static_cast<::google::protobuf::uint8>(tag) != 50) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("claros.common.core.Note.text");
        object = msg->mutable_text();
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
bool Note::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:claros.common.core.Note)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), static_cast<int>(this->id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "claros.common.core.Note.id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .claros.common.core.ClarosDateTime timeStamp = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (34 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_timestamp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string userId = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (42 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_userid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->userid().data(), static_cast<int>(this->userid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "claros.common.core.Note.userId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string text = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (50 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->text().data(), static_cast<int>(this->text().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "claros.common.core.Note.text"));
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
  // @@protoc_insertion_point(parse_success:claros.common.core.Note)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:claros.common.core.Note)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Note::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:claros.common.core.Note)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "claros.common.core.Note.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // .claros.common.core.ClarosDateTime timeStamp = 4;
  if (this->has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, HasBitSetters::timestamp(this), output);
  }

  // string userId = 5;
  if (this->userid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->userid().data(), static_cast<int>(this->userid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "claros.common.core.Note.userId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->userid(), output);
  }

  // string text = 6;
  if (this->text().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->text().data(), static_cast<int>(this->text().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "claros.common.core.Note.text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->text(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:claros.common.core.Note)
}

::google::protobuf::uint8* Note::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:claros.common.core.Note)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "claros.common.core.Note.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // .claros.common.core.ClarosDateTime timeStamp = 4;
  if (this->has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, HasBitSetters::timestamp(this), target);
  }

  // string userId = 5;
  if (this->userid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->userid().data(), static_cast<int>(this->userid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "claros.common.core.Note.userId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->userid(), target);
  }

  // string text = 6;
  if (this->text().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->text().data(), static_cast<int>(this->text().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "claros.common.core.Note.text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->text(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:claros.common.core.Note)
  return target;
}

size_t Note::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:claros.common.core.Note)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  // string userId = 5;
  if (this->userid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->userid());
  }

  // string text = 6;
  if (this->text().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->text());
  }

  // .claros.common.core.ClarosDateTime timeStamp = 4;
  if (this->has_timestamp()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *timestamp_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Note::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:claros.common.core.Note)
  GOOGLE_DCHECK_NE(&from, this);
  const Note* source =
      ::google::protobuf::DynamicCastToGenerated<Note>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:claros.common.core.Note)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:claros.common.core.Note)
    MergeFrom(*source);
  }
}

void Note::MergeFrom(const Note& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:claros.common.core.Note)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.userid().size() > 0) {

    userid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.userid_);
  }
  if (from.text().size() > 0) {

    text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  if (from.has_timestamp()) {
    mutable_timestamp()->::claros::common::core::ClarosDateTime::MergeFrom(from.timestamp());
  }
}

void Note::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:claros.common.core.Note)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Note::CopyFrom(const Note& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:claros.common.core.Note)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Note::IsInitialized() const {
  return true;
}

void Note::Swap(Note* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Note::InternalSwap(Note* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  id_.Swap(&other->id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  userid_.Swap(&other->userid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  text_.Swap(&other->text_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(timestamp_, other->timestamp_);
}

::google::protobuf::Metadata Note::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_claros_5fcommon_5fcore_5fnote_2eproto);
  return ::file_level_metadata_claros_5fcommon_5fcore_5fnote_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace core
}  // namespace common
}  // namespace claros
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::claros::common::core::Note* Arena::CreateMaybeMessage< ::claros::common::core::Note >(Arena* arena) {
  return Arena::CreateInternal< ::claros::common::core::Note >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>