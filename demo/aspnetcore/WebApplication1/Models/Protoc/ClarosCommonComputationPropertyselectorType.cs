// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: claros_common_computation_propertyselector_type.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace claros.protoc.Common.Computation {

  /// <summary>Holder for reflection information generated from claros_common_computation_propertyselector_type.proto</summary>
  public static partial class ClarosCommonComputationPropertyselectorTypeReflection {

    #region Descriptor
    /// <summary>File descriptor for claros_common_computation_propertyselector_type.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ClarosCommonComputationPropertyselectorTypeReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CjVjbGFyb3NfY29tbW9uX2NvbXB1dGF0aW9uX3Byb3BlcnR5c2VsZWN0b3Jf",
            "dHlwZS5wcm90bxIZY2xhcm9zLmNvbW1vbi5jb21wdXRhdGlvbiqAAQoUUHJv",
            "cGVydHlTZWxlY3RvclR5cGUSDgoKUFNfVU5LTk9XThAAEhYKElBTX01FQVNV",
            "UkVNRU5UVElNRRABEhQKEFBTX0JFR0lOTElORVRJTUUQAhISCg5QU19FTkRM",
            "SU5FVElNRRADEhYKElBTX01FQVNVUk1FTlRWQUxVRRAEYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(new[] {typeof(global::claros.protoc.Common.Computation.PropertySelectorType), }, null));
    }
    #endregion

  }
  #region Enums
  public enum PropertySelectorType {
    [pbr::OriginalName("PS_UNKNOWN")] PsUnknown = 0,
    [pbr::OriginalName("PS_MEASUREMENTTIME")] PsMeasurementtime = 1,
    [pbr::OriginalName("PS_BEGINLINETIME")] PsBeginlinetime = 2,
    [pbr::OriginalName("PS_ENDLINETIME")] PsEndlinetime = 3,
    [pbr::OriginalName("PS_MEASURMENTVALUE")] PsMeasurmentvalue = 4,
  }

  #endregion

}

#endregion Designer generated code