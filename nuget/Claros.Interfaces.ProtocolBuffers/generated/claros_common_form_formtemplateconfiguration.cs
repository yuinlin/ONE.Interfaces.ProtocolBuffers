// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_common_form_formtemplateconfiguration.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace Claros.Common.Form
{

    [global::ProtoBuf.ProtoContract()]
    public partial class FormTemplateConfiguration : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1)]
        public FormTemplateType formTemplateType { get; set; }

        [global::ProtoBuf.ProtoMember(2, Name = @"recurrence")]
        public global::Claros.Common.Recurrence.Recurrence Recurrence { get; set; }

        [global::ProtoBuf.ProtoMember(3)]
        public FormLayout formLayout { get; set; }

        [global::ProtoBuf.ProtoMember(4)]
        public global::System.Collections.Generic.List<FormFieldDefinition> formFieldDefinitions { get; } = new global::System.Collections.Generic.List<FormFieldDefinition>();

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192