// This file was generated by a tool; you should avoid making direct changes.
// Consider using 'partial classes' to extend these types
// Input: claros_common_configuration_rights.proto

#pragma warning disable CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192
namespace Claros.Common.Configuration
{

    [global::ProtoBuf.ProtoContract()]
    public partial class Rights : global::ProtoBuf.IExtensible
    {
        private global::ProtoBuf.IExtension __pbn__extensionData;
        global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
            => global::ProtoBuf.Extensible.GetExtensionObject(ref __pbn__extensionData, createIfMissing);

        [global::ProtoBuf.ProtoMember(2, Name = @"view")]
        public bool View { get; set; }

        [global::ProtoBuf.ProtoMember(3, Name = @"edit")]
        public bool Edit { get; set; }

        [global::ProtoBuf.ProtoMember(4, Name = @"delete")]
        public bool Delete { get; set; }

        [global::ProtoBuf.ProtoMember(5, Name = @"create")]
        public bool Create { get; set; }

    }

}

#pragma warning restore CS0612, CS1591, CS3021, IDE1006, RCS1036, RCS1057, RCS1085, RCS1192