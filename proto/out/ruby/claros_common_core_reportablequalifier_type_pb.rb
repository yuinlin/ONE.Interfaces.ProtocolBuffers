# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_core_reportablequalifier_type.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_common_core_reportablequalifier_type.proto", :syntax => :proto3) do
    add_enum "claros.common.core.ReportableQualifierType" do
      value :RQ_UNKNOWN, 0
      value :RQ_NONDETECT, 1
      value :RQ_ESTIMATE, 2
      value :RQ_DETECTNONQUALIFIABLE, 3
      value :RQ_GREATERTHAN, 4
      value :RQ_LESSTHAN, 5
      value :RQ_TOO_NUMEROUS_TO_COUNT, 6
    end
  end
end

module Claros
  module Common
    module Core
      ReportableQualifierType = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.common.core.ReportableQualifierType").enummodule
    end
  end
end