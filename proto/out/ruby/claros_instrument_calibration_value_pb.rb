# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_instrument_calibration_value.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_instrument_calibration_value.proto", :syntax => :proto3) do
    add_message "claros.instrument.CalibrationValue" do
      optional :value, :float, 1
      optional :unit, :uint32, 2
      optional :chemicalForm, :uint32, 3
    end
  end
end

module Claros
  module Instrument
    CalibrationValue = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.instrument.CalibrationValue").msgclass
  end
end