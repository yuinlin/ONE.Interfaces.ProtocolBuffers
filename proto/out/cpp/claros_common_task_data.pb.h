// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_task_data.proto

#ifndef PROTOBUF_INCLUDED_claros_5fcommon_5ftask_5fdata_2eproto
#define PROTOBUF_INCLUDED_claros_5fcommon_5ftask_5fdata_2eproto

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
#include "claros_common_task_definition_binding_instrument_maintenance.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_claros_5fcommon_5ftask_5fdata_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_claros_5fcommon_5ftask_5fdata_2eproto {
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
void AddDescriptors_claros_5fcommon_5ftask_5fdata_2eproto();
namespace claros {
namespace common {
namespace task {
class TaskData;
class TaskDataDefaultTypeInternal;
extern TaskDataDefaultTypeInternal _TaskData_default_instance_;
}  // namespace task
}  // namespace common
}  // namespace claros
namespace google {
namespace protobuf {
template<> ::claros::common::task::TaskData* Arena::CreateMaybeMessage<::claros::common::task::TaskData>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace claros {
namespace common {
namespace task {

// ===================================================================

class TaskData :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:claros.common.task.TaskData) */ {
 public:
  TaskData();
  virtual ~TaskData();

  TaskData(const TaskData& from);

  inline TaskData& operator=(const TaskData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TaskData(TaskData&& from) noexcept
    : TaskData() {
    *this = ::std::move(from);
  }

  inline TaskData& operator=(TaskData&& from) noexcept {
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
  static const TaskData& default_instance();

  enum BindingCase {
    kBindingInstrumentMaintenance = 1,
    BINDING_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TaskData* internal_default_instance() {
    return reinterpret_cast<const TaskData*>(
               &_TaskData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TaskData* other);
  friend void swap(TaskData& a, TaskData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TaskData* New() const final {
    return CreateMaybeMessage<TaskData>(nullptr);
  }

  TaskData* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TaskData>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TaskData& from);
  void MergeFrom(const TaskData& from);
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
  void InternalSwap(TaskData* other);
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

  // .claros.common.task.BindingInstrumentMaintenance bindingInstrumentMaintenance = 1;
  bool has_bindinginstrumentmaintenance() const;
  void clear_bindinginstrumentmaintenance();
  static const int kBindingInstrumentMaintenanceFieldNumber = 1;
  const ::claros::common::task::BindingInstrumentMaintenance& bindinginstrumentmaintenance() const;
  ::claros::common::task::BindingInstrumentMaintenance* release_bindinginstrumentmaintenance();
  ::claros::common::task::BindingInstrumentMaintenance* mutable_bindinginstrumentmaintenance();
  void set_allocated_bindinginstrumentmaintenance(::claros::common::task::BindingInstrumentMaintenance* bindinginstrumentmaintenance);

  void clear_binding();
  BindingCase binding_case() const;
  // @@protoc_insertion_point(class_scope:claros.common.task.TaskData)
 private:
  class HasBitSetters;
  void set_has_bindinginstrumentmaintenance();

  inline bool has_binding() const;
  inline void clear_has_binding();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  union BindingUnion {
    BindingUnion() {}
    ::claros::common::task::BindingInstrumentMaintenance* bindinginstrumentmaintenance_;
  } binding_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::TableStruct_claros_5fcommon_5ftask_5fdata_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TaskData

// .claros.common.task.BindingInstrumentMaintenance bindingInstrumentMaintenance = 1;
inline bool TaskData::has_bindinginstrumentmaintenance() const {
  return binding_case() == kBindingInstrumentMaintenance;
}
inline void TaskData::set_has_bindinginstrumentmaintenance() {
  _oneof_case_[0] = kBindingInstrumentMaintenance;
}
inline ::claros::common::task::BindingInstrumentMaintenance* TaskData::release_bindinginstrumentmaintenance() {
  // @@protoc_insertion_point(field_release:claros.common.task.TaskData.bindingInstrumentMaintenance)
  if (has_bindinginstrumentmaintenance()) {
    clear_has_binding();
      ::claros::common::task::BindingInstrumentMaintenance* temp = binding_.bindinginstrumentmaintenance_;
    binding_.bindinginstrumentmaintenance_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::claros::common::task::BindingInstrumentMaintenance& TaskData::bindinginstrumentmaintenance() const {
  // @@protoc_insertion_point(field_get:claros.common.task.TaskData.bindingInstrumentMaintenance)
  return has_bindinginstrumentmaintenance()
      ? *binding_.bindinginstrumentmaintenance_
      : *reinterpret_cast< ::claros::common::task::BindingInstrumentMaintenance*>(&::claros::common::task::_BindingInstrumentMaintenance_default_instance_);
}
inline ::claros::common::task::BindingInstrumentMaintenance* TaskData::mutable_bindinginstrumentmaintenance() {
  if (!has_bindinginstrumentmaintenance()) {
    clear_binding();
    set_has_bindinginstrumentmaintenance();
    binding_.bindinginstrumentmaintenance_ = CreateMaybeMessage< ::claros::common::task::BindingInstrumentMaintenance >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:claros.common.task.TaskData.bindingInstrumentMaintenance)
  return binding_.bindinginstrumentmaintenance_;
}

inline bool TaskData::has_binding() const {
  return binding_case() != BINDING_NOT_SET;
}
inline void TaskData::clear_has_binding() {
  _oneof_case_[0] = BINDING_NOT_SET;
}
inline TaskData::BindingCase TaskData::binding_case() const {
  return TaskData::BindingCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace task
}  // namespace common
}  // namespace claros

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_claros_5fcommon_5ftask_5fdata_2eproto