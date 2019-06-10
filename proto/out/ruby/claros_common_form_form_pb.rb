# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_form_form.proto

require 'google/protobuf'

require 'claros_common_core_timewindow_pb'
require 'claros_common_core_note_pb'
require 'claros_common_core_auditevent_pb'
require 'claros_common_form_formfield_pb'
require 'claros_common_form_formtemplate_pb'
require 'claros_common_form_formfield_definition_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_common_form_form.proto", :syntax => :proto3) do
    add_message "claros.common.form.Form" do
      optional :id, :string, 1
      optional :name, :string, 2
      optional :timeWindow, :message, 3, "claros.common.core.TimeWindow"
      optional :formTemplate, :message, 4, "claros.common.form.FormTemplate"
      repeated :adHocFormFieldDefinitions, :message, 5, "claros.common.form.FormFieldDefinition"
      repeated :templateFormFields, :message, 6, "claros.common.form.FormField"
      repeated :adhocFormFields, :message, 7, "claros.common.form.FormField"
      repeated :notes, :message, 8, "claros.common.core.Note"
      repeated :auditEvents, :message, 99, "claros.common.core.AuditEvent"
    end
  end
end

module Claros
  module Common
    module Form
      Form = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.common.form.Form").msgclass
    end
  end
end