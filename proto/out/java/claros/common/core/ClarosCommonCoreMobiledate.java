// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_mobiledate.proto

package claros.common.core;

public final class ClarosCommonCoreMobiledate {
  private ClarosCommonCoreMobiledate() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface MobileDateOrBuilder extends
      // @@protoc_insertion_point(interface_extends:claros.common.core.MobileDate)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>uint32 year = 1;</code>
     */
    int getYear();

    /**
     * <code>uint32 month = 2;</code>
     */
    int getMonth();

    /**
     * <code>uint32 day = 3;</code>
     */
    int getDay();
  }
  /**
   * Protobuf type {@code claros.common.core.MobileDate}
   */
  public  static final class MobileDate extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:claros.common.core.MobileDate)
      MobileDateOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use MobileDate.newBuilder() to construct.
    private MobileDate(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private MobileDate() {
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private MobileDate(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            case 8: {

              year_ = input.readUInt32();
              break;
            }
            case 16: {

              month_ = input.readUInt32();
              break;
            }
            case 24: {

              day_ = input.readUInt32();
              break;
            }
            default: {
              if (!parseUnknownField(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return claros.common.core.ClarosCommonCoreMobiledate.internal_static_claros_common_core_MobileDate_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return claros.common.core.ClarosCommonCoreMobiledate.internal_static_claros_common_core_MobileDate_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              claros.common.core.ClarosCommonCoreMobiledate.MobileDate.class, claros.common.core.ClarosCommonCoreMobiledate.MobileDate.Builder.class);
    }

    public static final int YEAR_FIELD_NUMBER = 1;
    private int year_;
    /**
     * <code>uint32 year = 1;</code>
     */
    public int getYear() {
      return year_;
    }

    public static final int MONTH_FIELD_NUMBER = 2;
    private int month_;
    /**
     * <code>uint32 month = 2;</code>
     */
    public int getMonth() {
      return month_;
    }

    public static final int DAY_FIELD_NUMBER = 3;
    private int day_;
    /**
     * <code>uint32 day = 3;</code>
     */
    public int getDay() {
      return day_;
    }

    private byte memoizedIsInitialized = -1;
    @java.lang.Override
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    @java.lang.Override
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (year_ != 0) {
        output.writeUInt32(1, year_);
      }
      if (month_ != 0) {
        output.writeUInt32(2, month_);
      }
      if (day_ != 0) {
        output.writeUInt32(3, day_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (year_ != 0) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(1, year_);
      }
      if (month_ != 0) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(2, month_);
      }
      if (day_ != 0) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(3, day_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof claros.common.core.ClarosCommonCoreMobiledate.MobileDate)) {
        return super.equals(obj);
      }
      claros.common.core.ClarosCommonCoreMobiledate.MobileDate other = (claros.common.core.ClarosCommonCoreMobiledate.MobileDate) obj;

      if (getYear()
          != other.getYear()) return false;
      if (getMonth()
          != other.getMonth()) return false;
      if (getDay()
          != other.getDay()) return false;
      if (!unknownFields.equals(other.unknownFields)) return false;
      return true;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + YEAR_FIELD_NUMBER;
      hash = (53 * hash) + getYear();
      hash = (37 * hash) + MONTH_FIELD_NUMBER;
      hash = (53 * hash) + getMonth();
      hash = (37 * hash) + DAY_FIELD_NUMBER;
      hash = (53 * hash) + getDay();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    @java.lang.Override
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(claros.common.core.ClarosCommonCoreMobiledate.MobileDate prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    @java.lang.Override
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code claros.common.core.MobileDate}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:claros.common.core.MobileDate)
        claros.common.core.ClarosCommonCoreMobiledate.MobileDateOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return claros.common.core.ClarosCommonCoreMobiledate.internal_static_claros_common_core_MobileDate_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return claros.common.core.ClarosCommonCoreMobiledate.internal_static_claros_common_core_MobileDate_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                claros.common.core.ClarosCommonCoreMobiledate.MobileDate.class, claros.common.core.ClarosCommonCoreMobiledate.MobileDate.Builder.class);
      }

      // Construct using claros.common.core.ClarosCommonCoreMobiledate.MobileDate.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      @java.lang.Override
      public Builder clear() {
        super.clear();
        year_ = 0;

        month_ = 0;

        day_ = 0;

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return claros.common.core.ClarosCommonCoreMobiledate.internal_static_claros_common_core_MobileDate_descriptor;
      }

      @java.lang.Override
      public claros.common.core.ClarosCommonCoreMobiledate.MobileDate getDefaultInstanceForType() {
        return claros.common.core.ClarosCommonCoreMobiledate.MobileDate.getDefaultInstance();
      }

      @java.lang.Override
      public claros.common.core.ClarosCommonCoreMobiledate.MobileDate build() {
        claros.common.core.ClarosCommonCoreMobiledate.MobileDate result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public claros.common.core.ClarosCommonCoreMobiledate.MobileDate buildPartial() {
        claros.common.core.ClarosCommonCoreMobiledate.MobileDate result = new claros.common.core.ClarosCommonCoreMobiledate.MobileDate(this);
        result.year_ = year_;
        result.month_ = month_;
        result.day_ = day_;
        onBuilt();
        return result;
      }

      @java.lang.Override
      public Builder clone() {
        return super.clone();
      }
      @java.lang.Override
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return super.setField(field, value);
      }
      @java.lang.Override
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return super.clearField(field);
      }
      @java.lang.Override
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return super.clearOneof(oneof);
      }
      @java.lang.Override
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return super.setRepeatedField(field, index, value);
      }
      @java.lang.Override
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return super.addRepeatedField(field, value);
      }
      @java.lang.Override
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof claros.common.core.ClarosCommonCoreMobiledate.MobileDate) {
          return mergeFrom((claros.common.core.ClarosCommonCoreMobiledate.MobileDate)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(claros.common.core.ClarosCommonCoreMobiledate.MobileDate other) {
        if (other == claros.common.core.ClarosCommonCoreMobiledate.MobileDate.getDefaultInstance()) return this;
        if (other.getYear() != 0) {
          setYear(other.getYear());
        }
        if (other.getMonth() != 0) {
          setMonth(other.getMonth());
        }
        if (other.getDay() != 0) {
          setDay(other.getDay());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      @java.lang.Override
      public final boolean isInitialized() {
        return true;
      }

      @java.lang.Override
      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        claros.common.core.ClarosCommonCoreMobiledate.MobileDate parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (claros.common.core.ClarosCommonCoreMobiledate.MobileDate) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private int year_ ;
      /**
       * <code>uint32 year = 1;</code>
       */
      public int getYear() {
        return year_;
      }
      /**
       * <code>uint32 year = 1;</code>
       */
      public Builder setYear(int value) {
        
        year_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>uint32 year = 1;</code>
       */
      public Builder clearYear() {
        
        year_ = 0;
        onChanged();
        return this;
      }

      private int month_ ;
      /**
       * <code>uint32 month = 2;</code>
       */
      public int getMonth() {
        return month_;
      }
      /**
       * <code>uint32 month = 2;</code>
       */
      public Builder setMonth(int value) {
        
        month_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>uint32 month = 2;</code>
       */
      public Builder clearMonth() {
        
        month_ = 0;
        onChanged();
        return this;
      }

      private int day_ ;
      /**
       * <code>uint32 day = 3;</code>
       */
      public int getDay() {
        return day_;
      }
      /**
       * <code>uint32 day = 3;</code>
       */
      public Builder setDay(int value) {
        
        day_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>uint32 day = 3;</code>
       */
      public Builder clearDay() {
        
        day_ = 0;
        onChanged();
        return this;
      }
      @java.lang.Override
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFields(unknownFields);
      }

      @java.lang.Override
      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:claros.common.core.MobileDate)
    }

    // @@protoc_insertion_point(class_scope:claros.common.core.MobileDate)
    private static final claros.common.core.ClarosCommonCoreMobiledate.MobileDate DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new claros.common.core.ClarosCommonCoreMobiledate.MobileDate();
    }

    public static claros.common.core.ClarosCommonCoreMobiledate.MobileDate getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<MobileDate>
        PARSER = new com.google.protobuf.AbstractParser<MobileDate>() {
      @java.lang.Override
      public MobileDate parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new MobileDate(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<MobileDate> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<MobileDate> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public claros.common.core.ClarosCommonCoreMobiledate.MobileDate getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_claros_common_core_MobileDate_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_claros_common_core_MobileDate_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n#claros_common_core_mobiledate.proto\022\022c" +
      "laros.common.core\"6\n\nMobileDate\022\014\n\004year\030" +
      "\001 \001(\r\022\r\n\005month\030\002 \001(\r\022\013\n\003day\030\003 \001(\rb\006proto" +
      "3"
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
    internal_static_claros_common_core_MobileDate_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_claros_common_core_MobileDate_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_claros_common_core_MobileDate_descriptor,
        new java.lang.String[] { "Year", "Month", "Day", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}