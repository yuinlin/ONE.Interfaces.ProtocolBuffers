// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_form_formdataentry_type.proto

package claros.common.form;

public final class ClarosCommonFormFormdataentryType {
  private ClarosCommonFormFormdataentryType() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  /**
   * Protobuf enum {@code claros.common.form.FormDataEntryType}
   */
  public enum FormDataEntryType
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>FDE_UNKNOWN = 0;</code>
     */
    FDE_UNKNOWN(0),
    /**
     * <code>FDE_INSTRUMENT = 1;</code>
     */
    FDE_INSTRUMENT(1),
    /**
     * <code>FDE_TOTALIZER = 2;</code>
     */
    FDE_TOTALIZER(2),
    /**
     * <code>FDE_CONSUMPTION = 3;</code>
     */
    FDE_CONSUMPTION(3),
    /**
     * <code>FDE_TEXT = 4;</code>
     */
    FDE_TEXT(4),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>FDE_UNKNOWN = 0;</code>
     */
    public static final int FDE_UNKNOWN_VALUE = 0;
    /**
     * <code>FDE_INSTRUMENT = 1;</code>
     */
    public static final int FDE_INSTRUMENT_VALUE = 1;
    /**
     * <code>FDE_TOTALIZER = 2;</code>
     */
    public static final int FDE_TOTALIZER_VALUE = 2;
    /**
     * <code>FDE_CONSUMPTION = 3;</code>
     */
    public static final int FDE_CONSUMPTION_VALUE = 3;
    /**
     * <code>FDE_TEXT = 4;</code>
     */
    public static final int FDE_TEXT_VALUE = 4;


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
    public static FormDataEntryType valueOf(int value) {
      return forNumber(value);
    }

    public static FormDataEntryType forNumber(int value) {
      switch (value) {
        case 0: return FDE_UNKNOWN;
        case 1: return FDE_INSTRUMENT;
        case 2: return FDE_TOTALIZER;
        case 3: return FDE_CONSUMPTION;
        case 4: return FDE_TEXT;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<FormDataEntryType>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        FormDataEntryType> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<FormDataEntryType>() {
            public FormDataEntryType findValueByNumber(int number) {
              return FormDataEntryType.forNumber(number);
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
      return claros.common.form.ClarosCommonFormFormdataentryType.getDescriptor().getEnumTypes().get(0);
    }

    private static final FormDataEntryType[] VALUES = values();

    public static FormDataEntryType valueOf(
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

    private FormDataEntryType(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:claros.common.form.FormDataEntryType)
  }


  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n+claros_common_form_formdataentry_type." +
      "proto\022\022claros.common.form*n\n\021FormDataEnt" +
      "ryType\022\017\n\013FDE_UNKNOWN\020\000\022\022\n\016FDE_INSTRUMEN" +
      "T\020\001\022\021\n\rFDE_TOTALIZER\020\002\022\023\n\017FDE_CONSUMPTIO" +
      "N\020\003\022\014\n\010FDE_TEXT\020\004b\006proto3"
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
