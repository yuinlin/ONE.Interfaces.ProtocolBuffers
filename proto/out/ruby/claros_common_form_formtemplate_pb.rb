# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_form_formtemplate.proto

require 'google/protobuf'

require 'claros_common_form_formtemplateconfiguration_pb'
require 'claros_common_configuration_rights_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("claros_common_form_formtemplate.proto", :syntax => :proto3) do
    add_message "claros.common.form.FormTemplate" do
      optional :id, :string, 1
      optional :ownerId, :string, 2
      optional :public, :bool, 3
      optional :version, :uint32, 4
      map :privileges, :string, :message, 5, "claros.common.configuration.Rights"
      optional :formTemplateConfiguration, :message, 6, "claros.common.form.FormTemplateConfiguration"
    end
  end
end

module Claros
  module Common
    module Form
      FormTemplate = Google::Protobuf::DescriptorPool.generated_pool.lookup("claros.common.form.FormTemplate").msgclass
    end
  end
end