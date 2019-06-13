// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: claros_common_form_binding.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Claros.Common.Form {

  /// <summary>Holder for reflection information generated from claros_common_form_binding.proto</summary>
  public static partial class ClarosCommonFormBindingReflection {

    #region Descriptor
    /// <summary>File descriptor for claros_common_form_binding.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ClarosCommonFormBindingReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CiBjbGFyb3NfY29tbW9uX2Zvcm1fYmluZGluZy5wcm90bxISY2xhcm9zLmNv",
            "bW1vbi5mb3JtIkIKC0Zvcm1CaW5kaW5nEg4KBmZvcm1JZBgBIAEoCRITCgtm",
            "b3JtRmllbGRJZBgCIAEoCRIOCgZ1c2VySWQYAyABKAliBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Claros.Common.Form.FormBinding), global::Claros.Common.Form.FormBinding.Parser, new[]{ "FormId", "FormFieldId", "UserId" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class FormBinding : pb::IMessage<FormBinding> {
    private static readonly pb::MessageParser<FormBinding> _parser = new pb::MessageParser<FormBinding>(() => new FormBinding());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<FormBinding> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Claros.Common.Form.ClarosCommonFormBindingReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormBinding() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormBinding(FormBinding other) : this() {
      formId_ = other.formId_;
      formFieldId_ = other.formFieldId_;
      userId_ = other.userId_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormBinding Clone() {
      return new FormBinding(this);
    }

    /// <summary>Field number for the "formId" field.</summary>
    public const int FormIdFieldNumber = 1;
    private string formId_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string FormId {
      get { return formId_; }
      set {
        formId_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "formFieldId" field.</summary>
    public const int FormFieldIdFieldNumber = 2;
    private string formFieldId_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string FormFieldId {
      get { return formFieldId_; }
      set {
        formFieldId_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "userId" field.</summary>
    public const int UserIdFieldNumber = 3;
    private string userId_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string UserId {
      get { return userId_; }
      set {
        userId_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as FormBinding);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(FormBinding other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (FormId != other.FormId) return false;
      if (FormFieldId != other.FormFieldId) return false;
      if (UserId != other.UserId) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (FormId.Length != 0) hash ^= FormId.GetHashCode();
      if (FormFieldId.Length != 0) hash ^= FormFieldId.GetHashCode();
      if (UserId.Length != 0) hash ^= UserId.GetHashCode();
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
      if (FormId.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(FormId);
      }
      if (FormFieldId.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(FormFieldId);
      }
      if (UserId.Length != 0) {
        output.WriteRawTag(26);
        output.WriteString(UserId);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (FormId.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(FormId);
      }
      if (FormFieldId.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(FormFieldId);
      }
      if (UserId.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(UserId);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(FormBinding other) {
      if (other == null) {
        return;
      }
      if (other.FormId.Length != 0) {
        FormId = other.FormId;
      }
      if (other.FormFieldId.Length != 0) {
        FormFieldId = other.FormFieldId;
      }
      if (other.UserId.Length != 0) {
        UserId = other.UserId;
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
            FormId = input.ReadString();
            break;
          }
          case 18: {
            FormFieldId = input.ReadString();
            break;
          }
          case 26: {
            UserId = input.ReadString();
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code