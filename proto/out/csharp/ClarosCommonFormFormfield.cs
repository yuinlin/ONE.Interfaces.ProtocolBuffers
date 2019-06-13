// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: claros_common_form_formfield.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Claros.Common.Form {

  /// <summary>Holder for reflection information generated from claros_common_form_formfield.proto</summary>
  public static partial class ClarosCommonFormFormfieldReflection {

    #region Descriptor
    /// <summary>File descriptor for claros_common_form_formfield.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ClarosCommonFormFormfieldReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CiJjbGFyb3NfY29tbW9uX2Zvcm1fZm9ybWZpZWxkLnByb3RvEhJjbGFyb3Mu",
            "Y29tbW9uLmZvcm0aK2NsYXJvc19jb21tb25fZm9ybV9mb3JtZGF0YWVudHJ5",
            "X3R5cGUucHJvdG8aMmNsYXJvc19vcGVyYXRpb25zX3NwcmVhZHNoZWV0X3dv",
            "cmtzaGVldF9jZWxsLnByb3RvGhxjbGFyb3NfaW5zdHJ1bWVudF9kYXRhLnBy",
            "b3RvIqgCCglGb3JtRmllbGQSDAoEZ3VpZBgBIAEoCRIdChVmb3JtRmllbGRE",
            "ZWZpbml0aW9uSWQYAiABKAkSQAoRZm9ybURhdGFFbnRyeVR5cGUYAyABKA4y",
            "JS5jbGFyb3MuY29tbW9uLmZvcm0uRm9ybURhdGFFbnRyeVR5cGUSHQoVaXNE",
            "YXRhRW50cnlUeXBlTG9ja2VkGAQgASgIEgwKBG5hbWUYBSABKAkSMwoEY2Vs",
            "bBgGIAEoCzIjLmNsYXJvcy5vcGVyYXRpb25zLnNwcmVhZHNoZWV0LkNlbGxI",
            "ABI5Cg5pbnN0cnVtZW50RGF0YRgHIAMoCzIhLmNsYXJvcy5pbnN0cnVtZW50",
            "Lkluc3RydW1lbnREYXRhQg8KDUZvcm1GaWVsZERhdGFiBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Claros.Common.Form.ClarosCommonFormFormdataentryTypeReflection.Descriptor, global::Claros.Operations.Spreadsheet.ClarosOperationsSpreadsheetWorksheetCellReflection.Descriptor, global::Claros.Instrument.ClarosInstrumentDataReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Claros.Common.Form.FormField), global::Claros.Common.Form.FormField.Parser, new[]{ "Guid", "FormFieldDefinitionId", "FormDataEntryType", "IsDataEntryTypeLocked", "Name", "Cell", "InstrumentData" }, new[]{ "FormFieldData" }, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class FormField : pb::IMessage<FormField> {
    private static readonly pb::MessageParser<FormField> _parser = new pb::MessageParser<FormField>(() => new FormField());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<FormField> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Claros.Common.Form.ClarosCommonFormFormfieldReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormField() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormField(FormField other) : this() {
      guid_ = other.guid_;
      formFieldDefinitionId_ = other.formFieldDefinitionId_;
      formDataEntryType_ = other.formDataEntryType_;
      isDataEntryTypeLocked_ = other.isDataEntryTypeLocked_;
      name_ = other.name_;
      instrumentData_ = other.instrumentData_.Clone();
      switch (other.FormFieldDataCase) {
        case FormFieldDataOneofCase.Cell:
          Cell = other.Cell.Clone();
          break;
      }

      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormField Clone() {
      return new FormField(this);
    }

    /// <summary>Field number for the "guid" field.</summary>
    public const int GuidFieldNumber = 1;
    private string guid_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Guid {
      get { return guid_; }
      set {
        guid_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "formFieldDefinitionId" field.</summary>
    public const int FormFieldDefinitionIdFieldNumber = 2;
    private string formFieldDefinitionId_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string FormFieldDefinitionId {
      get { return formFieldDefinitionId_; }
      set {
        formFieldDefinitionId_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "formDataEntryType" field.</summary>
    public const int FormDataEntryTypeFieldNumber = 3;
    private global::Claros.Common.Form.FormDataEntryType formDataEntryType_ = 0;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Claros.Common.Form.FormDataEntryType FormDataEntryType {
      get { return formDataEntryType_; }
      set {
        formDataEntryType_ = value;
      }
    }

    /// <summary>Field number for the "isDataEntryTypeLocked" field.</summary>
    public const int IsDataEntryTypeLockedFieldNumber = 4;
    private bool isDataEntryTypeLocked_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool IsDataEntryTypeLocked {
      get { return isDataEntryTypeLocked_; }
      set {
        isDataEntryTypeLocked_ = value;
      }
    }

    /// <summary>Field number for the "name" field.</summary>
    public const int NameFieldNumber = 5;
    private string name_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Name {
      get { return name_; }
      set {
        name_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "cell" field.</summary>
    public const int CellFieldNumber = 6;
    /// <summary>
    /// AdHocFormField adHocFormField
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Claros.Operations.Spreadsheet.Cell Cell {
      get { return formFieldDataCase_ == FormFieldDataOneofCase.Cell ? (global::Claros.Operations.Spreadsheet.Cell) formFieldData_ : null; }
      set {
        formFieldData_ = value;
        formFieldDataCase_ = value == null ? FormFieldDataOneofCase.None : FormFieldDataOneofCase.Cell;
      }
    }

    /// <summary>Field number for the "instrumentData" field.</summary>
    public const int InstrumentDataFieldNumber = 7;
    private static readonly pb::FieldCodec<global::Claros.Instrument.InstrumentData> _repeated_instrumentData_codec
        = pb::FieldCodec.ForMessage(58, global::Claros.Instrument.InstrumentData.Parser);
    private readonly pbc::RepeatedField<global::Claros.Instrument.InstrumentData> instrumentData_ = new pbc::RepeatedField<global::Claros.Instrument.InstrumentData>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Claros.Instrument.InstrumentData> InstrumentData {
      get { return instrumentData_; }
    }

    private object formFieldData_;
    /// <summary>Enum of possible cases for the "FormFieldData" oneof.</summary>
    public enum FormFieldDataOneofCase {
      None = 0,
      Cell = 6,
    }
    private FormFieldDataOneofCase formFieldDataCase_ = FormFieldDataOneofCase.None;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FormFieldDataOneofCase FormFieldDataCase {
      get { return formFieldDataCase_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void ClearFormFieldData() {
      formFieldDataCase_ = FormFieldDataOneofCase.None;
      formFieldData_ = null;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as FormField);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(FormField other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Guid != other.Guid) return false;
      if (FormFieldDefinitionId != other.FormFieldDefinitionId) return false;
      if (FormDataEntryType != other.FormDataEntryType) return false;
      if (IsDataEntryTypeLocked != other.IsDataEntryTypeLocked) return false;
      if (Name != other.Name) return false;
      if (!object.Equals(Cell, other.Cell)) return false;
      if(!instrumentData_.Equals(other.instrumentData_)) return false;
      if (FormFieldDataCase != other.FormFieldDataCase) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Guid.Length != 0) hash ^= Guid.GetHashCode();
      if (FormFieldDefinitionId.Length != 0) hash ^= FormFieldDefinitionId.GetHashCode();
      if (FormDataEntryType != 0) hash ^= FormDataEntryType.GetHashCode();
      if (IsDataEntryTypeLocked != false) hash ^= IsDataEntryTypeLocked.GetHashCode();
      if (Name.Length != 0) hash ^= Name.GetHashCode();
      if (formFieldDataCase_ == FormFieldDataOneofCase.Cell) hash ^= Cell.GetHashCode();
      hash ^= instrumentData_.GetHashCode();
      hash ^= (int) formFieldDataCase_;
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
      if (Guid.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Guid);
      }
      if (FormFieldDefinitionId.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(FormFieldDefinitionId);
      }
      if (FormDataEntryType != 0) {
        output.WriteRawTag(24);
        output.WriteEnum((int) FormDataEntryType);
      }
      if (IsDataEntryTypeLocked != false) {
        output.WriteRawTag(32);
        output.WriteBool(IsDataEntryTypeLocked);
      }
      if (Name.Length != 0) {
        output.WriteRawTag(42);
        output.WriteString(Name);
      }
      if (formFieldDataCase_ == FormFieldDataOneofCase.Cell) {
        output.WriteRawTag(50);
        output.WriteMessage(Cell);
      }
      instrumentData_.WriteTo(output, _repeated_instrumentData_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (Guid.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Guid);
      }
      if (FormFieldDefinitionId.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(FormFieldDefinitionId);
      }
      if (FormDataEntryType != 0) {
        size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) FormDataEntryType);
      }
      if (IsDataEntryTypeLocked != false) {
        size += 1 + 1;
      }
      if (Name.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Name);
      }
      if (formFieldDataCase_ == FormFieldDataOneofCase.Cell) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Cell);
      }
      size += instrumentData_.CalculateSize(_repeated_instrumentData_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(FormField other) {
      if (other == null) {
        return;
      }
      if (other.Guid.Length != 0) {
        Guid = other.Guid;
      }
      if (other.FormFieldDefinitionId.Length != 0) {
        FormFieldDefinitionId = other.FormFieldDefinitionId;
      }
      if (other.FormDataEntryType != 0) {
        FormDataEntryType = other.FormDataEntryType;
      }
      if (other.IsDataEntryTypeLocked != false) {
        IsDataEntryTypeLocked = other.IsDataEntryTypeLocked;
      }
      if (other.Name.Length != 0) {
        Name = other.Name;
      }
      instrumentData_.Add(other.instrumentData_);
      switch (other.FormFieldDataCase) {
        case FormFieldDataOneofCase.Cell:
          if (Cell == null) {
            Cell = new global::Claros.Operations.Spreadsheet.Cell();
          }
          Cell.MergeFrom(other.Cell);
          break;
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
            Guid = input.ReadString();
            break;
          }
          case 18: {
            FormFieldDefinitionId = input.ReadString();
            break;
          }
          case 24: {
            FormDataEntryType = (global::Claros.Common.Form.FormDataEntryType) input.ReadEnum();
            break;
          }
          case 32: {
            IsDataEntryTypeLocked = input.ReadBool();
            break;
          }
          case 42: {
            Name = input.ReadString();
            break;
          }
          case 50: {
            global::Claros.Operations.Spreadsheet.Cell subBuilder = new global::Claros.Operations.Spreadsheet.Cell();
            if (formFieldDataCase_ == FormFieldDataOneofCase.Cell) {
              subBuilder.MergeFrom(Cell);
            }
            input.ReadMessage(subBuilder);
            Cell = subBuilder;
            break;
          }
          case 58: {
            instrumentData_.AddEntriesFrom(input, _repeated_instrumentData_codec);
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code