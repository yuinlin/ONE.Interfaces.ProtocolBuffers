# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_operations_spreadsheet_worksheet_index.proto

require 'google/protobuf'

require 'claros_common_core_timewindow_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_operations_spreadsheet_worksheet_index.proto", :syntax => :proto3) do
    add_message "claros.common.form.WorksheetIndex" do
      optional :id, :string, 1
      optional :worksheetVersion, :uint32, 2
      optional :timeWindow, :message, 3, "claros.common.core.TimeWindow"
      optional :utcTimeWindows, :message, 4, "claros.common.core.TimeWindow"
      optional :isInSpeed, :bool, 5
    end
  end
end

module Claros
  module Common
    module Form
      WorksheetIndex = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.common.form.WorksheetIndex").msgclass
    end
  end
end