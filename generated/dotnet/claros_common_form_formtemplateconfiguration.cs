// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_common_form_formtemplateconfiguration.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace claros.common.form
{

    [global::ProtoBuf.ProtoContract()]
    public partial class FormTemplateConfiguration : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1, Name = @"id")]
        [global::System.ComponentModel.DefaultValue("")]
        public string Id { get; set; } = "";

        [global::ProtoBuf.ProtoMember(2)]
        [global::System.ComponentModel.DefaultValue("")]
        public string ownerId { get; set; } = "";

        [global::ProtoBuf.ProtoMember(3, Name = @"public")]
        public bool Public { get; set; }

        [global::ProtoBuf.ProtoMember(4, Name = @"version")]
        public uint Version { get; set; }

        [global::ProtoBuf.ProtoMember(5, Name = @"privileges")]
        public global::System.Collections.Generic.List<global::claros.common.configuration.Privileges> Privileges { get; } = new global::System.Collections.Generic.List<global::claros.common.configuration.Privileges>();

        [global::ProtoBuf.ProtoMember(6)]
        public FormTemplateConfigurationContent formTemplateConfiguraitonContent { get; set; }

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
