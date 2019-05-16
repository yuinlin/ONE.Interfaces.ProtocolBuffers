// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_common_form_form.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace claros.common.form
{

    [global::ProtoBuf.ProtoContract()]
    public partial class Form : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1, Name = @"id")]
        [global::System.ComponentModel.DefaultValue("")]
        public string Id { get; set; } = "";

        [global::ProtoBuf.ProtoMember(2)]
        [global::System.ComponentModel.DefaultValue("")]
        public string templateId { get; set; } = "";

        [global::ProtoBuf.ProtoMember(3)]
        public uint templateVersion { get; set; }

        [global::ProtoBuf.ProtoMember(4)]
        public global::claros.common.DateTime startTime { get; set; }

        [global::ProtoBuf.ProtoMember(5)]
        public global::claros.common.DateTime endTime { get; set; }

        [global::ProtoBuf.ProtoMember(6, Name = @"name")]
        [global::System.ComponentModel.DefaultValue("")]
        public string Name { get; set; } = "";

        [global::ProtoBuf.ProtoMember(7)]
        public global::System.Collections.Generic.List<FormField> templateFormFields { get; } = new global::System.Collections.Generic.List<FormField>();

        [global::ProtoBuf.ProtoMember(8)]
        public global::System.Collections.Generic.List<FormField> adhocFormFields { get; } = new global::System.Collections.Generic.List<FormField>();

        [global::ProtoBuf.ProtoMember(9)]
        public global::System.Collections.Generic.List<string> contributorIds { get; } = new global::System.Collections.Generic.List<string>();

        [global::ProtoBuf.ProtoMember(10, Name = @"notes")]
        public global::System.Collections.Generic.List<global::claros.common.Note> Notes { get; } = new global::System.Collections.Generic.List<global::claros.common.Note>();

        [global::ProtoBuf.ProtoMember(11)]
        public global::System.Collections.Generic.List<FormAuditEvent> auditEvents { get; } = new global::System.Collections.Generic.List<FormAuditEvent>();

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
