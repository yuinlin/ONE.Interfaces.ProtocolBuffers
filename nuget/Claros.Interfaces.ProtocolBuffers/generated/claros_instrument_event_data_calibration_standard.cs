// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_instrument_event_data_calibration_standard.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace Claros.Instrument.Event
{

    [global::ProtoBuf.ProtoContract()]
    public partial class EventDataCalibrationStandard : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1)]
        public EventDataCalibrationValue knownValue { get; set; }

        [global::ProtoBuf.ProtoMember(2)]
        public EventDataCalibrationValue measuredValue { get; set; }

        [global::ProtoBuf.ProtoMember(4)]
        public global::System.Collections.Generic.List<EventDataCalibrationValue> secondaryValues { get; } = new global::System.Collections.Generic.List<EventDataCalibrationValue>();

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192