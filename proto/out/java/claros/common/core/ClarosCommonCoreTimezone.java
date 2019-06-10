// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_timezone.proto

package claros.common.core;

public final class ClarosCommonCoreTimezone {
  private ClarosCommonCoreTimezone() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  /**
   * Protobuf enum {@code claros.common.core.TimeZone}
   */
  public enum TimeZone
      implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>TZ_UNKNOWN = 0;</code>
     */
    TZ_UNKNOWN(0),
    /**
     * <code>TZ_UTC = 1;</code>
     */
    TZ_UTC(1),
    UNRECOGNIZED(-1),
    ;

    /**
     * <code>TZ_UNKNOWN = 0;</code>
     */
    public static final int TZ_UNKNOWN_VALUE = 0;
    /**
     * <code>TZ_UTC = 1;</code>
     */
    public static final int TZ_UTC_VALUE = 1;


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
    public static TimeZone valueOf(int value) {
      return forNumber(value);
    }

    public static TimeZone forNumber(int value) {
      switch (value) {
        case 0: return TZ_UNKNOWN;
        case 1: return TZ_UTC;
        default: return null;
      }
    }

    public static com.google.protobuf.Internal.EnumLiteMap<TimeZone>
        internalGetValueMap() {
      return internalValueMap;
    }
    private static final com.google.protobuf.Internal.EnumLiteMap<
        TimeZone> internalValueMap =
          new com.google.protobuf.Internal.EnumLiteMap<TimeZone>() {
            public TimeZone findValueByNumber(int number) {
              return TimeZone.forNumber(number);
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
      return claros.common.core.ClarosCommonCoreTimezone.getDescriptor().getEnumTypes().get(0);
    }

    private static final TimeZone[] VALUES = values();

    public static TimeZone valueOf(
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

    private TimeZone(int value) {
      this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:claros.common.core.TimeZone)
  }


  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n!claros_common_core_timezone.proto\022\022cla" +
      "ros.common.core*&\n\010TimeZone\022\016\n\nTZ_UNKNOW" +
      "N\020\000\022\n\n\006TZ_UTC\020\001b\006proto3"
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
