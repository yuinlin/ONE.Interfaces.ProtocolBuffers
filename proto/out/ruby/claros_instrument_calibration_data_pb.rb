# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_instrument_calibration_data.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_instrument_calibration_data.proto", :syntax => :proto3) do
    add_message "claros.instrument.CalibrationData" do
    end
    add_message "claros.instrument.CalibrationData.Calibration" do
      optional :ID, :string, 1
      optional :userID, :string, 2
      optional :time, :uint64, 3
      optional :status, :uint32, 4
      optional :offsetUnits, :uint32, 5
      optional :slopeUnits, :uint32, 6
      optional :slope, :float, 7
      optional :slopeAux, :float, 8
      optional :offset, :float, 9
      optional :r2, :float, 10
      repeated :calibrationStandard, :message, 11, "claros.instrument.CalibrationData.CalibrationStandard"
    end
    add_message "claros.instrument.CalibrationData.CalibrationStandard" do
      optional :knownValue, :message, 1, "claros.instrument.CalibrationData.Value"
      optional :measuredValue, :message, 2, "claros.instrument.CalibrationData.Value"
      repeated :secondaryValue, :message, 4, "claros.instrument.CalibrationData.Value"
    end
    add_message "claros.instrument.CalibrationData.SecondaryValue" do
      repeated :value, :message, 1, "claros.instrument.CalibrationData.Value"
    end
    add_message "claros.instrument.CalibrationData.Value" do
      optional :value, :float, 1
      optional :unit, :uint32, 2
      optional :chemicalForm, :uint32, 3
    end
  end
end

module Claros
  module Instrument
    CalibrationData = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.instrument.CalibrationData").msgclass
    CalibrationData::Calibration = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.instrument.CalibrationData.Calibration").msgclass
    CalibrationData::CalibrationStandard = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.instrument.CalibrationData.CalibrationStandard").msgclass
    CalibrationData::SecondaryValue = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.instrument.CalibrationData.SecondaryValue").msgclass
    CalibrationData::Value = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.instrument.CalibrationData.Value").msgclass
  end
end
