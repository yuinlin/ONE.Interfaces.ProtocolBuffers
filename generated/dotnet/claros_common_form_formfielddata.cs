// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_common_form_formfielddata.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace claros.common.form
{

    [global::ProtoBuf.ProtoContract()]
    public partial class FormFieldData : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1, Name = @"cell")]
        public global::claros.operations.spreadsheet.Cell Cell { get; set; }

        [global::ProtoBuf.ProtoMember(2)]
        public global::claros.instrument.InstrumentData instrumentData { get; set; }

        [global::ProtoBuf.ProtoMember(99)]
        public global::claros.common.AuditEvent auditEvent { get; set; }

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
