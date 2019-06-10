# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_operations_spreadsheet_worksheet_celldata_binding.proto

require 'google/protobuf'

require 'claros_common_form_binding_pb'
require 'claros_common_computation_binding_pb'
require 'claros_instrument_measurement_binding_pb'
require 'claros_instrument_measurement_field_binding_pb'
require 'claros_operations_spreadsheet_binding_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_operations_spreadsheet_worksheet_celldata_binding.proto", :syntax => :proto3) do
    add_message "claros.operations.spreadsheet.CellDataBinding" do
      oneof :binding do
        optional :instrumentMeasurementBinding, :message, 7, "claros.instrument.InstrumentMeasurementBinding"
        optional :computationBinding, :message, 8, "claros.common.computation.ComputationBinding"
        optional :formBinding, :message, 9, "claros.common.form.FormBinding"
        optional :spreadsheetBinding, :message, 10, "claros.operations.spreadsheet.SpreadsheetBinding"
        optional :fieldInstrumentMeasurementBinding, :message, 11, "claros.instrument.InstrumentMeasurementFieldBinding"
      end
    end
  end
end

module Claros
  module Operations
    module Spreadsheet
      CellDataBinding = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.operations.spreadsheet.CellDataBinding").msgclass
    end
  end
end