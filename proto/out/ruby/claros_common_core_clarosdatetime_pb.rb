# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_core_clarosdatetime.proto

require 'google/protobuf'

require 'claros_common_core_mobiledatetime_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_common_core_clarosdatetime.proto", :syntax => :proto3) do
    add_message "claros.common.core.ClarosDateTime" do
      oneof :clarosDateTime do
        optional :mobileDateTime, :message, 1, "claros.common.core.MobileDateTime"
        optional :jsonDateTime, :string, 2
        optional :ticks, :uint64, 3
      end
    end
  end
end

module Claros
  module Common
    module Core
      ClarosDateTime = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.common.core.ClarosDateTime").msgclass
    end
  end
end