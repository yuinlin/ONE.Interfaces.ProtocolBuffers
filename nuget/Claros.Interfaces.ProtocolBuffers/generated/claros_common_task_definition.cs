// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_common_task_definition.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace Claros.Common.Task
{

    [global::ProtoBuf.ProtoContract()]
    public partial class TaskDefinition : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(1, Name = @"taskSource")]
        public global::System.Collections.Generic.List<TaskDefinitionSource> taskSources { get; } = new global::System.Collections.Generic.List<TaskDefinitionSource>();

        [global::ProtoBuf.ProtoMember(2)]
        public MaintenanceTriggerType triggerType { get; set; }

        [global::ProtoBuf.ProtoMember(3)]
        public BindingInstrumentMaintenance bindingInstrumentMaintenance { get; set; }

        [global::ProtoBuf.ProtoContract()]
        public enum MaintenanceTriggerType
        {
            [global::ProtoBuf.ProtoEnum(Name = @"MAINTENANCE_TRIGGER_UNKNOWN")]
            MaintenanceTriggerUnknown = 0,
            [global::ProtoBuf.ProtoEnum(Name = @"MAINTENANCE_TRIGGER_SCHEDULED")]
            MaintenanceTriggerScheduled = 1,
            [global::ProtoBuf.ProtoEnum(Name = @"MAINTENANCE_TRIGGER_PROGNOSYS")]
            MaintenanceTriggerPrognosys = 2,
            [global::ProtoBuf.ProtoEnum(Name = @"MAINTENANCE_TRIGGER_MANUAL")]
            MaintenanceTriggerManual = 3,
        }

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
