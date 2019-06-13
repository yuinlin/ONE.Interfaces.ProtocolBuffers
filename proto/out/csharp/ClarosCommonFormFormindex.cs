// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: claros_common_form_formindex.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Claros.Common.Form {

  /// <summary>Holder for reflection information generated from claros_common_form_formindex.proto</summary>
  public static partial class ClarosCommonFormFormindexReflection {

    #region Descriptor
    /// <summary>File descriptor for claros_common_form_formindex.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ClarosCommonFormFormindexReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CiJjbGFyb3NfY29tbW9uX2Zvcm1fZm9ybWluZGV4LnByb3RvEhJjbGFyb3Mu",
            "Y29tbW9uLmZvcm0aI2NsYXJvc19jb21tb25fY29yZV90aW1ld2luZG93LnBy",
            "b3RvGidjbGFyb3NfY29tbW9uX2NvcmVfY2xhcm9zZGF0ZXRpbWUucHJvdG8i",
            "5gEKCUZvcm1JbmRleBIKCgJpZBgBIAEoCRISCgp0ZW1wbGF0ZUlkGAIgASgJ",
            "EhcKD3RlbXBsYXRlVmVyc2lvbhgDIAEoDRIyCgp0aW1lV2luZG93GAQgASgL",
            "Mh4uY2xhcm9zLmNvbW1vbi5jb3JlLlRpbWVXaW5kb3cSOAoMbGFzdE1vZGlm",
            "aWVkGAUgASgLMiIuY2xhcm9zLmNvbW1vbi5jb3JlLkNsYXJvc0RhdGVUaW1l",
            "EgwKBG5hbWUYBiABKAkSEQoJY3JlYXRvcklkGAcgASgJEhEKCWlzSW5TcGVl",
            "ZBgIIAEoCGIGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Claros.Common.Core.ClarosCommonCoreTimewindowReflection.Descriptor, global::Claros.Common.Core.ClarosCommonCoreClarosdatetimeReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Claros.Common.Form.FormIndex), global::Claros.Common.Form.FormIndex.Parser, new[]{ "Id", "TemplateId", "TemplateVersion", "TimeWindow", "LastModified", "Name", "CreatorId", "IsInSpeed" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class FormIndex : pb::IMessage<FormIndex> {
    private static readonly pb::MessageParser<FormIndex> _parser = new pb::MessageParser<FormIndex>(() => new FormIndex());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<FormIndex> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Claros.Common.Form.ClarosCommonFormFormindexReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormIndex() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormIndex(FormIndex other) : this() {
      id_ = other.id_;
      templateId_ = other.templateId_;
      templateVersion_ = other.templateVersion_;
      timeWindow_ = other.timeWindow_ != null ? other.timeWindow_.Clone() : null;
      lastModified_ = other.lastModified_ != null ? other.lastModified_.Clone() : null;
      name_ = other.name_;
      creatorId_ = other.creatorId_;
      isInSpeed_ = other.isInSpeed_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormIndex Clone() {
      return new FormIndex(this);
    }

    /// <summary>Field number for the "id" field.</summary>
    public const int IdFieldNumber = 1;
    private string id_ = "";
    /// <summary>
    ///GUID
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Id {
      get { return id_; }
      set {
        id_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "templateId" field.</summary>
    public const int TemplateIdFieldNumber = 2;
    private string templateId_ = "";
    /// <summary>
    ///GUID
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string TemplateId {
      get { return templateId_; }
      set {
        templateId_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "templateVersion" field.</summary>
    public const int TemplateVersionFieldNumber = 3;
    private uint templateVersion_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public uint TemplateVersion {
      get { return templateVersion_; }
      set {
        templateVersion_ = value;
      }
    }

    /// <summary>Field number for the "timeWindow" field.</summary>
    public const int TimeWindowFieldNumber = 4;
    private global::Claros.Common.Core.TimeWindow timeWindow_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Claros.Common.Core.TimeWindow TimeWindow {
      get { return timeWindow_; }
      set {
        timeWindow_ = value;
      }
    }

    /// <summary>Field number for the "lastModified" field.</summary>
    public const int LastModifiedFieldNumber = 5;
    private global::Claros.Common.Core.ClarosDateTime lastModified_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Claros.Common.Core.ClarosDateTime LastModified {
      get { return lastModified_; }
      set {
        lastModified_ = value;
      }
    }

    /// <summary>Field number for the "name" field.</summary>
    public const int NameFieldNumber = 6;
    private string name_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Name {
      get { return name_; }
      set {
        name_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "creatorId" field.</summary>
    public const int CreatorIdFieldNumber = 7;
    private string creatorId_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string CreatorId {
      get { return creatorId_; }
      set {
        creatorId_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "isInSpeed" field.</summary>
    public const int IsInSpeedFieldNumber = 8;
    private bool isInSpeed_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool IsInSpeed {
      get { return isInSpeed_; }
      set {
        isInSpeed_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as FormIndex);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(FormIndex other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Id != other.Id) return false;
      if (TemplateId != other.TemplateId) return false;
      if (TemplateVersion != other.TemplateVersion) return false;
      if (!object.Equals(TimeWindow, other.TimeWindow)) return false;
      if (!object.Equals(LastModified, other.LastModified)) return false;
      if (Name != other.Name) return false;
      if (CreatorId != other.CreatorId) return false;
      if (IsInSpeed != other.IsInSpeed) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Id.Length != 0) hash ^= Id.GetHashCode();
      if (TemplateId.Length != 0) hash ^= TemplateId.GetHashCode();
      if (TemplateVersion != 0) hash ^= TemplateVersion.GetHashCode();
      if (timeWindow_ != null) hash ^= TimeWindow.GetHashCode();
      if (lastModified_ != null) hash ^= LastModified.GetHashCode();
      if (Name.Length != 0) hash ^= Name.GetHashCode();
      if (CreatorId.Length != 0) hash ^= CreatorId.GetHashCode();
      if (IsInSpeed != false) hash ^= IsInSpeed.GetHashCode();
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
      if (TemplateId.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(TemplateId);
      }
      if (TemplateVersion != 0) {
        output.WriteRawTag(24);
        output.WriteUInt32(TemplateVersion);
      }
      if (timeWindow_ != null) {
        output.WriteRawTag(34);
        output.WriteMessage(TimeWindow);
      }
      if (lastModified_ != null) {
        output.WriteRawTag(42);
        output.WriteMessage(LastModified);
      }
      if (Name.Length != 0) {
        output.WriteRawTag(50);
        output.WriteString(Name);
      }
      if (CreatorId.Length != 0) {
        output.WriteRawTag(58);
        output.WriteString(CreatorId);
      }
      if (IsInSpeed != false) {
        output.WriteRawTag(64);
        output.WriteBool(IsInSpeed);
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
      if (TemplateId.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(TemplateId);
      }
      if (TemplateVersion != 0) {
        size += 1 + pb::CodedOutputStream.ComputeUInt32Size(TemplateVersion);
      }
      if (timeWindow_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(TimeWindow);
      }
      if (lastModified_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(LastModified);
      }
      if (Name.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Name);
      }
      if (CreatorId.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(CreatorId);
      }
      if (IsInSpeed != false) {
        size += 1 + 1;
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(FormIndex other) {
      if (other == null) {
        return;
      }
      if (other.Id.Length != 0) {
        Id = other.Id;
      }
      if (other.TemplateId.Length != 0) {
        TemplateId = other.TemplateId;
      }
      if (other.TemplateVersion != 0) {
        TemplateVersion = other.TemplateVersion;
      }
      if (other.timeWindow_ != null) {
        if (timeWindow_ == null) {
          TimeWindow = new global::Claros.Common.Core.TimeWindow();
        }
        TimeWindow.MergeFrom(other.TimeWindow);
      }
      if (other.lastModified_ != null) {
        if (lastModified_ == null) {
          LastModified = new global::Claros.Common.Core.ClarosDateTime();
        }
        LastModified.MergeFrom(other.LastModified);
      }
      if (other.Name.Length != 0) {
        Name = other.Name;
      }
      if (other.CreatorId.Length != 0) {
        CreatorId = other.CreatorId;
      }
      if (other.IsInSpeed != false) {
        IsInSpeed = other.IsInSpeed;
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
            TemplateId = input.ReadString();
            break;
          }
          case 24: {
            TemplateVersion = input.ReadUInt32();
            break;
          }
          case 34: {
            if (timeWindow_ == null) {
              TimeWindow = new global::Claros.Common.Core.TimeWindow();
            }
            input.ReadMessage(TimeWindow);
            break;
          }
          case 42: {
            if (lastModified_ == null) {
              LastModified = new global::Claros.Common.Core.ClarosDateTime();
            }
            input.ReadMessage(LastModified);
            break;
          }
          case 50: {
            Name = input.ReadString();
            break;
          }
          case 58: {
            CreatorId = input.ReadString();
            break;
          }
          case 64: {
            IsInSpeed = input.ReadBool();
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code