// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: claros_common_computation_cursor_type.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace claros.protoc.Common.Computation {

  /// <summary>Holder for reflection information generated from claros_common_computation_cursor_type.proto</summary>
  public static partial class ClarosCommonComputationCursorTypeReflection {

    #region Descriptor
    /// <summary>File descriptor for claros_common_computation_cursor_type.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ClarosCommonComputationCursorTypeReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CitjbGFyb3NfY29tbW9uX2NvbXB1dGF0aW9uX2N1cnNvcl90eXBlLnByb3Rv",
            "EhljbGFyb3MuY29tbW9uLmNvbXB1dGF0aW9uKnMKFUNvbXB1dGF0aW9uQ3Vy",
            "c29yVHlwZRIOCgpDQ19VTktOT1dOEAASDgoKQ0NfQ1VSUkVOVBABEg8KC0ND",
            "X1BSRVZJT1VTEAISCwoHQ0NfTkVYVBAEEgsKB0NDX0xBU1QQBRIPCgtDQ19B",
            "QlNPTFVURRAGYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(new[] {typeof(global::claros.protoc.Common.Computation.ComputationCursorType), }, null));
    }
    #endregion

  }
  #region Enums
  public enum ComputationCursorType {
    [pbr::OriginalName("CC_UNKNOWN")] CcUnknown = 0,
    [pbr::OriginalName("CC_CURRENT")] CcCurrent = 1,
    [pbr::OriginalName("CC_PREVIOUS")] CcPrevious = 2,
    [pbr::OriginalName("CC_NEXT")] CcNext = 4,
    [pbr::OriginalName("CC_LAST")] CcLast = 5,
    [pbr::OriginalName("CC_ABSOLUTE")] CcAbsolute = 6,
  }

  #endregion

}

#endregion Designer generated code