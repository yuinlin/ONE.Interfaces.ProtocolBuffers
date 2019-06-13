// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: claros_operations_spreadsheet_worksheet_view.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Claros.Operations.Spreadsheet {

  /// <summary>Holder for reflection information generated from claros_operations_spreadsheet_worksheet_view.proto</summary>
  public static partial class ClarosOperationsSpreadsheetWorksheetViewReflection {

    #region Descriptor
    /// <summary>File descriptor for claros_operations_spreadsheet_worksheet_view.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ClarosOperationsSpreadsheetWorksheetViewReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CjJjbGFyb3Nfb3BlcmF0aW9uc19zcHJlYWRzaGVldF93b3Jrc2hlZXRfdmll",
            "dy5wcm90bxIdY2xhcm9zLm9wZXJhdGlvbnMuc3ByZWFkc2hlZXQaMmNsYXJv",
            "c19vcGVyYXRpb25zX3NwcmVhZHNoZWV0X3dvcmtzaGVldF90eXBlLnByb3Rv",
            "IuwBCg1Xb3Jrc2hlZXRWaWV3EkMKDXdvcmtzaGVldFR5cGUYASABKA4yLC5j",
            "bGFyb3Mub3BlcmF0aW9ucy5zcHJlYWRzaGVldC5Xb3Jrc2hlZXRUeXBlElIK",
            "C2NvbHVtbk1hc2tzGAIgAygLMj0uY2xhcm9zLm9wZXJhdGlvbnMuc3ByZWFk",
            "c2hlZXQuV29ya3NoZWV0Vmlldy5Db2x1bW5NYXNrc0VudHJ5Eg4KBmxheW91",
            "dBgDIAEoCRoyChBDb2x1bW5NYXNrc0VudHJ5EgsKA2tleRgBIAEoDRINCgV2",
            "YWx1ZRgCIAEoCToCOAFiBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Claros.Operations.Spreadsheet.ClarosOperationsSpreadsheetWorksheetTypeReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Claros.Operations.Spreadsheet.WorksheetView), global::Claros.Operations.Spreadsheet.WorksheetView.Parser, new[]{ "WorksheetType", "ColumnMasks", "Layout" }, null, null, new pbr::GeneratedClrTypeInfo[] { null, })
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class WorksheetView : pb::IMessage<WorksheetView> {
    private static readonly pb::MessageParser<WorksheetView> _parser = new pb::MessageParser<WorksheetView>(() => new WorksheetView());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<WorksheetView> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Claros.Operations.Spreadsheet.ClarosOperationsSpreadsheetWorksheetViewReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public WorksheetView() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public WorksheetView(WorksheetView other) : this() {
      worksheetType_ = other.worksheetType_;
      columnMasks_ = other.columnMasks_.Clone();
      layout_ = other.layout_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public WorksheetView Clone() {
      return new WorksheetView(this);
    }

    /// <summary>Field number for the "worksheetType" field.</summary>
    public const int WorksheetTypeFieldNumber = 1;
    private global::Claros.Operations.Spreadsheet.WorksheetType worksheetType_ = 0;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Claros.Operations.Spreadsheet.WorksheetType WorksheetType {
      get { return worksheetType_; }
      set {
        worksheetType_ = value;
      }
    }

    /// <summary>Field number for the "columnMasks" field.</summary>
    public const int ColumnMasksFieldNumber = 2;
    private static readonly pbc::MapField<uint, string>.Codec _map_columnMasks_codec
        = new pbc::MapField<uint, string>.Codec(pb::FieldCodec.ForUInt32(8), pb::FieldCodec.ForString(18), 18);
    private readonly pbc::MapField<uint, string> columnMasks_ = new pbc::MapField<uint, string>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::MapField<uint, string> ColumnMasks {
      get { return columnMasks_; }
    }

    /// <summary>Field number for the "layout" field.</summary>
    public const int LayoutFieldNumber = 3;
    private string layout_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Layout {
      get { return layout_; }
      set {
        layout_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as WorksheetView);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(WorksheetView other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (WorksheetType != other.WorksheetType) return false;
      if (!ColumnMasks.Equals(other.ColumnMasks)) return false;
      if (Layout != other.Layout) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (WorksheetType != 0) hash ^= WorksheetType.GetHashCode();
      hash ^= ColumnMasks.GetHashCode();
      if (Layout.Length != 0) hash ^= Layout.GetHashCode();
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
      if (WorksheetType != 0) {
        output.WriteRawTag(8);
        output.WriteEnum((int) WorksheetType);
      }
      columnMasks_.WriteTo(output, _map_columnMasks_codec);
      if (Layout.Length != 0) {
        output.WriteRawTag(26);
        output.WriteString(Layout);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (WorksheetType != 0) {
        size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) WorksheetType);
      }
      size += columnMasks_.CalculateSize(_map_columnMasks_codec);
      if (Layout.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Layout);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(WorksheetView other) {
      if (other == null) {
        return;
      }
      if (other.WorksheetType != 0) {
        WorksheetType = other.WorksheetType;
      }
      columnMasks_.Add(other.columnMasks_);
      if (other.Layout.Length != 0) {
        Layout = other.Layout;
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
          case 8: {
            WorksheetType = (global::Claros.Operations.Spreadsheet.WorksheetType) input.ReadEnum();
            break;
          }
          case 18: {
            columnMasks_.AddEntriesFrom(input, _map_columnMasks_codec);
            break;
          }
          case 26: {
            Layout = input.ReadString();
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code