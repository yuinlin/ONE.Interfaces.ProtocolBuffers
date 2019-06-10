# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_operations_spreadsheet_worksheet.proto

require 'google/protobuf'

require 'claros_operations_spreadsheet_worksheet_type_pb'
require 'claros_operations_spreadsheet_worksheet_definition_pb'
require 'claros_operations_spreadsheet_worksheet_row_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_operations_spreadsheet_worksheet.proto", :syntax => :proto3) do
    add_message "claros.operations.spreadsheet.Worksheet" do
      optional :worksheetType, :enum, 1, "claros.operations.spreadsheet.WorksheetType"
      repeated :worksheetDefinitions, :message, 2, "claros.operations.spreadsheet.WorksheetDefinition"
      repeated :rows, :message, 3, "claros.operations.spreadsheet.Row"
    end
  end
end

module Claros
  module Operations
    module Spreadsheet
      Worksheet = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.operations.spreadsheet.Worksheet").msgclass
    end
  end
end