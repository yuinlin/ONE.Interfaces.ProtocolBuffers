// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_common_recurrence_pattern_weekly.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace claros.common.recurrence
{

    [global::ProtoBuf.ProtoContract()]
    public partial class PatternWeekly : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1)]
        public uint weeklyInterval { get; set; }

        [global::ProtoBuf.ProtoMember(2, Name = @"daysOfWeek", IsPacked = true)]
        public global::System.Collections.Generic.List<global::claros.common.DayType> daysOfWeeks { get; } = new global::System.Collections.Generic.List<global::claros.common.DayType>();

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
