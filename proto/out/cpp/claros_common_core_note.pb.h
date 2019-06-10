// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_note.proto

#ifndef PROTOBUF_INCLUDED_claros_5fcommon_5fcore_5fnote_2eproto
#define PROTOBUF_INCLUDED_claros_5fcommon_5fcore_5fnote_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_claros_5fcommon_5fcore_5fnote_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_claros_5fcommon_5fcore_5fnote_2eproto {
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
void AddDescriptors_claros_5fcommon_5fcore_5fnote_2eproto();
namespace claros {
namespace common {
namespace core {
class Note;
class NoteDefaultTypeInternal;
extern NoteDefaultTypeInternal _Note_default_instance_;
}  // namespace core
}  // namespace common
}  // namespace claros
namespace google {
namespace protobuf {
template<> ::claros::common::core::Note* Arena::CreateMaybeMessage<::claros::common::core::Note>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace claros {
namespace common {
namespace core {

// ===================================================================

class Note :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:claros.common.core.Note) */ {
 public:
  Note();
  virtual ~Note();

  Note(const Note& from);

  inline Note& operator=(const Note& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Note(Note&& from) noexcept
    : Note() {
    *this = ::std::move(from);
  }

  inline Note& operator=(Note&& from) noexcept {
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
  static const Note& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Note* internal_default_instance() {
    return reinterpret_cast<const Note*>(
               &_Note_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Note* other);
  friend void swap(Note& a, Note& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Note* New() const final {
    return CreateMaybeMessage<Note>(nullptr);
  }

  Note* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Note>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Note& from);
  void MergeFrom(const Note& from);
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
  void InternalSwap(Note* other);
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

  // string id = 1;
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

  // string userId = 5;
  void clear_userid();
  static const int kUserIdFieldNumber = 5;
  const ::std::string& userid() const;
  void set_userid(const ::std::string& value);
  #if LANG_CXX11
  void set_userid(::std::string&& value);
  #endif
  void set_userid(const char* value);
  void set_userid(const char* value, size_t size);
  ::std::string* mutable_userid();
  ::std::string* release_userid();
  void set_allocated_userid(::std::string* userid);

  // string text = 6;
  void clear_text();
  static const int kTextFieldNumber = 6;
  const ::std::string& text() const;
  void set_text(const ::std::string& value);
  #if LANG_CXX11
  void set_text(::std::string&& value);
  #endif
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  ::std::string* mutable_text();
  ::std::string* release_text();
  void set_allocated_text(::std::string* text);

  // .claros.common.core.ClarosDateTime timeStamp = 4;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimeStampFieldNumber = 4;
  const ::claros::common::core::ClarosDateTime& timestamp() const;
  ::claros::common::core::ClarosDateTime* release_timestamp();
  ::claros::common::core::ClarosDateTime* mutable_timestamp();
  void set_allocated_timestamp(::claros::common::core::ClarosDateTime* timestamp);

  // @@protoc_insertion_point(class_scope:claros.common.core.Note)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr userid_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  ::claros::common::core::ClarosDateTime* timestamp_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_claros_5fcommon_5fcore_5fnote_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Note

// string id = 1;
inline void Note::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Note::id() const {
  // @@protoc_insertion_point(field_get:claros.common.core.Note.id)
  return id_.GetNoArena();
}
inline void Note::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.core.Note.id)
}
#if LANG_CXX11
inline void Note::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.core.Note.id)
}
#endif
inline void Note::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.core.Note.id)
}
inline void Note::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.core.Note.id)
}
inline ::std::string* Note::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.core.Note.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Note::release_id() {
  // @@protoc_insertion_point(field_release:claros.common.core.Note.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Note::set_allocated_id(::std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Note.id)
}

// .claros.common.core.ClarosDateTime timeStamp = 4;
inline bool Note::has_timestamp() const {
  return this != internal_default_instance() && timestamp_ != nullptr;
}
inline const ::claros::common::core::ClarosDateTime& Note::timestamp() const {
  const ::claros::common::core::ClarosDateTime* p = timestamp_;
  // @@protoc_insertion_point(field_get:claros.common.core.Note.timeStamp)
  return p != nullptr ? *p : *reinterpret_cast<const ::claros::common::core::ClarosDateTime*>(
      &::claros::common::core::_ClarosDateTime_default_instance_);
}
inline ::claros::common::core::ClarosDateTime* Note::release_timestamp() {
  // @@protoc_insertion_point(field_release:claros.common.core.Note.timeStamp)
  
  ::claros::common::core::ClarosDateTime* temp = timestamp_;
  timestamp_ = nullptr;
  return temp;
}
inline ::claros::common::core::ClarosDateTime* Note::mutable_timestamp() {
  
  if (timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<::claros::common::core::ClarosDateTime>(GetArenaNoVirtual());
    timestamp_ = p;
  }
  // @@protoc_insertion_point(field_mutable:claros.common.core.Note.timeStamp)
  return timestamp_;
}
inline void Note::set_allocated_timestamp(::claros::common::core::ClarosDateTime* timestamp) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(timestamp_);
  }
  if (timestamp) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      timestamp = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    
  } else {
    
  }
  timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Note.timeStamp)
}

// string userId = 5;
inline void Note::clear_userid() {
  userid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Note::userid() const {
  // @@protoc_insertion_point(field_get:claros.common.core.Note.userId)
  return userid_.GetNoArena();
}
inline void Note::set_userid(const ::std::string& value) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.core.Note.userId)
}
#if LANG_CXX11
inline void Note::set_userid(::std::string&& value) {
  
  userid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.core.Note.userId)
}
#endif
inline void Note::set_userid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.core.Note.userId)
}
inline void Note::set_userid(const char* value, size_t size) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.core.Note.userId)
}
inline ::std::string* Note::mutable_userid() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.core.Note.userId)
  return userid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Note::release_userid() {
  // @@protoc_insertion_point(field_release:claros.common.core.Note.userId)
  
  return userid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Note::set_allocated_userid(::std::string* userid) {
  if (userid != nullptr) {
    
  } else {
    
  }
  userid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), userid);
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Note.userId)
}

// string text = 6;
inline void Note::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Note::text() const {
  // @@protoc_insertion_point(field_get:claros.common.core.Note.text)
  return text_.GetNoArena();
}
inline void Note::set_text(const ::std::string& value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:claros.common.core.Note.text)
}
#if LANG_CXX11
inline void Note::set_text(::std::string&& value) {
  
  text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:claros.common.core.Note.text)
}
#endif
inline void Note::set_text(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:claros.common.core.Note.text)
}
inline void Note::set_text(const char* value, size_t size) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:claros.common.core.Note.text)
}
inline ::std::string* Note::mutable_text() {
  
  // @@protoc_insertion_point(field_mutable:claros.common.core.Note.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Note::release_text() {
  // @@protoc_insertion_point(field_release:claros.common.core.Note.text)
  
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Note::set_allocated_text(::std::string* text) {
  if (text != nullptr) {
    
  } else {
    
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:claros.common.core.Note.text)
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
#endif  // PROTOBUF_INCLUDED_claros_5fcommon_5fcore_5fnote_2eproto
