// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_operations_spreadsheet_worksheet_celldata_binding.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace claros.protogen.operations.spreadsheet
{

    [global::ProtoBuf.ProtoContract()]
    public partial class CellDataBinding : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(7)]
        public global::claros.protogen.instrument.InstrumentMeasurementBinding instrumentMeasurementBinding
        {
            get { return __pbn__binding.Is(7) ? ((global::claros.protogen.instrument.InstrumentMeasurementBinding)__pbn__binding.Object) : default; }
            set { __pbn__binding = new global::ProtoBuf.DiscriminatedUnionObject(7, value); }
        }
        public bool ShouldSerializeinstrumentMeasurementBinding() => __pbn__binding.Is(7);
        public void ResetinstrumentMeasurementBinding() => global::ProtoBuf.DiscriminatedUnionObject.Reset(ref __pbn__binding, 7);

        private global::ProtoBuf.DiscriminatedUnionObject __pbn__binding;

        [global::ProtoBuf.ProtoMember(8)]
        public global::claros.protogen.common.computation.ComputationBinding computationBinding
        {
            get { return __pbn__binding.Is(8) ? ((global::claros.protogen.common.computation.ComputationBinding)__pbn__binding.Object) : default; }
            set { __pbn__binding = new global::ProtoBuf.DiscriminatedUnionObject(8, value); }
        }
        public bool ShouldSerializecomputationBinding() => __pbn__binding.Is(8);
        public void ResetcomputationBinding() => global::ProtoBuf.DiscriminatedUnionObject.Reset(ref __pbn__binding, 8);

        [global::ProtoBuf.ProtoMember(9)]
        public global::claros.protogen.common.form.FormBinding formBinding
        {
            get { return __pbn__binding.Is(9) ? ((global::claros.protogen.common.form.FormBinding)__pbn__binding.Object) : default; }
            set { __pbn__binding = new global::ProtoBuf.DiscriminatedUnionObject(9, value); }
        }
        public bool ShouldSerializeformBinding() => __pbn__binding.Is(9);
        public void ResetformBinding() => global::ProtoBuf.DiscriminatedUnionObject.Reset(ref __pbn__binding, 9);

        [global::ProtoBuf.ProtoMember(10)]
        public SpreadsheetBinding spreadsheetBinding
        {
            get { return __pbn__binding.Is(10) ? ((SpreadsheetBinding)__pbn__binding.Object) : default; }
            set { __pbn__binding = new global::ProtoBuf.DiscriminatedUnionObject(10, value); }
        }
        public bool ShouldSerializespreadsheetBinding() => __pbn__binding.Is(10);
        public void ResetspreadsheetBinding() => global::ProtoBuf.DiscriminatedUnionObject.Reset(ref __pbn__binding, 10);

        [global::ProtoBuf.ProtoMember(11)]
        public global::claros.protogen.instrument.InstrumentMeasurementFieldBinding fieldInstrumentMeasurementBinding
        {
            get { return __pbn__binding.Is(11) ? ((global::claros.protogen.instrument.InstrumentMeasurementFieldBinding)__pbn__binding.Object) : default; }
            set { __pbn__binding = new global::ProtoBuf.DiscriminatedUnionObject(11, value); }
        }
        public bool ShouldSerializefieldInstrumentMeasurementBinding() => __pbn__binding.Is(11);
        public void ResetfieldInstrumentMeasurementBinding() => global::ProtoBuf.DiscriminatedUnionObject.Reset(ref __pbn__binding, 11);

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192