// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_instrument_measurement_data.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace claros.instrument
{

    [global::ProtoBuf.ProtoContract()]
    public partial class InstrumentMeasurementData : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1)]
        public global::claros.common.DateTime measurementDateTime { get; set; }

        [global::ProtoBuf.ProtoMember(2)]
        public global::System.Collections.Generic.List<InstrumentMeasurement> instrumentMeasurements { get; } = new global::System.Collections.Generic.List<InstrumentMeasurement>();

        [global::ProtoBuf.ProtoContract()]
        public partial class InstrumentMeasurement : global::ProtoBuf.IExtensible
        {
            private global::ProtoBuf.IExtension __pbn__extensionData;
            global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
                => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

            [global::ProtoBuf.ProtoMember(1)]
            [global::System.ComponentModel.DefaultValue("")]
            public string InstrumentMeasurementId { get; set; } = "";

            [global::ProtoBuf.ProtoMember(2, Name = @"channel")]
            public int Channel { get; set; }

            [global::ProtoBuf.ProtoMember(3)]
            [global::System.ComponentModel.DefaultValue("")]
            public string fusionId { get; set; } = "";

            [global::ProtoBuf.ProtoMember(4, Name = @"measurement")]
            public global::claros.common.MeasurementData Measurement { get; set; }

            [global::ProtoBuf.ProtoMember(5)]
            public InstrumentMeasurementData supportingMeasurements { get; set; }

            [global::ProtoBuf.ProtoMember(6, Name = @"gis")]
            public global::claros.common.gis.Gis Gis { get; set; }

            [global::ProtoBuf.ProtoMember(7)]
            public MeasurementDataExtended measurementDataExtended { get; set; }

            [global::ProtoBuf.ProtoMember(8)]
            public EventData measurementEventData { get; set; }

        }

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
