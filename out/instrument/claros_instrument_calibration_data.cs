// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_instrument_calibration_data.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace claros.instrument
{

    [global::ProtoBuf.ProtoContract()]
    public partial class CalibrationData : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoContract()]
        public partial class Calibration : global::ProtoBuf.IExtensible
        {
            private global::ProtoBuf.IExtension __pbn__extensionData;
            global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
                => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

            [global::ProtoBuf.ProtoMember(1, Name = @"ID")]
            [global::System.ComponentModel.DefaultValue("")]
            public string Id { get; set; } = "";

            [global::ProtoBuf.ProtoMember(2)]
            [global::System.ComponentModel.DefaultValue("")]
            public string userID { get; set; } = "";

            [global::ProtoBuf.ProtoMember(3, Name = @"time")]
            public ulong Time { get; set; }

            [global::ProtoBuf.ProtoMember(4, Name = @"status")]
            public uint Status { get; set; }

            [global::ProtoBuf.ProtoMember(5)]
            public uint offsetUnits { get; set; }

            [global::ProtoBuf.ProtoMember(6)]
            public uint slopeUnits { get; set; }

            [global::ProtoBuf.ProtoMember(7, Name = @"slope")]
            public float Slope { get; set; }

            [global::ProtoBuf.ProtoMember(8)]
            public float slopeAux { get; set; }

            [global::ProtoBuf.ProtoMember(9, Name = @"offset")]
            public float Offset { get; set; }

            [global::ProtoBuf.ProtoMember(10, Name = @"r2")]
            public float R2 { get; set; }

            [global::ProtoBuf.ProtoMember(11, Name = @"calibrationStandard")]
            public global::System.Collections.Generic.List<CalibrationData.CalibrationStandard> calibrationStandards { get; } = new global::System.Collections.Generic.List<CalibrationData.CalibrationStandard>();

        }

        [global::ProtoBuf.ProtoContract()]
        public partial class CalibrationStandard : global::ProtoBuf.IExtensible
        {
            private global::ProtoBuf.IExtension __pbn__extensionData;
            global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
                => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

            [global::ProtoBuf.ProtoMember(1)]
            public CalibrationData.Value knownValue { get; set; }

            [global::ProtoBuf.ProtoMember(2)]
            public CalibrationData.Value measuredValue { get; set; }

            [global::ProtoBuf.ProtoMember(4, Name = @"secondaryValue")]
            public global::System.Collections.Generic.List<CalibrationData.Value> secondaryValues { get; } = new global::System.Collections.Generic.List<CalibrationData.Value>();

        }

        [global::ProtoBuf.ProtoContract()]
        public partial class SecondaryValue : global::ProtoBuf.IExtensible
        {
            private global::ProtoBuf.IExtension __pbn__extensionData;
            global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
                => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

            [global::ProtoBuf.ProtoMember(1, Name = @"value")]
            public global::System.Collections.Generic.List<CalibrationData.Value> Values { get; } = new global::System.Collections.Generic.List<CalibrationData.Value>();

        }

        [global::ProtoBuf.ProtoContract()]
        public partial class Value : global::ProtoBuf.IExtensible
        {
            private global::ProtoBuf.IExtension __pbn__extensionData;
            global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
                => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

            [global::ProtoBuf.ProtoMember(1)]
            public float value { get; set; }

            [global::ProtoBuf.ProtoMember(2, Name = @"unit")]
            public uint Unit { get; set; }

            [global::ProtoBuf.ProtoMember(3)]
            public uint chemicalForm { get; set; }

        }

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
