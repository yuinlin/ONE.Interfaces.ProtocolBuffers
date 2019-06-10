# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_configuration_configuration.proto

require 'google/protobuf'

require 'claros_common_core_clarosdatetime_pb'
require 'claros_common_configuration_entity_type_pb'
require 'claros_common_configuration_rights_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_common_configuration_configuration.proto", :syntax => :proto3) do
    add_message "claros.common.configuration.Configuration" do
      optional :id, :string, 1
      optional :createdById, :string, 2
      optional :createdOn, :message, 3, "claros.common.core.ClarosDateTime"
      optional :modifiedById, :string, 4
      optional :modifiedOn, :message, 5, "claros.common.core.ClarosDateTime"
      optional :configurationData, :string, 6
      optional :entityTypeId, :enum, 7, "claros.common.configuration.EntityType"
      optional :filterById, :string, 8
      optional :tenantId, :string, 9
      optional :ownerId, :string, 10
      optional :public, :bool, 11
      optional :version, :uint32, 12
      map :privilege, :string, :message, 13, "claros.common.configuration.Rights"
    end
  end
end

module Claros
  module Common
    module Configuration
      Configuration = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.common.configuration.Configuration").msgclass
    end
  end
end
