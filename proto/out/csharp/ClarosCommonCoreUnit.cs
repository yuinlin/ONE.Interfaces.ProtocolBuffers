// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: claros_common_core_unit.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Claros.Common.Core {

  /// <summary>Holder for reflection information generated from claros_common_core_unit.proto</summary>
  public static partial class ClarosCommonCoreUnitReflection {

    #region Descriptor
    /// <summary>File descriptor for claros_common_core_unit.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ClarosCommonCoreUnitReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Ch1jbGFyb3NfY29tbW9uX2NvcmVfdW5pdC5wcm90bxISY2xhcm9zLmNvbW1v",
            "bi5jb3JlGidjbGFyb3NfY29tbW9uX2NvcmVfY2xhcm9zZGF0ZXRpbWUucHJv",
            "dG8iiwIKBFVuaXQSCgoCSWQYASABKAkSDQoFSW50SWQYAiABKA0SDwoHaTE4",
            "bktleRgDIAEoCRIQCgh1bml0TmFtZRgEIAEoCRIWCg5xdWFudGl0eVR5cGVJ",
            "ZBgFIAEoCRITCgtkZXNjcmlwdGlvbhgGIAEoCRITCgtjcmVhdGVkQnlJZBgH",
            "IAEoCRI1CgljcmVhdGVkT24YCCABKAsyIi5jbGFyb3MuY29tbW9uLmNvcmUu",
            "Q2xhcm9zRGF0ZVRpbWUSFAoMbW9kaWZpZWRCeUlkGAkgASgJEjYKCm1vZGlm",
            "aWVkT24YCiABKAsyIi5jbGFyb3MuY29tbW9uLmNvcmUuQ2xhcm9zRGF0ZVRp",
            "bWViBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Claros.Common.Core.ClarosCommonCoreClarosdatetimeReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Claros.Common.Core.Unit), global::Claros.Common.Core.Unit.Parser, new[]{ "Id", "IntId", "I18NKey", "UnitName", "QuantityTypeId", "Description", "CreatedById", "CreatedOn", "ModifiedById", "ModifiedOn" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class Unit : pb::IMessage<Unit> {
    private static readonly pb::MessageParser<Unit> _parser = new pb::MessageParser<Unit>(() => new Unit());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<Unit> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Claros.Common.Core.ClarosCommonCoreUnitReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Unit() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Unit(Unit other) : this() {
      id_ = other.id_;
      intId_ = other.intId_;
      i18NKey_ = other.i18NKey_;
      unitName_ = other.unitName_;
      quantityTypeId_ = other.quantityTypeId_;
      description_ = other.description_;
      createdById_ = other.createdById_;
      createdOn_ = other.createdOn_ != null ? other.createdOn_.Clone() : null;
      modifiedById_ = other.modifiedById_;
      modifiedOn_ = other.modifiedOn_ != null ? other.modifiedOn_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Unit Clone() {
      return new Unit(this);
    }

    /// <summary>Field number for the "Id" field.</summary>
    public const int IdFieldNumber = 1;
    private string id_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Id {
      get { return id_; }
      set {
        id_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "IntId" field.</summary>
    public const int IntIdFieldNumber = 2;
    private uint intId_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public uint IntId {
      get { return intId_; }
      set {
        intId_ = value;
      }
    }

    /// <summary>Field number for the "i18nKey" field.</summary>
    public const int I18NKeyFieldNumber = 3;
    private string i18NKey_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string I18NKey {
      get { return i18NKey_; }
      set {
        i18NKey_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "unitName" field.</summary>
    public const int UnitNameFieldNumber = 4;
    private string unitName_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string UnitName {
      get { return unitName_; }
      set {
        unitName_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "quantityTypeId" field.</summary>
    public const int QuantityTypeIdFieldNumber = 5;
    private string quantityTypeId_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string QuantityTypeId {
      get { return quantityTypeId_; }
      set {
        quantityTypeId_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "description" field.</summary>
    public const int DescriptionFieldNumber = 6;
    private string description_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Description {
      get { return description_; }
      set {
        description_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "createdById" field.</summary>
    public const int CreatedByIdFieldNumber = 7;
    private string createdById_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string CreatedById {
      get { return createdById_; }
      set {
        createdById_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "createdOn" field.</summary>
    public const int CreatedOnFieldNumber = 8;
    private global::Claros.Common.Core.ClarosDateTime createdOn_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Claros.Common.Core.ClarosDateTime CreatedOn {
      get { return createdOn_; }
      set {
        createdOn_ = value;
      }
    }

    /// <summary>Field number for the "modifiedById" field.</summary>
    public const int ModifiedByIdFieldNumber = 9;
    private string modifiedById_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string ModifiedById {
      get { return modifiedById_; }
      set {
        modifiedById_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "modifiedOn" field.</summary>
    public const int ModifiedOnFieldNumber = 10;
    private global::Claros.Common.Core.ClarosDateTime modifiedOn_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Claros.Common.Core.ClarosDateTime ModifiedOn {
      get { return modifiedOn_; }
      set {
        modifiedOn_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as Unit);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(Unit other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Id != other.Id) return false;
      if (IntId != other.IntId) return false;
      if (I18NKey != other.I18NKey) return false;
      if (UnitName != other.UnitName) return false;
      if (QuantityTypeId != other.QuantityTypeId) return false;
      if (Description != other.Description) return false;
      if (CreatedById != other.CreatedById) return false;
      if (!object.Equals(CreatedOn, other.CreatedOn)) return false;
      if (ModifiedById != other.ModifiedById) return false;
      if (!object.Equals(ModifiedOn, other.ModifiedOn)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Id.Length != 0) hash ^= Id.GetHashCode();
      if (IntId != 0) hash ^= IntId.GetHashCode();
      if (I18NKey.Length != 0) hash ^= I18NKey.GetHashCode();
      if (UnitName.Length != 0) hash ^= UnitName.GetHashCode();
      if (QuantityTypeId.Length != 0) hash ^= QuantityTypeId.GetHashCode();
      if (Description.Length != 0) hash ^= Description.GetHashCode();
      if (CreatedById.Length != 0) hash ^= CreatedById.GetHashCode();
      if (createdOn_ != null) hash ^= CreatedOn.GetHashCode();
      if (ModifiedById.Length != 0) hash ^= ModifiedById.GetHashCode();
      if (modifiedOn_ != null) hash ^= ModifiedOn.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
      if (Id.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Id);
      }
      if (IntId != 0) {
        output.WriteRawTag(16);
        output.WriteUInt32(IntId);
      }
      if (I18NKey.Length != 0) {
        output.WriteRawTag(26);
        output.WriteString(I18NKey);
      }
      if (UnitName.Length != 0) {
        output.WriteRawTag(34);
        output.WriteString(UnitName);
      }
      if (QuantityTypeId.Length != 0) {
        output.WriteRawTag(42);
        output.WriteString(QuantityTypeId);
      }
      if (Description.Length != 0) {
        output.WriteRawTag(50);
        output.WriteString(Description);
      }
      if (CreatedById.Length != 0) {
        output.WriteRawTag(58);
        output.WriteString(CreatedById);
      }
      if (createdOn_ != null) {
        output.WriteRawTag(66);
        output.WriteMessage(CreatedOn);
      }
      if (ModifiedById.Length != 0) {
        output.WriteRawTag(74);
        output.WriteString(ModifiedById);
      }
      if (modifiedOn_ != null) {
        output.WriteRawTag(82);
        output.WriteMessage(ModifiedOn);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (Id.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Id);
      }
      if (IntId != 0) {
        size += 1 + pb::CodedOutputStream.ComputeUInt32Size(IntId);
      }
      if (I18NKey.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(I18NKey);
      }
      if (UnitName.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(UnitName);
      }
      if (QuantityTypeId.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(QuantityTypeId);
      }
      if (Description.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Description);
      }
      if (CreatedById.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(CreatedById);
      }
      if (createdOn_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(CreatedOn);
      }
      if (ModifiedById.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(ModifiedById);
      }
      if (modifiedOn_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(ModifiedOn);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(Unit other) {
      if (other == null) {
        return;
      }
      if (other.Id.Length != 0) {
        Id = other.Id;
      }
      if (other.IntId != 0) {
        IntId = other.IntId;
      }
      if (other.I18NKey.Length != 0) {
        I18NKey = other.I18NKey;
      }
      if (other.UnitName.Length != 0) {
        UnitName = other.UnitName;
      }
      if (other.QuantityTypeId.Length != 0) {
        QuantityTypeId = other.QuantityTypeId;
      }
      if (other.Description.Length != 0) {
        Description = other.Description;
      }
      if (other.CreatedById.Length != 0) {
        CreatedById = other.CreatedById;
      }
      if (other.createdOn_ != null) {
        if (createdOn_ == null) {
          CreatedOn = new global::Claros.Common.Core.ClarosDateTime();
        }
        CreatedOn.MergeFrom(other.CreatedOn);
      }
      if (other.ModifiedById.Length != 0) {
        ModifiedById = other.ModifiedById;
      }
      if (other.modifiedOn_ != null) {
        if (modifiedOn_ == null) {
          ModifiedOn = new global::Claros.Common.Core.ClarosDateTime();
        }
        ModifiedOn.MergeFrom(other.ModifiedOn);
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            Id = input.ReadString();
            break;
          }
          case 16: {
            IntId = input.ReadUInt32();
            break;
          }
          case 26: {
            I18NKey = input.ReadString();
            break;
          }
          case 34: {
            UnitName = input.ReadString();
            break;
          }
          case 42: {
            QuantityTypeId = input.ReadString();
            break;
          }
          case 50: {
            Description = input.ReadString();
            break;
          }
          case 58: {
            CreatedById = input.ReadString();
            break;
          }
          case 66: {
            if (createdOn_ == null) {
              CreatedOn = new global::Claros.Common.Core.ClarosDateTime();
            }
            input.ReadMessage(CreatedOn);
            break;
          }
          case 74: {
            ModifiedById = input.ReadString();
            break;
          }
          case 82: {
            if (modifiedOn_ == null) {
              ModifiedOn = new global::Claros.Common.Core.ClarosDateTime();
            }
            input.ReadMessage(ModifiedOn);
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code