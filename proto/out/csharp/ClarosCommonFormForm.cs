// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: claros_common_form_form.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Claros.Common.Form {

  /// <summary>Holder for reflection information generated from claros_common_form_form.proto</summary>
  public static partial class ClarosCommonFormFormReflection {

    #region Descriptor
    /// <summary>File descriptor for claros_common_form_form.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ClarosCommonFormFormReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Ch1jbGFyb3NfY29tbW9uX2Zvcm1fZm9ybS5wcm90bxISY2xhcm9zLmNvbW1v",
            "bi5mb3JtGiNjbGFyb3NfY29tbW9uX2NvcmVfdGltZXdpbmRvdy5wcm90bxod",
            "Y2xhcm9zX2NvbW1vbl9jb3JlX25vdGUucHJvdG8aI2NsYXJvc19jb21tb25f",
            "Y29yZV9hdWRpdGV2ZW50LnByb3RvGiJjbGFyb3NfY29tbW9uX2Zvcm1fZm9y",
            "bWZpZWxkLnByb3RvGiVjbGFyb3NfY29tbW9uX2Zvcm1fZm9ybXRlbXBsYXRl",
            "LnByb3RvGi1jbGFyb3NfY29tbW9uX2Zvcm1fZm9ybWZpZWxkX2RlZmluaXRp",
            "b24ucHJvdG8iqQMKBEZvcm0SCgoCaWQYASABKAkSDAoEbmFtZRgCIAEoCRIy",
            "Cgp0aW1lV2luZG93GAMgASgLMh4uY2xhcm9zLmNvbW1vbi5jb3JlLlRpbWVX",
            "aW5kb3cSNgoMZm9ybVRlbXBsYXRlGAQgASgLMiAuY2xhcm9zLmNvbW1vbi5m",
            "b3JtLkZvcm1UZW1wbGF0ZRJKChlhZEhvY0Zvcm1GaWVsZERlZmluaXRpb25z",
            "GAUgAygLMicuY2xhcm9zLmNvbW1vbi5mb3JtLkZvcm1GaWVsZERlZmluaXRp",
            "b24SOQoSdGVtcGxhdGVGb3JtRmllbGRzGAYgAygLMh0uY2xhcm9zLmNvbW1v",
            "bi5mb3JtLkZvcm1GaWVsZBI2Cg9hZGhvY0Zvcm1GaWVsZHMYByADKAsyHS5j",
            "bGFyb3MuY29tbW9uLmZvcm0uRm9ybUZpZWxkEicKBW5vdGVzGAggAygLMhgu",
            "Y2xhcm9zLmNvbW1vbi5jb3JlLk5vdGUSMwoLYXVkaXRFdmVudHMYYyADKAsy",
            "Hi5jbGFyb3MuY29tbW9uLmNvcmUuQXVkaXRFdmVudGIGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Claros.Common.Core.ClarosCommonCoreTimewindowReflection.Descriptor, global::Claros.Common.Core.ClarosCommonCoreNoteReflection.Descriptor, global::Claros.Common.Core.ClarosCommonCoreAuditeventReflection.Descriptor, global::Claros.Common.Form.ClarosCommonFormFormfieldReflection.Descriptor, global::Claros.Common.Form.ClarosCommonFormFormtemplateReflection.Descriptor, global::Claros.Common.Form.ClarosCommonFormFormfieldDefinitionReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Claros.Common.Form.Form), global::Claros.Common.Form.Form.Parser, new[]{ "Id", "Name", "TimeWindow", "FormTemplate", "AdHocFormFieldDefinitions", "TemplateFormFields", "AdhocFormFields", "Notes", "AuditEvents" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class Form : pb::IMessage<Form> {
    private static readonly pb::MessageParser<Form> _parser = new pb::MessageParser<Form>(() => new Form());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<Form> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Claros.Common.Form.ClarosCommonFormFormReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Form() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Form(Form other) : this() {
      id_ = other.id_;
      name_ = other.name_;
      timeWindow_ = other.timeWindow_ != null ? other.timeWindow_.Clone() : null;
      formTemplate_ = other.formTemplate_ != null ? other.formTemplate_.Clone() : null;
      adHocFormFieldDefinitions_ = other.adHocFormFieldDefinitions_.Clone();
      templateFormFields_ = other.templateFormFields_.Clone();
      adhocFormFields_ = other.adhocFormFields_.Clone();
      notes_ = other.notes_.Clone();
      auditEvents_ = other.auditEvents_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Form Clone() {
      return new Form(this);
    }

    /// <summary>Field number for the "id" field.</summary>
    public const int IdFieldNumber = 1;
    private string id_ = "";
    /// <summary>
    /// header
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Id {
      get { return id_; }
      set {
        id_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "name" field.</summary>
    public const int NameFieldNumber = 2;
    private string name_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Name {
      get { return name_; }
      set {
        name_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "timeWindow" field.</summary>
    public const int TimeWindowFieldNumber = 3;
    private global::Claros.Common.Core.TimeWindow timeWindow_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Claros.Common.Core.TimeWindow TimeWindow {
      get { return timeWindow_; }
      set {
        timeWindow_ = value;
      }
    }

    /// <summary>Field number for the "formTemplate" field.</summary>
    public const int FormTemplateFieldNumber = 4;
    private global::Claros.Common.Form.FormTemplate formTemplate_;
    /// <summary>
    /// definition
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Claros.Common.Form.FormTemplate FormTemplate {
      get { return formTemplate_; }
      set {
        formTemplate_ = value;
      }
    }

    /// <summary>Field number for the "adHocFormFieldDefinitions" field.</summary>
    public const int AdHocFormFieldDefinitionsFieldNumber = 5;
    private static readonly pb::FieldCodec<global::Claros.Common.Form.FormFieldDefinition> _repeated_adHocFormFieldDefinitions_codec
        = pb::FieldCodec.ForMessage(42, global::Claros.Common.Form.FormFieldDefinition.Parser);
    private readonly pbc::RepeatedField<global::Claros.Common.Form.FormFieldDefinition> adHocFormFieldDefinitions_ = new pbc::RepeatedField<global::Claros.Common.Form.FormFieldDefinition>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Claros.Common.Form.FormFieldDefinition> AdHocFormFieldDefinitions {
      get { return adHocFormFieldDefinitions_; }
    }

    /// <summary>Field number for the "templateFormFields" field.</summary>
    public const int TemplateFormFieldsFieldNumber = 6;
    private static readonly pb::FieldCodec<global::Claros.Common.Form.FormField> _repeated_templateFormFields_codec
        = pb::FieldCodec.ForMessage(50, global::Claros.Common.Form.FormField.Parser);
    private readonly pbc::RepeatedField<global::Claros.Common.Form.FormField> templateFormFields_ = new pbc::RepeatedField<global::Claros.Common.Form.FormField>();
    /// <summary>
    /// data
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Claros.Common.Form.FormField> TemplateFormFields {
      get { return templateFormFields_; }
    }

    /// <summary>Field number for the "adhocFormFields" field.</summary>
    public const int AdhocFormFieldsFieldNumber = 7;
    private static readonly pb::FieldCodec<global::Claros.Common.Form.FormField> _repeated_adhocFormFields_codec
        = pb::FieldCodec.ForMessage(58, global::Claros.Common.Form.FormField.Parser);
    private readonly pbc::RepeatedField<global::Claros.Common.Form.FormField> adhocFormFields_ = new pbc::RepeatedField<global::Claros.Common.Form.FormField>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Claros.Common.Form.FormField> AdhocFormFields {
      get { return adhocFormFields_; }
    }

    /// <summary>Field number for the "notes" field.</summary>
    public const int NotesFieldNumber = 8;
    private static readonly pb::FieldCodec<global::Claros.Common.Core.Note> _repeated_notes_codec
        = pb::FieldCodec.ForMessage(66, global::Claros.Common.Core.Note.Parser);
    private readonly pbc::RepeatedField<global::Claros.Common.Core.Note> notes_ = new pbc::RepeatedField<global::Claros.Common.Core.Note>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Claros.Common.Core.Note> Notes {
      get { return notes_; }
    }

    /// <summary>Field number for the "auditEvents" field.</summary>
    public const int AuditEventsFieldNumber = 99;
    private static readonly pb::FieldCodec<global::Claros.Common.Core.AuditEvent> _repeated_auditEvents_codec
        = pb::FieldCodec.ForMessage(794, global::Claros.Common.Core.AuditEvent.Parser);
    private readonly pbc::RepeatedField<global::Claros.Common.Core.AuditEvent> auditEvents_ = new pbc::RepeatedField<global::Claros.Common.Core.AuditEvent>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Claros.Common.Core.AuditEvent> AuditEvents {
      get { return auditEvents_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as Form);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(Form other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Id != other.Id) return false;
      if (Name != other.Name) return false;
      if (!object.Equals(TimeWindow, other.TimeWindow)) return false;
      if (!object.Equals(FormTemplate, other.FormTemplate)) return false;
      if(!adHocFormFieldDefinitions_.Equals(other.adHocFormFieldDefinitions_)) return false;
      if(!templateFormFields_.Equals(other.templateFormFields_)) return false;
      if(!adhocFormFields_.Equals(other.adhocFormFields_)) return false;
      if(!notes_.Equals(other.notes_)) return false;
      if(!auditEvents_.Equals(other.auditEvents_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Id.Length != 0) hash ^= Id.GetHashCode();
      if (Name.Length != 0) hash ^= Name.GetHashCode();
      if (timeWindow_ != null) hash ^= TimeWindow.GetHashCode();
      if (formTemplate_ != null) hash ^= FormTemplate.GetHashCode();
      hash ^= adHocFormFieldDefinitions_.GetHashCode();
      hash ^= templateFormFields_.GetHashCode();
      hash ^= adhocFormFields_.GetHashCode();
      hash ^= notes_.GetHashCode();
      hash ^= auditEvents_.GetHashCode();
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
      if (Name.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(Name);
      }
      if (timeWindow_ != null) {
        output.WriteRawTag(26);
        output.WriteMessage(TimeWindow);
      }
      if (formTemplate_ != null) {
        output.WriteRawTag(34);
        output.WriteMessage(FormTemplate);
      }
      adHocFormFieldDefinitions_.WriteTo(output, _repeated_adHocFormFieldDefinitions_codec);
      templateFormFields_.WriteTo(output, _repeated_templateFormFields_codec);
      adhocFormFields_.WriteTo(output, _repeated_adhocFormFields_codec);
      notes_.WriteTo(output, _repeated_notes_codec);
      auditEvents_.WriteTo(output, _repeated_auditEvents_codec);
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
      if (Name.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Name);
      }
      if (timeWindow_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(TimeWindow);
      }
      if (formTemplate_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(FormTemplate);
      }
      size += adHocFormFieldDefinitions_.CalculateSize(_repeated_adHocFormFieldDefinitions_codec);
      size += templateFormFields_.CalculateSize(_repeated_templateFormFields_codec);
      size += adhocFormFields_.CalculateSize(_repeated_adhocFormFields_codec);
      size += notes_.CalculateSize(_repeated_notes_codec);
      size += auditEvents_.CalculateSize(_repeated_auditEvents_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(Form other) {
      if (other == null) {
        return;
      }
      if (other.Id.Length != 0) {
        Id = other.Id;
      }
      if (other.Name.Length != 0) {
        Name = other.Name;
      }
      if (other.timeWindow_ != null) {
        if (timeWindow_ == null) {
          TimeWindow = new global::Claros.Common.Core.TimeWindow();
        }
        TimeWindow.MergeFrom(other.TimeWindow);
      }
      if (other.formTemplate_ != null) {
        if (formTemplate_ == null) {
          FormTemplate = new global::Claros.Common.Form.FormTemplate();
        }
        FormTemplate.MergeFrom(other.FormTemplate);
      }
      adHocFormFieldDefinitions_.Add(other.adHocFormFieldDefinitions_);
      templateFormFields_.Add(other.templateFormFields_);
      adhocFormFields_.Add(other.adhocFormFields_);
      notes_.Add(other.notes_);
      auditEvents_.Add(other.auditEvents_);
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
            Name = input.ReadString();
            break;
          }
          case 26: {
            if (timeWindow_ == null) {
              TimeWindow = new global::Claros.Common.Core.TimeWindow();
            }
            input.ReadMessage(TimeWindow);
            break;
          }
          case 34: {
            if (formTemplate_ == null) {
              FormTemplate = new global::Claros.Common.Form.FormTemplate();
            }
            input.ReadMessage(FormTemplate);
            break;
          }
          case 42: {
            adHocFormFieldDefinitions_.AddEntriesFrom(input, _repeated_adHocFormFieldDefinitions_codec);
            break;
          }
          case 50: {
            templateFormFields_.AddEntriesFrom(input, _repeated_templateFormFields_codec);
            break;
          }
          case 58: {
            adhocFormFields_.AddEntriesFrom(input, _repeated_adhocFormFields_codec);
            break;
          }
          case 66: {
            notes_.AddEntriesFrom(input, _repeated_notes_codec);
            break;
          }
          case 794: {
            auditEvents_.AddEntriesFrom(input, _repeated_auditEvents_codec);
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code