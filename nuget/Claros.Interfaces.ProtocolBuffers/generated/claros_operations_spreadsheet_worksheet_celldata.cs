// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_operations_spreadsheet_worksheet_celldata.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace Claros.Operations.Spreadsheet
{

    [global::ProtoBuf.ProtoContract()]
    public partial class CellData : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1, Name = @"value")]
        public double Value { get; set; }

        [global::ProtoBuf.ProtoMember(2)]
        [global::System.ComponentModel.DefaultValue("")]
        public string stringValue { get; set; } = "";

        [global::ProtoBuf.ProtoMember(3)]
        public bool isLocked { get; set; }

        [global::ProtoBuf.ProtoMember(4)]
        public uint unitId { get; set; }

        [global::ProtoBuf.ProtoMember(5, Name = @"justification")]
        [global::System.ComponentModel.DefaultValue("")]
        public string Justification { get; set; } = "";

        [global::ProtoBuf.ProtoMember(6)]
        public global::Claros.Common.Core.ReportableQualifier reportableQualifier { get; set; }

        [global::ProtoBuf.ProtoMember(7)]
        public global::System.Collections.Generic.List<CellDataBinding> cellDataBindings { get; } = new global::System.Collections.Generic.List<CellDataBinding>();

        [global::ProtoBuf.ProtoMember(99)]
        public global::Claros.Common.Core.AuditEvent auditEvent { get; set; }

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
