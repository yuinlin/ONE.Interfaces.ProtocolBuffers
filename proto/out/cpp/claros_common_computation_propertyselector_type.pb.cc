// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_computation_propertyselector_type.proto

#include "claros_common_computation_propertyselector_type.pb.h"

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
namespace computation {
}  // namespace computation
}  // namespace common
}  // namespace claros
void InitDefaults_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto() {
}

constexpr ::google::protobuf::Metadata* file_level_metadata_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto = nullptr;
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto[1];
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto = nullptr;
const ::google::protobuf::uint32 TableStruct_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto::offsets[1] = {};
static constexpr ::google::protobuf::internal::MigrationSchema* schemas = nullptr;
static constexpr ::google::protobuf::Message* const* file_default_instances = nullptr;

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto = {
  {}, AddDescriptors_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto, "claros_common_computation_propertyselector_type.proto", schemas,
  file_default_instances, TableStruct_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto::offsets,
  file_level_metadata_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto, 0, file_level_enum_descriptors_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto, file_level_service_descriptors_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto,
};

const char descriptor_table_protodef_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto[] =
  "\n5claros_common_computation_propertysele"
  "ctor_type.proto\022\031claros.common.computati"
  "on*\200\001\n\024PropertySelectorType\022\016\n\nPS_UNKNOW"
  "N\020\000\022\026\n\022PS_MEASUREMENTTIME\020\001\022\024\n\020PS_BEGINL"
  "INETIME\020\002\022\022\n\016PS_ENDLINETIME\020\003\022\026\n\022PS_MEAS"
  "URMENTVALUE\020\004b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto = {
  false, InitDefaults_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto, 
  descriptor_table_protodef_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto,
  "claros_common_computation_propertyselector_type.proto", &assign_descriptors_table_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto, 221,
};

void AddDescriptors_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto = []() { AddDescriptors_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto(); return true; }();
namespace claros {
namespace common {
namespace computation {
const ::google::protobuf::EnumDescriptor* PropertySelectorType_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto);
  return file_level_enum_descriptors_claros_5fcommon_5fcomputation_5fpropertyselector_5ftype_2eproto[0];
}
bool PropertySelectorType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace computation
}  // namespace common
}  // namespace claros
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>