// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: claros_common_form_formtemplate.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Claros.Common.Form {

  /// <summary>Holder for reflection information generated from claros_common_form_formtemplate.proto</summary>
  public static partial class ClarosCommonFormFormtemplateReflection {

    #region Descriptor
    /// <summary>File descriptor for claros_common_form_formtemplate.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ClarosCommonFormFormtemplateReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CiVjbGFyb3NfY29tbW9uX2Zvcm1fZm9ybXRlbXBsYXRlLnByb3RvEhJjbGFy",
            "b3MuY29tbW9uLmZvcm0aMmNsYXJvc19jb21tb25fZm9ybV9mb3JtdGVtcGxh",
            "dGVjb25maWd1cmF0aW9uLnByb3RvGihjbGFyb3NfY29tbW9uX2NvbmZpZ3Vy",
            "YXRpb25fcmlnaHRzLnByb3RvIrwCCgxGb3JtVGVtcGxhdGUSCgoCaWQYASAB",
            "KAkSDwoHb3duZXJJZBgCIAEoCRIOCgZwdWJsaWMYAyABKAgSDwoHdmVyc2lv",
            "bhgEIAEoDRJECgpwcml2aWxlZ2VzGAUgAygLMjAuY2xhcm9zLmNvbW1vbi5m",
            "b3JtLkZvcm1UZW1wbGF0ZS5Qcml2aWxlZ2VzRW50cnkSUAoZZm9ybVRlbXBs",
            "YXRlQ29uZmlndXJhdGlvbhgGIAEoCzItLmNsYXJvcy5jb21tb24uZm9ybS5G",
            "b3JtVGVtcGxhdGVDb25maWd1cmF0aW9uGlYKD1ByaXZpbGVnZXNFbnRyeRIL",
            "CgNrZXkYASABKAkSMgoFdmFsdWUYAiABKAsyIy5jbGFyb3MuY29tbW9uLmNv",
            "bmZpZ3VyYXRpb24uUmlnaHRzOgI4AWIGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Claros.Common.Form.ClarosCommonFormFormtemplateconfigurationReflection.Descriptor, global::Claros.Common.Configuration.ClarosCommonConfigurationRightsReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Claros.Common.Form.FormTemplate), global::Claros.Common.Form.FormTemplate.Parser, new[]{ "Id", "OwnerId", "Public", "Version", "Privileges", "FormTemplateConfiguration" }, null, null, new pbr::GeneratedClrTypeInfo[] { null, })
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class FormTemplate : pb::IMessage<FormTemplate> {
    private static readonly pb::MessageParser<FormTemplate> _parser = new pb::MessageParser<FormTemplate>(() => new FormTemplate());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<FormTemplate> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Claros.Common.Form.ClarosCommonFormFormtemplateReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormTemplate() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormTemplate(FormTemplate other) : this() {
      id_ = other.id_;
      ownerId_ = other.ownerId_;
      public_ = other.public_;
      version_ = other.version_;
      privileges_ = other.privileges_.Clone();
      formTemplateConfiguration_ = other.formTemplateConfiguration_ != null ? other.formTemplateConfiguration_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormTemplate Clone() {
      return new FormTemplate(this);
    }

    /// <summary>Field number for the "id" field.</summary>
    public const int IdFieldNumber = 1;
    private string id_ = "";
    /// <summary>
    ///retrieval only
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Id {
      get { return id_; }
      set {
        id_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "ownerId" field.</summary>
    public const int OwnerIdFieldNumber = 2;
    private string ownerId_ = "";
    /// <summary>
    ///update and retrieval only
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string OwnerId {
      get { return ownerId_; }
      set {
        ownerId_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "public" field.</summary>
    public const int PublicFieldNumber = 3;
    private bool public_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Public {
      get { return public_; }
      set {
        public_ = value;
      }
    }

    /// <summary>Field number for the "version" field.</summary>
    public const int VersionFieldNumber = 4;
    private uint version_;
    /// <summary>
    ///retrieval only
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public uint Version {
      get { return version_; }
      set {
        version_ = value;
      }
    }

    /// <summary>Field number for the "privileges" field.</summary>
    public const int PrivilegesFieldNumber = 5;
    private static readonly pbc::MapField<string, global::Claros.Common.Configuration.Rights>.Codec _map_privileges_codec
        = new pbc::MapField<string, global::Claros.Common.Configuration.Rights>.Codec(pb::FieldCodec.ForString(10), pb::FieldCodec.ForMessage(18, global::Claros.Common.Configuration.Rights.Parser), 42);
    private readonly pbc::MapField<string, global::Claros.Common.Configuration.Rights> privileges_ = new pbc::MapField<string, global::Claros.Common.Configuration.Rights>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::MapField<string, global::Claros.Common.Configuration.Rights> Privileges {
      get { return privileges_; }
    }

    /// <summary>Field number for the "formTemplateConfiguration" field.</summary>
    public const int FormTemplateConfigurationFieldNumber = 6;
    private global::Claros.Common.Form.FormTemplateConfiguration formTemplateConfiguration_;
    /// <summary>
    ///This is the JSON stored data that exists in the ConfigurationData from the Claros.Common.Configuration serialized into the FormTemplateConfigurationData
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Claros.Common.Form.FormTemplateConfiguration FormTemplateConfiguration {
      get { return formTemplateConfiguration_; }
      set {
        formTemplateConfiguration_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as FormTemplate);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(FormTemplate other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Id != other.Id) return false;
      if (OwnerId != other.OwnerId) return false;
      if (Public != other.Public) return false;
      if (Version != other.Version) return false;
      if (!Privileges.Equals(other.Privileges)) return false;
      if (!object.Equals(FormTemplateConfiguration, other.FormTemplateConfiguration)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Id.Length != 0) hash ^= Id.GetHashCode();
      if (OwnerId.Length != 0) hash ^= OwnerId.GetHashCode();
      if (Public != false) hash ^= Public.GetHashCode();
      if (Version != 0) hash ^= Version.GetHashCode();
      hash ^= Privileges.GetHashCode();
      if (formTemplateConfiguration_ != null) hash ^= FormTemplateConfiguration.GetHashCode();
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
      if (OwnerId.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(OwnerId);
      }
      if (Public != false) {
        output.WriteRawTag(24);
        output.WriteBool(Public);
      }
      if (Version != 0) {
        output.WriteRawTag(32);
        output.WriteUInt32(Version);
      }
      privileges_.WriteTo(output, _map_privileges_codec);
      if (formTemplateConfiguration_ != null) {
        output.WriteRawTag(50);
        output.WriteMessage(FormTemplateConfiguration);
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
      if (OwnerId.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(OwnerId);
      }
      if (Public != false) {
        size += 1 + 1;
      }
      if (Version != 0) {
        size += 1 + pb::CodedOutputStream.ComputeUInt32Size(Version);
      }
      size += privileges_.CalculateSize(_map_privileges_codec);
      if (formTemplateConfiguration_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(FormTemplateConfiguration);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(FormTemplate other) {
      if (other == null) {
        return;
      }
      if (other.Id.Length != 0) {
        Id = other.Id;
      }
      if (other.OwnerId.Length != 0) {
        OwnerId = other.OwnerId;
      }
      if (other.Public != false) {
        Public = other.Public;
      }
      if (other.Version != 0) {
        Version = other.Version;
      }
      privileges_.Add(other.privileges_);
      if (other.formTemplateConfiguration_ != null) {
        if (formTemplateConfiguration_ == null) {
          FormTemplateConfiguration = new global::Claros.Common.Form.FormTemplateConfiguration();
        }
        FormTemplateConfiguration.MergeFrom(other.FormTemplateConfiguration);
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
          case 18: {
            OwnerId = input.ReadString();
            break;
          }
          case 24: {
            Public = input.ReadBool();
            break;
          }
          case 32: {
            Version = input.ReadUInt32();
            break;
          }
          case 42: {
            privileges_.AddEntriesFrom(input, _map_privileges_codec);
            break;
          }
          case 50: {
            if (formTemplateConfiguration_ == null) {
              FormTemplateConfiguration = new global::Claros.Common.Form.FormTemplateConfiguration();
            }
            input.ReadMessage(FormTemplateConfiguration);
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code