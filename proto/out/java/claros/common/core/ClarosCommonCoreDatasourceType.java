// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_datasource_type.proto

package claros.common.core;

public final class ClarosCommonCoreDatasourceType {
  private ClarosCommonCoreDatasourceType() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  /**
   * Protobuf enum {@code claros.common.core.DataSourceType}
   */
  public enum DataSourceType
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>DS_UNKNOWN = 0;</code>
     */
    DS_UNKNOWN(0),
    /**
     * <code>DS_FORM = 1;</code>
     */
    DS_FORM(1),
    /**
     * <code>DS_COMPUTATION = 2;</code>
     */
    DS_COMPUTATION(2),
    /**
     * <code>DS_SPREADSHEET = 3;</code>
     */
    DS_SPREADSHEET(3),
    /**
     * <code>DS_INSTRUMENTMEASUREMENT = 4;</code>
     */
    DS_INSTRUMENTMEASUREMENT(4),
    /**
     * <code>DS_IMPORT = 5;</code>
     */
    DS_IMPORT(5),
    /**
     * <code>DS_SPREADSHEET_DEFINITION = 6;</code>
     */
    DS_SPREADSHEET_DEFINITION(6),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>DS_UNKNOWN = 0;</code>
     */
    public static final int DS_UNKNOWN_VALUE = 0;
    /**
     * <code>DS_FORM = 1;</code>
     */
    public static final int DS_FORM_VALUE = 1;
    /**
     * <code>DS_COMPUTATION = 2;</code>
     */
    public static final int DS_COMPUTATION_VALUE = 2;
    /**
     * <code>DS_SPREADSHEET = 3;</code>
     */
    public static final int DS_SPREADSHEET_VALUE = 3;
    /**
     * <code>DS_INSTRUMENTMEASUREMENT = 4;</code>
     */
    public static final int DS_INSTRUMENTMEASUREMENT_VALUE = 4;
    /**
     * <code>DS_IMPORT = 5;</code>
     */
    public static final int DS_IMPORT_VALUE = 5;
    /**
     * <code>DS_SPREADSHEET_DEFINITION = 6;</code>
     */
    public static final int DS_SPREADSHEET_DEFINITION_VALUE = 6;


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
    public static DataSourceType valueOf(int value) {
      return forNumber(value);
    }

    public static DataSourceType forNumber(int value) {
      switch (value) {
        case 0: return DS_UNKNOWN;
        case 1: return DS_FORM;
        case 2: return DS_COMPUTATION;
        case 3: return DS_SPREADSHEET;
        case 4: return DS_INSTRUMENTMEASUREMENT;
        case 5: return DS_IMPORT;
        case 6: return DS_SPREADSHEET_DEFINITION;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<DataSourceType>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        DataSourceType> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<DataSourceType>() {
            public DataSourceType findValueByNumber(int number) {
              return DataSourceType.forNumber(number);
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
      return claros.common.core.ClarosCommonCoreDatasourceType.getDescriptor().getEnumTypes().get(0);
    }

    private static final DataSourceType[] VALUES = values();

    public static DataSourceType valueOf(
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

    private DataSourceType(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:claros.common.core.DataSourceType)
  }


  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n(claros_common_core_datasource_type.pro" +
      "to\022\022claros.common.core*\241\001\n\016DataSourceTyp" +
      "e\022\016\n\nDS_UNKNOWN\020\000\022\013\n\007DS_FORM\020\001\022\022\n\016DS_COM" +
      "PUTATION\020\002\022\022\n\016DS_SPREADSHEET\020\003\022\034\n\030DS_INS" +
      "TRUMENTMEASUREMENT\020\004\022\r\n\tDS_IMPORT\020\005\022\035\n\031D" +
      "S_SPREADSHEET_DEFINITION\020\006b\006proto3"
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