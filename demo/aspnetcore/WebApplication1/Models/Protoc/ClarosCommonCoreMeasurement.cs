// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: claros_common_core_measurement.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace claros.protoc.Common.Core {

  /// <summary>Holder for reflection information generated from claros_common_core_measurement.proto</summary>
  public static partial class ClarosCommonCoreMeasurementReflection {

    #region Descriptor
    /// <summary>File descriptor for claros_common_core_measurement.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ClarosCommonCoreMeasurementReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CiRjbGFyb3NfY29tbW9uX2NvcmVfbWVhc3VyZW1lbnQucHJvdG8SEmNsYXJv",
            "cy5jb21tb24uY29yZRonY2xhcm9zX2NvbW1vbl9jb3JlX2NsYXJvc2RhdGV0",
            "aW1lLnByb3RvIqEBCgtNZWFzdXJlbWVudBI1Cgl0aW1lc3RhbXAYASABKAsy",
            "Ii5jbGFyb3MuY29tbW9uLmNvcmUuQ2xhcm9zRGF0ZVRpbWUSEwoLcGFyYW1l",
            "dGVySWQYAiABKAUSFQoNcGFyYW1ldGVyR3VpZBgDIAEoCRIOCgZ1bml0SWQY",
            "BCABKAUSEAoIdW5pdEd1aWQYBSABKAkSDQoFdmFsdWUYBiABKAJiBnByb3Rv",
            "Mw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::claros.protoc.Common.Core.ClarosCommonCoreClarosdatetimeReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::claros.protoc.Common.Core.Measurement), global::claros.protoc.Common.Core.Measurement.Parser, new[]{ "Timestamp", "ParameterId", "ParameterGuid", "UnitId", "UnitGuid", "Value" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class Measurement : pb::IMessage<Measurement> {
    private static readonly pb::MessageParser<Measurement> _parser = new pb::MessageParser<Measurement>(() => new Measurement());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<Measurement> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::claros.protoc.Common.Core.ClarosCommonCoreMeasurementReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Measurement() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Measurement(Measurement other) : this() {
      timestamp_ = other.timestamp_ != null ? other.timestamp_.Clone() : null;
      parameterId_ = other.parameterId_;
      parameterGuid_ = other.parameterGuid_;
      unitId_ = other.unitId_;
      unitGuid_ = other.unitGuid_;
      value_ = other.value_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Measurement Clone() {
      return new Measurement(this);
    }

    /// <summary>Field number for the "timestamp" field.</summary>
    public const int TimestampFieldNumber = 1;
    private global::claros.protoc.Common.Core.ClarosDateTime timestamp_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::claros.protoc.Common.Core.ClarosDateTime Timestamp {
      get { return timestamp_; }
      set {
        timestamp_ = value;
      }
    }

    /// <summary>Field number for the "parameterId" field.</summary>
    public const int ParameterIdFieldNumber = 2;
    private int parameterId_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int ParameterId {
      get { return parameterId_; }
      set {
        parameterId_ = value;
      }
    }

    /// <summary>Field number for the "parameterGuid" field.</summary>
    public const int ParameterGuidFieldNumber = 3;
    private string parameterGuid_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string ParameterGuid {
      get { return parameterGuid_; }
      set {
        parameterGuid_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "unitId" field.</summary>
    public const int UnitIdFieldNumber = 4;
    private int unitId_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int UnitId {
      get { return unitId_; }
      set {
        unitId_ = value;
      }
    }

    /// <summary>Field number for the "unitGuid" field.</summary>
    public const int UnitGuidFieldNumber = 5;
    private string unitGuid_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string UnitGuid {
      get { return unitGuid_; }
      set {
        unitGuid_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "value" field.</summary>
    public const int ValueFieldNumber = 6;
    private float value_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public float Value {
      get { return value_; }
      set {
        value_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as Measurement);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(Measurement other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Timestamp, other.Timestamp)) return false;
      if (ParameterId != other.ParameterId) return false;
      if (ParameterGuid != other.ParameterGuid) return false;
      if (UnitId != other.UnitId) return false;
      if (UnitGuid != other.UnitGuid) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(Value, other.Value)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (timestamp_ != null) hash ^= Timestamp.GetHashCode();
      if (ParameterId != 0) hash ^= ParameterId.GetHashCode();
      if (ParameterGuid.Length != 0) hash ^= ParameterGuid.GetHashCode();
      if (UnitId != 0) hash ^= UnitId.GetHashCode();
      if (UnitGuid.Length != 0) hash ^= UnitGuid.GetHashCode();
      if (Value != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(Value);
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
      if (timestamp_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Timestamp);
      }
      if (ParameterId != 0) {
        output.WriteRawTag(16);
        output.WriteInt32(ParameterId);
      }
      if (ParameterGuid.Length != 0) {
        output.WriteRawTag(26);
        output.WriteString(ParameterGuid);
      }
      if (UnitId != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(UnitId);
      }
      if (UnitGuid.Length != 0) {
        output.WriteRawTag(42);
        output.WriteString(UnitGuid);
      }
      if (Value != 0F) {
        output.WriteRawTag(53);
        output.WriteFloat(Value);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (timestamp_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Timestamp);
      }
      if (ParameterId != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(ParameterId);
      }
      if (ParameterGuid.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(ParameterGuid);
      }
      if (UnitId != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(UnitId);
      }
      if (UnitGuid.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(UnitGuid);
      }
      if (Value != 0F) {
        size += 1 + 4;
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(Measurement other) {
      if (other == null) {
        return;
      }
      if (other.timestamp_ != null) {
        if (timestamp_ == null) {
          Timestamp = new global::claros.protoc.Common.Core.ClarosDateTime();
        }
        Timestamp.MergeFrom(other.Timestamp);
      }
      if (other.ParameterId != 0) {
        ParameterId = other.ParameterId;
      }
      if (other.ParameterGuid.Length != 0) {
        ParameterGuid = other.ParameterGuid;
      }
      if (other.UnitId != 0) {
        UnitId = other.UnitId;
      }
      if (other.UnitGuid.Length != 0) {
        UnitGuid = other.UnitGuid;
      }
      if (other.Value != 0F) {
        Value = other.Value;
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
            if (timestamp_ == null) {
              Timestamp = new global::claros.protoc.Common.Core.ClarosDateTime();
            }
            input.ReadMessage(Timestamp);
            break;
          }
          case 16: {
            ParameterId = input.ReadInt32();
            break;
          }
          case 26: {
            ParameterGuid = input.ReadString();
            break;
          }
          case 32: {
            UnitId = input.ReadInt32();
            break;
          }
          case 42: {
            UnitGuid = input.ReadString();
            break;
          }
          case 53: {
            Value = input.ReadFloat();
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code