# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_computation_computation.proto

require 'google/protobuf'

require 'claros_common_computation_variable_pb'
require 'claros_common_computation_expressionline_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_common_computation_computation.proto", :syntax => :proto3) do
    add_message "claros.common.computation.Computation" do
      optional :i18nKey, :string, 1
      optional :name, :string, 2
      optional :description, :string, 3
      repeated :inputVariables, :message, 4, "claros.common.computation.Variable"
      repeated :outputVariables, :message, 5, "claros.common.computation.Variable"
      repeated :expressionLines, :message, 6, "claros.common.computation.ExpressionLine"
      optional :isActive, :bool, 7
      optional :isValid, :bool, 8
      oneof :binding do
        optional :ledgerId, :string, 9
        optional :formId, :string, 10
      end
    end
  end
end

module Claros
  module Common
    module Computation
      Computation = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.common.computation.Computation").msgclass
    end
  end
end
