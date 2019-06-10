# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_core_parameter.proto

require 'google/protobuf'

require 'claros_common_core_clarosdatetime_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_common_core_parameter.proto", :syntax => :proto3) do
    add_message "claros.common.core.Parameter" do
      optional :Id, :string, 1
      optional :IntId, :uint32, 2
      optional :i18nKey, :string, 3
      optional :parameterTypeId, :string, 4
      optional :quantityTypeId, :string, 5
      optional :description, :string, 6
      optional :tenantId, :string, 7
      optional :createdById, :string, 8
      optional :createdOn, :message, 9, "claros.common.core.ClarosDateTime"
      optional :modifiedById, :string, 10
      optional :modifiedOn, :message, 11, "claros.common.core.ClarosDateTime"
    end
  end
end

module Claros
  module Common
    module Core
      Parameter = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.common.core.Parameter").msgclass
    end
  end
end
