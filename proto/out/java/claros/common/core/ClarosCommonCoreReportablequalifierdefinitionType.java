// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_reportablequalifierdefinition_type.proto

package claros.common.core;

public final class ClarosCommonCoreReportablequalifierdefinitionType {
  private ClarosCommonCoreReportablequalifierdefinitionType() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  /**
   * Protobuf enum {@code claros.common.core.ReportableQualifierDefinitionType}
   */
  public enum ReportableQualifierDefinitionType
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>RQD_UNKNOWN = 0;</code>
     */
    RQD_UNKNOWN(0),
    /**
     * <code>RQD_ENTEREDVALUE = 1;</code>
     */
    RQD_ENTEREDVALUE(1),
    /**
     * <code>RQD_ZERO = 2;</code>
     */
    RQD_ZERO(2),
    /**
     * <code>RQD_HALFENTERED = 3;</code>
     */
    RQD_HALFENTERED(3),
    /**
     * <code>RQD_CONSTANT = 4;</code>
     */
    RQD_CONSTANT(4),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>RQD_UNKNOWN = 0;</code>
     */
    public static final int RQD_UNKNOWN_VALUE = 0;
    /**
     * <code>RQD_ENTEREDVALUE = 1;</code>
     */
    public static final int RQD_ENTEREDVALUE_VALUE = 1;
    /**
     * <code>RQD_ZERO = 2;</code>
     */
    public static final int RQD_ZERO_VALUE = 2;
    /**
     * <code>RQD_HALFENTERED = 3;</code>
     */
    public static final int RQD_HALFENTERED_VALUE = 3;
    /**
     * <code>RQD_CONSTANT = 4;</code>
     */
    public static final int RQD_CONSTANT_VALUE = 4;


    public final int getNumber() {
      if (this == UNRECOGNIZED) {
        throw new java.lang.IllegalArgumentException(
            "Can't get the number of an unknown enum value.");
      }
      return value;
    }

    /**
     * @deprecated Use {@link #forNumber(int)} instead.
     */
    @java.lang.Deprecated
    public static ReportableQualifierDefinitionType valueOf(int value) {
      return forNumber(value);
    }

    public static ReportableQualifierDefinitionType forNumber(int value) {
      switch (value) {
        case 0: return RQD_UNKNOWN;
        case 1: return RQD_ENTEREDVALUE;
        case 2: return RQD_ZERO;
        case 3: return RQD_HALFENTERED;
        case 4: return RQD_CONSTANT;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<ReportableQualifierDefinitionType>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        ReportableQualifierDefinitionType> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<ReportableQualifierDefinitionType>() {
            public ReportableQualifierDefinitionType findValueByNumber(int number) {
              return ReportableQualifierDefinitionType.forNumber(number);
            }
          };

    public final com.google.protobuf.Descriptors.EnumValueDescriptor
        getValueDescriptor() {
      return getDescriptor().getValues().get(ordinal());
    }
    public final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptorForType() {
      return getDescriptor();
    }
    public static final com.google.protobuf.Descriptors.EnumDescriptor
        getDescriptor() {
      return claros.common.core.ClarosCommonCoreReportablequalifierdefinitionType.getDescriptor().getEnumTypes().get(0);
    }

    private static final ReportableQualifierDefinitionType[] VALUES = values();

    public static ReportableQualifierDefinitionType valueOf(
        com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
      if (desc.getType() != getDescriptor()) {
        throw new java.lang.IllegalArgumentException(
          "EnumValueDescriptor is not for this type.");
      }
      if (desc.getIndex() == -1) {
        return UNRECOGNIZED;
      }
      return VALUES[desc.getIndex()];
    }

    private final int value;

    private ReportableQualifierDefinitionType(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:claros.common.core.ReportableQualifierDefinitionType)
  }


  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n;claros_common_core_reportablequalifier" +
      "definition_type.proto\022\022claros.common.cor" +
      "e*\177\n!ReportableQualifierDefinitionType\022\017" +
      "\n\013RQD_UNKNOWN\020\000\022\024\n\020RQD_ENTEREDVALUE\020\001\022\014\n" +
      "\010RQD_ZERO\020\002\022\023\n\017RQD_HALFENTERED\020\003\022\020\n\014RQD_" +
      "CONSTANT\020\004b\006proto3"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
        new com.google.protobuf.Descriptors.FileDescriptor.    InternalDescriptorAssigner() {
          public com.google.protobuf.ExtensionRegistry assignDescriptors(
              com.google.protobuf.Descriptors.FileDescriptor root) {
            descriptor = root;
            return null;
          }
        };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        }, assigner);
  }

  // @@protoc_insertion_point(outer_class_scope)
}
