// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_common_form_formfield_definition.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace claros.common.form
{

    [global::ProtoBuf.ProtoContract()]
    public partial class FormFieldDefinition : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1, Name = @"guid")]
        [global::System.ComponentModel.DefaultValue("")]
        public string Guid { get; set; } = "";

        [global::ProtoBuf.ProtoMember(2)]
        public FormDataEntryType formDataEntryType { get; set; }

        [global::ProtoBuf.ProtoMember(3)]
        public bool isDataEntryTypeLocked { get; set; }

        [global::ProtoBuf.ProtoMember(4, Name = @"name")]
        [global::System.ComponentModel.DefaultValue("")]
        public string Name { get; set; } = "";

        [global::ProtoBuf.ProtoMember(11, Name = @"column")]
        public WorksheetColumnUTCFormField Column { get; set; }

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
