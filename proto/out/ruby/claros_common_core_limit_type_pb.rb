# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_core_limit_type.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_common_core_limit_type.proto", :syntax => :proto3) do
    add_enum "claros.common.core.LimitType" do
      value :L_UNKNOWN, 0
      value :L_HIGHALARM, 1
      value :L_HIGHNEAR, 2
      value :L_LOWNEAR, 3
      value :L_LOWALARM, 4
    end
  end
end

module Claros
  module Common
    module Core
      LimitType = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.common.core.LimitType").enummodule
    end
  end
end