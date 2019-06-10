// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_limit.proto

package claros.common.core;

public final class ClarosCommonCoreLimit {
  private ClarosCommonCoreLimit() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface LimitOrBuilder extends
      // @@protoc_insertion_point(interface_extends:claros.common.core.Limit)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string i18nKey = 1;</code>
     */
    java.lang.String getI18NKey();
    /**
     * <code>string i18nKey = 1;</code>
     */
    com.google.protobuf.ByteString
        getI18NKeyBytes();

    /**
     * <code>.claros.common.core.LimitType limitType = 2;</code>
     */
    int getLimitTypeValue();
    /**
     * <code>.claros.common.core.LimitType limitType = 2;</code>
     */
    claros.common.core.ClarosCommonCoreLimitType.LimitType getLimitType();

    /**
     * <code>double value = 3;</code>
     */
    double getValue();

    /**
     * <code>uint32 unitId = 4;</code>
     */
    int getUnitId();

    /**
     * <code>.claros.common.core.Recurrence recurrence = 5;</code>
     */
    boolean hasRecurrence();
    /**
     * <code>.claros.common.core.Recurrence recurrence = 5;</code>
     */
    claros.common.core.ClarosCommonCoreRecurrence.Recurrence getRecurrence();
    /**
     * <code>.claros.common.core.Recurrence recurrence = 5;</code>
     */
    claros.common.core.ClarosCommonCoreRecurrence.RecurrenceOrBuilder getRecurrenceOrBuilder();
  }
  /**
   * Protobuf type {@code claros.common.core.Limit}
   */
  public  static final class Limit extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:claros.common.core.Limit)
      LimitOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Limit.newBuilder() to construct.
    private Limit(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Limit() {
      i18NKey_ = "";
      limitType_ = 0;
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Limit(
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
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();

              i18NKey_ = s;
              break;
            }
            case 16: {
              int rawValue = input.readEnum();

              limitType_ = rawValue;
              break;
            }
            case 25: {

              value_ = input.readDouble();
              break;
            }
            case 32: {

              unitId_ = input.readUInt32();
              break;
            }
            case 42: {
              claros.common.core.ClarosCommonCoreRecurrence.Recurrence.Builder subBuilder = null;
              if (recurrence_ != null) {
                subBuilder = recurrence_.toBuilder();
              }
              recurrence_ = input.readMessage(claros.common.core.ClarosCommonCoreRecurrence.Recurrence.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(recurrence_);
                recurrence_ = subBuilder.buildPartial();
              }

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
      return claros.common.core.ClarosCommonCoreLimit.internal_static_claros_common_core_Limit_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return claros.common.core.ClarosCommonCoreLimit.internal_static_claros_common_core_Limit_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              claros.common.core.ClarosCommonCoreLimit.Limit.class, claros.common.core.ClarosCommonCoreLimit.Limit.Builder.class);
    }

    public static final int I18NKEY_FIELD_NUMBER = 1;
    private volatile java.lang.Object i18NKey_;
    /**
     * <code>string i18nKey = 1;</code>
     */
    public java.lang.String getI18NKey() {
      java.lang.Object ref = i18NKey_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        i18NKey_ = s;
        return s;
      }
    }
    /**
     * <code>string i18nKey = 1;</code>
     */
    public com.google.protobuf.ByteString
        getI18NKeyBytes() {
      java.lang.Object ref = i18NKey_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        i18NKey_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int LIMITTYPE_FIELD_NUMBER = 2;
    private int limitType_;
    /**
     * <code>.claros.common.core.LimitType limitType = 2;</code>
     */
    public int getLimitTypeValue() {
      return limitType_;
    }
    /**
     * <code>.claros.common.core.LimitType limitType = 2;</code>
     */
    public claros.common.core.ClarosCommonCoreLimitType.LimitType getLimitType() {
      @SuppressWarnings("deprecation")
      claros.common.core.ClarosCommonCoreLimitType.LimitType result = claros.common.core.ClarosCommonCoreLimitType.LimitType.valueOf(limitType_);
      return result == null ? claros.common.core.ClarosCommonCoreLimitType.LimitType.UNRECOGNIZED : result;
    }

    public static final int VALUE_FIELD_NUMBER = 3;
    private double value_;
    /**
     * <code>double value = 3;</code>
     */
    public double getValue() {
      return value_;
    }

    public static final int UNITID_FIELD_NUMBER = 4;
    private int unitId_;
    /**
     * <code>uint32 unitId = 4;</code>
     */
    public int getUnitId() {
      return unitId_;
    }

    public static final int RECURRENCE_FIELD_NUMBER = 5;
    private claros.common.core.ClarosCommonCoreRecurrence.Recurrence recurrence_;
    /**
     * <code>.claros.common.core.Recurrence recurrence = 5;</code>
     */
    public boolean hasRecurrence() {
      return recurrence_ != null;
    }
    /**
     * <code>.claros.common.core.Recurrence recurrence = 5;</code>
     */
    public claros.common.core.ClarosCommonCoreRecurrence.Recurrence getRecurrence() {
      return recurrence_ == null ? claros.common.core.ClarosCommonCoreRecurrence.Recurrence.getDefaultInstance() : recurrence_;
    }
    /**
     * <code>.claros.common.core.Recurrence recurrence = 5;</code>
     */
    public claros.common.core.ClarosCommonCoreRecurrence.RecurrenceOrBuilder getRecurrenceOrBuilder() {
      return getRecurrence();
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
      if (!getI18NKeyBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, i18NKey_);
      }
      if (limitType_ != claros.common.core.ClarosCommonCoreLimitType.LimitType.L_UNKNOWN.getNumber()) {
        output.writeEnum(2, limitType_);
      }
      if (value_ != 0D) {
        output.writeDouble(3, value_);
      }
      if (unitId_ != 0) {
        output.writeUInt32(4, unitId_);
      }
      if (recurrence_ != null) {
        output.writeMessage(5, getRecurrence());
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getI18NKeyBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, i18NKey_);
      }
      if (limitType_ != claros.common.core.ClarosCommonCoreLimitType.LimitType.L_UNKNOWN.getNumber()) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(2, limitType_);
      }
      if (value_ != 0D) {
        size += com.google.protobuf.CodedOutputStream
          .computeDoubleSize(3, value_);
      }
      if (unitId_ != 0) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(4, unitId_);
      }
      if (recurrence_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(5, getRecurrence());
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
      if (!(obj instanceof claros.common.core.ClarosCommonCoreLimit.Limit)) {
        return super.equals(obj);
      }
      claros.common.core.ClarosCommonCoreLimit.Limit other = (claros.common.core.ClarosCommonCoreLimit.Limit) obj;

      if (!getI18NKey()
          .equals(other.getI18NKey())) return false;
      if (limitType_ != other.limitType_) return false;
      if (java.lang.Double.doubleToLongBits(getValue())
          != java.lang.Double.doubleToLongBits(
              other.getValue())) return false;
      if (getUnitId()
          != other.getUnitId()) return false;
      if (hasRecurrence() != other.hasRecurrence()) return false;
      if (hasRecurrence()) {
        if (!getRecurrence()
            .equals(other.getRecurrence())) return false;
      }
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
      hash = (37 * hash) + I18NKEY_FIELD_NUMBER;
      hash = (53 * hash) + getI18NKey().hashCode();
      hash = (37 * hash) + LIMITTYPE_FIELD_NUMBER;
      hash = (53 * hash) + limitType_;
      hash = (37 * hash) + VALUE_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          java.lang.Double.doubleToLongBits(getValue()));
      hash = (37 * hash) + UNITID_FIELD_NUMBER;
      hash = (53 * hash) + getUnitId();
      if (hasRecurrence()) {
        hash = (37 * hash) + RECURRENCE_FIELD_NUMBER;
        hash = (53 * hash) + getRecurrence().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static claros.common.core.ClarosCommonCoreLimit.Limit parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.common.core.ClarosCommonCoreLimit.Limit parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreLimit.Limit parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.common.core.ClarosCommonCoreLimit.Limit parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreLimit.Limit parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.common.core.ClarosCommonCoreLimit.Limit parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreLimit.Limit parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static claros.common.core.ClarosCommonCoreLimit.Limit parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreLimit.Limit parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static claros.common.core.ClarosCommonCoreLimit.Limit parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreLimit.Limit parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static claros.common.core.ClarosCommonCoreLimit.Limit parseFrom(
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
    public static Builder newBuilder(claros.common.core.ClarosCommonCoreLimit.Limit prototype) {
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
     * Protobuf type {@code claros.common.core.Limit}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:claros.common.core.Limit)
        claros.common.core.ClarosCommonCoreLimit.LimitOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return claros.common.core.ClarosCommonCoreLimit.internal_static_claros_common_core_Limit_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return claros.common.core.ClarosCommonCoreLimit.internal_static_claros_common_core_Limit_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                claros.common.core.ClarosCommonCoreLimit.Limit.class, claros.common.core.ClarosCommonCoreLimit.Limit.Builder.class);
      }

      // Construct using claros.common.core.ClarosCommonCoreLimit.Limit.newBuilder()
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
        i18NKey_ = "";

        limitType_ = 0;

        value_ = 0D;

        unitId_ = 0;

        if (recurrenceBuilder_ == null) {
          recurrence_ = null;
        } else {
          recurrence_ = null;
          recurrenceBuilder_ = null;
        }
        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return claros.common.core.ClarosCommonCoreLimit.internal_static_claros_common_core_Limit_descriptor;
      }

      @java.lang.Override
      public claros.common.core.ClarosCommonCoreLimit.Limit getDefaultInstanceForType() {
        return claros.common.core.ClarosCommonCoreLimit.Limit.getDefaultInstance();
      }

      @java.lang.Override
      public claros.common.core.ClarosCommonCoreLimit.Limit build() {
        claros.common.core.ClarosCommonCoreLimit.Limit result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public claros.common.core.ClarosCommonCoreLimit.Limit buildPartial() {
        claros.common.core.ClarosCommonCoreLimit.Limit result = new claros.common.core.ClarosCommonCoreLimit.Limit(this);
        result.i18NKey_ = i18NKey_;
        result.limitType_ = limitType_;
        result.value_ = value_;
        result.unitId_ = unitId_;
        if (recurrenceBuilder_ == null) {
          result.recurrence_ = recurrence_;
        } else {
          result.recurrence_ = recurrenceBuilder_.build();
        }
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
        if (other instanceof claros.common.core.ClarosCommonCoreLimit.Limit) {
          return mergeFrom((claros.common.core.ClarosCommonCoreLimit.Limit)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(claros.common.core.ClarosCommonCoreLimit.Limit other) {
        if (other == claros.common.core.ClarosCommonCoreLimit.Limit.getDefaultInstance()) return this;
        if (!other.getI18NKey().isEmpty()) {
          i18NKey_ = other.i18NKey_;
          onChanged();
        }
        if (other.limitType_ != 0) {
          setLimitTypeValue(other.getLimitTypeValue());
        }
        if (other.getValue() != 0D) {
          setValue(other.getValue());
        }
        if (other.getUnitId() != 0) {
          setUnitId(other.getUnitId());
        }
        if (other.hasRecurrence()) {
          mergeRecurrence(other.getRecurrence());
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
        claros.common.core.ClarosCommonCoreLimit.Limit parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (claros.common.core.ClarosCommonCoreLimit.Limit) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object i18NKey_ = "";
      /**
       * <code>string i18nKey = 1;</code>
       */
      public java.lang.String getI18NKey() {
        java.lang.Object ref = i18NKey_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          i18NKey_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string i18nKey = 1;</code>
       */
      public com.google.protobuf.ByteString
          getI18NKeyBytes() {
        java.lang.Object ref = i18NKey_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          i18NKey_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string i18nKey = 1;</code>
       */
      public Builder setI18NKey(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        i18NKey_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string i18nKey = 1;</code>
       */
      public Builder clearI18NKey() {
        
        i18NKey_ = getDefaultInstance().getI18NKey();
        onChanged();
        return this;
      }
      /**
       * <code>string i18nKey = 1;</code>
       */
      public Builder setI18NKeyBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        i18NKey_ = value;
        onChanged();
        return this;
      }

      private int limitType_ = 0;
      /**
       * <code>.claros.common.core.LimitType limitType = 2;</code>
       */
      public int getLimitTypeValue() {
        return limitType_;
      }
      /**
       * <code>.claros.common.core.LimitType limitType = 2;</code>
       */
      public Builder setLimitTypeValue(int value) {
        limitType_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>.claros.common.core.LimitType limitType = 2;</code>
       */
      public claros.common.core.ClarosCommonCoreLimitType.LimitType getLimitType() {
        @SuppressWarnings("deprecation")
        claros.common.core.ClarosCommonCoreLimitType.LimitType result = claros.common.core.ClarosCommonCoreLimitType.LimitType.valueOf(limitType_);
        return result == null ? claros.common.core.ClarosCommonCoreLimitType.LimitType.UNRECOGNIZED : result;
      }
      /**
       * <code>.claros.common.core.LimitType limitType = 2;</code>
       */
      public Builder setLimitType(claros.common.core.ClarosCommonCoreLimitType.LimitType value) {
        if (value == null) {
          throw new NullPointerException();
        }
        
        limitType_ = value.getNumber();
        onChanged();
        return this;
      }
      /**
       * <code>.claros.common.core.LimitType limitType = 2;</code>
       */
      public Builder clearLimitType() {
        
        limitType_ = 0;
        onChanged();
        return this;
      }

      private double value_ ;
      /**
       * <code>double value = 3;</code>
       */
      public double getValue() {
        return value_;
      }
      /**
       * <code>double value = 3;</code>
       */
      public Builder setValue(double value) {
        
        value_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>double value = 3;</code>
       */
      public Builder clearValue() {
        
        value_ = 0D;
        onChanged();
        return this;
      }

      private int unitId_ ;
      /**
       * <code>uint32 unitId = 4;</code>
       */
      public int getUnitId() {
        return unitId_;
      }
      /**
       * <code>uint32 unitId = 4;</code>
       */
      public Builder setUnitId(int value) {
        
        unitId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>uint32 unitId = 4;</code>
       */
      public Builder clearUnitId() {
        
        unitId_ = 0;
        onChanged();
        return this;
      }

      private claros.common.core.ClarosCommonCoreRecurrence.Recurrence recurrence_;
      private com.google.protobuf.SingleFieldBuilderV3<
          claros.common.core.ClarosCommonCoreRecurrence.Recurrence, claros.common.core.ClarosCommonCoreRecurrence.Recurrence.Builder, claros.common.core.ClarosCommonCoreRecurrence.RecurrenceOrBuilder> recurrenceBuilder_;
      /**
       * <code>.claros.common.core.Recurrence recurrence = 5;</code>
       */
      public boolean hasRecurrence() {
        return recurrenceBuilder_ != null || recurrence_ != null;
      }
      /**
       * <code>.claros.common.core.Recurrence recurrence = 5;</code>
       */
      public claros.common.core.ClarosCommonCoreRecurrence.Recurrence getRecurrence() {
        if (recurrenceBuilder_ == null) {
          return recurrence_ == null ? claros.common.core.ClarosCommonCoreRecurrence.Recurrence.getDefaultInstance() : recurrence_;
        } else {
          return recurrenceBuilder_.getMessage();
        }
      }
      /**
       * <code>.claros.common.core.Recurrence recurrence = 5;</code>
       */
      public Builder setRecurrence(claros.common.core.ClarosCommonCoreRecurrence.Recurrence value) {
        if (recurrenceBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          recurrence_ = value;
          onChanged();
        } else {
          recurrenceBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.claros.common.core.Recurrence recurrence = 5;</code>
       */
      public Builder setRecurrence(
          claros.common.core.ClarosCommonCoreRecurrence.Recurrence.Builder builderForValue) {
        if (recurrenceBuilder_ == null) {
          recurrence_ = builderForValue.build();
          onChanged();
        } else {
          recurrenceBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.claros.common.core.Recurrence recurrence = 5;</code>
       */
      public Builder mergeRecurrence(claros.common.core.ClarosCommonCoreRecurrence.Recurrence value) {
        if (recurrenceBuilder_ == null) {
          if (recurrence_ != null) {
            recurrence_ =
              claros.common.core.ClarosCommonCoreRecurrence.Recurrence.newBuilder(recurrence_).mergeFrom(value).buildPartial();
          } else {
            recurrence_ = value;
          }
          onChanged();
        } else {
          recurrenceBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.claros.common.core.Recurrence recurrence = 5;</code>
       */
      public Builder clearRecurrence() {
        if (recurrenceBuilder_ == null) {
          recurrence_ = null;
          onChanged();
        } else {
          recurrence_ = null;
          recurrenceBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.claros.common.core.Recurrence recurrence = 5;</code>
       */
      public claros.common.core.ClarosCommonCoreRecurrence.Recurrence.Builder getRecurrenceBuilder() {
        
        onChanged();
        return getRecurrenceFieldBuilder().getBuilder();
      }
      /**
       * <code>.claros.common.core.Recurrence recurrence = 5;</code>
       */
      public claros.common.core.ClarosCommonCoreRecurrence.RecurrenceOrBuilder getRecurrenceOrBuilder() {
        if (recurrenceBuilder_ != null) {
          return recurrenceBuilder_.getMessageOrBuilder();
        } else {
          return recurrence_ == null ?
              claros.common.core.ClarosCommonCoreRecurrence.Recurrence.getDefaultInstance() : recurrence_;
        }
      }
      /**
       * <code>.claros.common.core.Recurrence recurrence = 5;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          claros.common.core.ClarosCommonCoreRecurrence.Recurrence, claros.common.core.ClarosCommonCoreRecurrence.Recurrence.Builder, claros.common.core.ClarosCommonCoreRecurrence.RecurrenceOrBuilder> 
          getRecurrenceFieldBuilder() {
        if (recurrenceBuilder_ == null) {
          recurrenceBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              claros.common.core.ClarosCommonCoreRecurrence.Recurrence, claros.common.core.ClarosCommonCoreRecurrence.Recurrence.Builder, claros.common.core.ClarosCommonCoreRecurrence.RecurrenceOrBuilder>(
                  getRecurrence(),
                  getParentForChildren(),
                  isClean());
          recurrence_ = null;
        }
        return recurrenceBuilder_;
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


      // @@protoc_insertion_point(builder_scope:claros.common.core.Limit)
    }

    // @@protoc_insertion_point(class_scope:claros.common.core.Limit)
    private static final claros.common.core.ClarosCommonCoreLimit.Limit DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new claros.common.core.ClarosCommonCoreLimit.Limit();
    }

    public static claros.common.core.ClarosCommonCoreLimit.Limit getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Limit>
        PARSER = new com.google.protobuf.AbstractParser<Limit>() {
      @java.lang.Override
      public Limit parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Limit(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Limit> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Limit> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public claros.common.core.ClarosCommonCoreLimit.Limit getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_claros_common_core_Limit_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_claros_common_core_Limit_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\036claros_common_core_limit.proto\022\022claros" +
      ".common.core\032#claros_common_core_limit_t" +
      "ype.proto\032#claros_common_core_recurrence" +
      ".proto\"\235\001\n\005Limit\022\017\n\007i18nKey\030\001 \001(\t\0220\n\tlim" +
      "itType\030\002 \001(\0162\035.claros.common.core.LimitT" +
      "ype\022\r\n\005value\030\003 \001(\001\022\016\n\006unitId\030\004 \001(\r\0222\n\nre" +
      "currence\030\005 \001(\0132\036.claros.common.core.Recu" +
      "rrenceb\006proto3"
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
          claros.common.core.ClarosCommonCoreLimitType.getDescriptor(),
          claros.common.core.ClarosCommonCoreRecurrence.getDescriptor(),
        }, assigner);
    internal_static_claros_common_core_Limit_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_claros_common_core_Limit_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_claros_common_core_Limit_descriptor,
        new java.lang.String[] { "I18NKey", "LimitType", "Value", "UnitId", "Recurrence", });
    claros.common.core.ClarosCommonCoreLimitType.getDescriptor();
    claros.common.core.ClarosCommonCoreRecurrence.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
