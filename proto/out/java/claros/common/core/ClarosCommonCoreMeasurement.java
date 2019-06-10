// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_core_measurement.proto

package claros.common.core;

public final class ClarosCommonCoreMeasurement {
  private ClarosCommonCoreMeasurement() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface MeasurementOrBuilder extends
      // @@protoc_insertion_point(interface_extends:claros.common.core.Measurement)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
     */
    boolean hasTimestamp();
    /**
     * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
     */
    claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime getTimestamp();
    /**
     * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
     */
    claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTimeOrBuilder getTimestampOrBuilder();

    /**
     * <code>int32 parameterId = 2;</code>
     */
    int getParameterId();

    /**
     * <code>string parameterGuid = 3;</code>
     */
    java.lang.String getParameterGuid();
    /**
     * <code>string parameterGuid = 3;</code>
     */
    com.google.protobuf.ByteString
        getParameterGuidBytes();

    /**
     * <code>int32 unitId = 4;</code>
     */
    int getUnitId();

    /**
     * <code>string unitGuid = 5;</code>
     */
    java.lang.String getUnitGuid();
    /**
     * <code>string unitGuid = 5;</code>
     */
    com.google.protobuf.ByteString
        getUnitGuidBytes();

    /**
     * <code>float value = 6;</code>
     */
    float getValue();
  }
  /**
   * Protobuf type {@code claros.common.core.Measurement}
   */
  public  static final class Measurement extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:claros.common.core.Measurement)
      MeasurementOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Measurement.newBuilder() to construct.
    private Measurement(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Measurement() {
      parameterGuid_ = "";
      unitGuid_ = "";
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Measurement(
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
              claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime.Builder subBuilder = null;
              if (timestamp_ != null) {
                subBuilder = timestamp_.toBuilder();
              }
              timestamp_ = input.readMessage(claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(timestamp_);
                timestamp_ = subBuilder.buildPartial();
              }

              break;
            }
            case 16: {

              parameterId_ = input.readInt32();
              break;
            }
            case 26: {
              java.lang.String s = input.readStringRequireUtf8();

              parameterGuid_ = s;
              break;
            }
            case 32: {

              unitId_ = input.readInt32();
              break;
            }
            case 42: {
              java.lang.String s = input.readStringRequireUtf8();

              unitGuid_ = s;
              break;
            }
            case 53: {

              value_ = input.readFloat();
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
      return claros.common.core.ClarosCommonCoreMeasurement.internal_static_claros_common_core_Measurement_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return claros.common.core.ClarosCommonCoreMeasurement.internal_static_claros_common_core_Measurement_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              claros.common.core.ClarosCommonCoreMeasurement.Measurement.class, claros.common.core.ClarosCommonCoreMeasurement.Measurement.Builder.class);
    }

    public static final int TIMESTAMP_FIELD_NUMBER = 1;
    private claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime timestamp_;
    /**
     * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
     */
    public boolean hasTimestamp() {
      return timestamp_ != null;
    }
    /**
     * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
     */
    public claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime getTimestamp() {
      return timestamp_ == null ? claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime.getDefaultInstance() : timestamp_;
    }
    /**
     * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
     */
    public claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTimeOrBuilder getTimestampOrBuilder() {
      return getTimestamp();
    }

    public static final int PARAMETERID_FIELD_NUMBER = 2;
    private int parameterId_;
    /**
     * <code>int32 parameterId = 2;</code>
     */
    public int getParameterId() {
      return parameterId_;
    }

    public static final int PARAMETERGUID_FIELD_NUMBER = 3;
    private volatile java.lang.Object parameterGuid_;
    /**
     * <code>string parameterGuid = 3;</code>
     */
    public java.lang.String getParameterGuid() {
      java.lang.Object ref = parameterGuid_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        parameterGuid_ = s;
        return s;
      }
    }
    /**
     * <code>string parameterGuid = 3;</code>
     */
    public com.google.protobuf.ByteString
        getParameterGuidBytes() {
      java.lang.Object ref = parameterGuid_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        parameterGuid_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int UNITID_FIELD_NUMBER = 4;
    private int unitId_;
    /**
     * <code>int32 unitId = 4;</code>
     */
    public int getUnitId() {
      return unitId_;
    }

    public static final int UNITGUID_FIELD_NUMBER = 5;
    private volatile java.lang.Object unitGuid_;
    /**
     * <code>string unitGuid = 5;</code>
     */
    public java.lang.String getUnitGuid() {
      java.lang.Object ref = unitGuid_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        unitGuid_ = s;
        return s;
      }
    }
    /**
     * <code>string unitGuid = 5;</code>
     */
    public com.google.protobuf.ByteString
        getUnitGuidBytes() {
      java.lang.Object ref = unitGuid_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        unitGuid_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int VALUE_FIELD_NUMBER = 6;
    private float value_;
    /**
     * <code>float value = 6;</code>
     */
    public float getValue() {
      return value_;
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
      if (timestamp_ != null) {
        output.writeMessage(1, getTimestamp());
      }
      if (parameterId_ != 0) {
        output.writeInt32(2, parameterId_);
      }
      if (!getParameterGuidBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 3, parameterGuid_);
      }
      if (unitId_ != 0) {
        output.writeInt32(4, unitId_);
      }
      if (!getUnitGuidBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 5, unitGuid_);
      }
      if (value_ != 0F) {
        output.writeFloat(6, value_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (timestamp_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, getTimestamp());
      }
      if (parameterId_ != 0) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt32Size(2, parameterId_);
      }
      if (!getParameterGuidBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(3, parameterGuid_);
      }
      if (unitId_ != 0) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt32Size(4, unitId_);
      }
      if (!getUnitGuidBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(5, unitGuid_);
      }
      if (value_ != 0F) {
        size += com.google.protobuf.CodedOutputStream
          .computeFloatSize(6, value_);
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
      if (!(obj instanceof claros.common.core.ClarosCommonCoreMeasurement.Measurement)) {
        return super.equals(obj);
      }
      claros.common.core.ClarosCommonCoreMeasurement.Measurement other = (claros.common.core.ClarosCommonCoreMeasurement.Measurement) obj;

      if (hasTimestamp() != other.hasTimestamp()) return false;
      if (hasTimestamp()) {
        if (!getTimestamp()
            .equals(other.getTimestamp())) return false;
      }
      if (getParameterId()
          != other.getParameterId()) return false;
      if (!getParameterGuid()
          .equals(other.getParameterGuid())) return false;
      if (getUnitId()
          != other.getUnitId()) return false;
      if (!getUnitGuid()
          .equals(other.getUnitGuid())) return false;
      if (java.lang.Float.floatToIntBits(getValue())
          != java.lang.Float.floatToIntBits(
              other.getValue())) return false;
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
      if (hasTimestamp()) {
        hash = (37 * hash) + TIMESTAMP_FIELD_NUMBER;
        hash = (53 * hash) + getTimestamp().hashCode();
      }
      hash = (37 * hash) + PARAMETERID_FIELD_NUMBER;
      hash = (53 * hash) + getParameterId();
      hash = (37 * hash) + PARAMETERGUID_FIELD_NUMBER;
      hash = (53 * hash) + getParameterGuid().hashCode();
      hash = (37 * hash) + UNITID_FIELD_NUMBER;
      hash = (53 * hash) + getUnitId();
      hash = (37 * hash) + UNITGUID_FIELD_NUMBER;
      hash = (53 * hash) + getUnitGuid().hashCode();
      hash = (37 * hash) + VALUE_FIELD_NUMBER;
      hash = (53 * hash) + java.lang.Float.floatToIntBits(
          getValue());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement parseFrom(
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
    public static Builder newBuilder(claros.common.core.ClarosCommonCoreMeasurement.Measurement prototype) {
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
     * Protobuf type {@code claros.common.core.Measurement}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:claros.common.core.Measurement)
        claros.common.core.ClarosCommonCoreMeasurement.MeasurementOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return claros.common.core.ClarosCommonCoreMeasurement.internal_static_claros_common_core_Measurement_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return claros.common.core.ClarosCommonCoreMeasurement.internal_static_claros_common_core_Measurement_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                claros.common.core.ClarosCommonCoreMeasurement.Measurement.class, claros.common.core.ClarosCommonCoreMeasurement.Measurement.Builder.class);
      }

      // Construct using claros.common.core.ClarosCommonCoreMeasurement.Measurement.newBuilder()
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
        if (timestampBuilder_ == null) {
          timestamp_ = null;
        } else {
          timestamp_ = null;
          timestampBuilder_ = null;
        }
        parameterId_ = 0;

        parameterGuid_ = "";

        unitId_ = 0;

        unitGuid_ = "";

        value_ = 0F;

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return claros.common.core.ClarosCommonCoreMeasurement.internal_static_claros_common_core_Measurement_descriptor;
      }

      @java.lang.Override
      public claros.common.core.ClarosCommonCoreMeasurement.Measurement getDefaultInstanceForType() {
        return claros.common.core.ClarosCommonCoreMeasurement.Measurement.getDefaultInstance();
      }

      @java.lang.Override
      public claros.common.core.ClarosCommonCoreMeasurement.Measurement build() {
        claros.common.core.ClarosCommonCoreMeasurement.Measurement result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public claros.common.core.ClarosCommonCoreMeasurement.Measurement buildPartial() {
        claros.common.core.ClarosCommonCoreMeasurement.Measurement result = new claros.common.core.ClarosCommonCoreMeasurement.Measurement(this);
        if (timestampBuilder_ == null) {
          result.timestamp_ = timestamp_;
        } else {
          result.timestamp_ = timestampBuilder_.build();
        }
        result.parameterId_ = parameterId_;
        result.parameterGuid_ = parameterGuid_;
        result.unitId_ = unitId_;
        result.unitGuid_ = unitGuid_;
        result.value_ = value_;
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
        if (other instanceof claros.common.core.ClarosCommonCoreMeasurement.Measurement) {
          return mergeFrom((claros.common.core.ClarosCommonCoreMeasurement.Measurement)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(claros.common.core.ClarosCommonCoreMeasurement.Measurement other) {
        if (other == claros.common.core.ClarosCommonCoreMeasurement.Measurement.getDefaultInstance()) return this;
        if (other.hasTimestamp()) {
          mergeTimestamp(other.getTimestamp());
        }
        if (other.getParameterId() != 0) {
          setParameterId(other.getParameterId());
        }
        if (!other.getParameterGuid().isEmpty()) {
          parameterGuid_ = other.parameterGuid_;
          onChanged();
        }
        if (other.getUnitId() != 0) {
          setUnitId(other.getUnitId());
        }
        if (!other.getUnitGuid().isEmpty()) {
          unitGuid_ = other.unitGuid_;
          onChanged();
        }
        if (other.getValue() != 0F) {
          setValue(other.getValue());
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
        claros.common.core.ClarosCommonCoreMeasurement.Measurement parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (claros.common.core.ClarosCommonCoreMeasurement.Measurement) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime timestamp_;
      private com.google.protobuf.SingleFieldBuilderV3<
          claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime, claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime.Builder, claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTimeOrBuilder> timestampBuilder_;
      /**
       * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
       */
      public boolean hasTimestamp() {
        return timestampBuilder_ != null || timestamp_ != null;
      }
      /**
       * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
       */
      public claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime getTimestamp() {
        if (timestampBuilder_ == null) {
          return timestamp_ == null ? claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime.getDefaultInstance() : timestamp_;
        } else {
          return timestampBuilder_.getMessage();
        }
      }
      /**
       * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
       */
      public Builder setTimestamp(claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime value) {
        if (timestampBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          timestamp_ = value;
          onChanged();
        } else {
          timestampBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
       */
      public Builder setTimestamp(
          claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime.Builder builderForValue) {
        if (timestampBuilder_ == null) {
          timestamp_ = builderForValue.build();
          onChanged();
        } else {
          timestampBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
       */
      public Builder mergeTimestamp(claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime value) {
        if (timestampBuilder_ == null) {
          if (timestamp_ != null) {
            timestamp_ =
              claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime.newBuilder(timestamp_).mergeFrom(value).buildPartial();
          } else {
            timestamp_ = value;
          }
          onChanged();
        } else {
          timestampBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
       */
      public Builder clearTimestamp() {
        if (timestampBuilder_ == null) {
          timestamp_ = null;
          onChanged();
        } else {
          timestamp_ = null;
          timestampBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
       */
      public claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime.Builder getTimestampBuilder() {
        
        onChanged();
        return getTimestampFieldBuilder().getBuilder();
      }
      /**
       * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
       */
      public claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTimeOrBuilder getTimestampOrBuilder() {
        if (timestampBuilder_ != null) {
          return timestampBuilder_.getMessageOrBuilder();
        } else {
          return timestamp_ == null ?
              claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime.getDefaultInstance() : timestamp_;
        }
      }
      /**
       * <code>.claros.common.core.ClarosDateTime timestamp = 1;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime, claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime.Builder, claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTimeOrBuilder> 
          getTimestampFieldBuilder() {
        if (timestampBuilder_ == null) {
          timestampBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime, claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTime.Builder, claros.common.core.ClarosCommonCoreClarosdatetime.ClarosDateTimeOrBuilder>(
                  getTimestamp(),
                  getParentForChildren(),
                  isClean());
          timestamp_ = null;
        }
        return timestampBuilder_;
      }

      private int parameterId_ ;
      /**
       * <code>int32 parameterId = 2;</code>
       */
      public int getParameterId() {
        return parameterId_;
      }
      /**
       * <code>int32 parameterId = 2;</code>
       */
      public Builder setParameterId(int value) {
        
        parameterId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int32 parameterId = 2;</code>
       */
      public Builder clearParameterId() {
        
        parameterId_ = 0;
        onChanged();
        return this;
      }

      private java.lang.Object parameterGuid_ = "";
      /**
       * <code>string parameterGuid = 3;</code>
       */
      public java.lang.String getParameterGuid() {
        java.lang.Object ref = parameterGuid_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          parameterGuid_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string parameterGuid = 3;</code>
       */
      public com.google.protobuf.ByteString
          getParameterGuidBytes() {
        java.lang.Object ref = parameterGuid_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          parameterGuid_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string parameterGuid = 3;</code>
       */
      public Builder setParameterGuid(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        parameterGuid_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string parameterGuid = 3;</code>
       */
      public Builder clearParameterGuid() {
        
        parameterGuid_ = getDefaultInstance().getParameterGuid();
        onChanged();
        return this;
      }
      /**
       * <code>string parameterGuid = 3;</code>
       */
      public Builder setParameterGuidBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        parameterGuid_ = value;
        onChanged();
        return this;
      }

      private int unitId_ ;
      /**
       * <code>int32 unitId = 4;</code>
       */
      public int getUnitId() {
        return unitId_;
      }
      /**
       * <code>int32 unitId = 4;</code>
       */
      public Builder setUnitId(int value) {
        
        unitId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int32 unitId = 4;</code>
       */
      public Builder clearUnitId() {
        
        unitId_ = 0;
        onChanged();
        return this;
      }

      private java.lang.Object unitGuid_ = "";
      /**
       * <code>string unitGuid = 5;</code>
       */
      public java.lang.String getUnitGuid() {
        java.lang.Object ref = unitGuid_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          unitGuid_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string unitGuid = 5;</code>
       */
      public com.google.protobuf.ByteString
          getUnitGuidBytes() {
        java.lang.Object ref = unitGuid_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          unitGuid_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string unitGuid = 5;</code>
       */
      public Builder setUnitGuid(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        unitGuid_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string unitGuid = 5;</code>
       */
      public Builder clearUnitGuid() {
        
        unitGuid_ = getDefaultInstance().getUnitGuid();
        onChanged();
        return this;
      }
      /**
       * <code>string unitGuid = 5;</code>
       */
      public Builder setUnitGuidBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        unitGuid_ = value;
        onChanged();
        return this;
      }

      private float value_ ;
      /**
       * <code>float value = 6;</code>
       */
      public float getValue() {
        return value_;
      }
      /**
       * <code>float value = 6;</code>
       */
      public Builder setValue(float value) {
        
        value_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>float value = 6;</code>
       */
      public Builder clearValue() {
        
        value_ = 0F;
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


      // @@protoc_insertion_point(builder_scope:claros.common.core.Measurement)
    }

    // @@protoc_insertion_point(class_scope:claros.common.core.Measurement)
    private static final claros.common.core.ClarosCommonCoreMeasurement.Measurement DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new claros.common.core.ClarosCommonCoreMeasurement.Measurement();
    }

    public static claros.common.core.ClarosCommonCoreMeasurement.Measurement getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Measurement>
        PARSER = new com.google.protobuf.AbstractParser<Measurement>() {
      @java.lang.Override
      public Measurement parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Measurement(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Measurement> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Measurement> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public claros.common.core.ClarosCommonCoreMeasurement.Measurement getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_claros_common_core_Measurement_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_claros_common_core_Measurement_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n$claros_common_core_measurement.proto\022\022" +
      "claros.common.core\032\'claros_common_core_c" +
      "larosdatetime.proto\"\241\001\n\013Measurement\0225\n\tt" +
      "imestamp\030\001 \001(\0132\".claros.common.core.Clar" +
      "osDateTime\022\023\n\013parameterId\030\002 \001(\005\022\025\n\rparam" +
      "eterGuid\030\003 \001(\t\022\016\n\006unitId\030\004 \001(\005\022\020\n\010unitGu" +
      "id\030\005 \001(\t\022\r\n\005value\030\006 \001(\002b\006proto3"
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
          claros.common.core.ClarosCommonCoreClarosdatetime.getDescriptor(),
        }, assigner);
    internal_static_claros_common_core_Measurement_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_claros_common_core_Measurement_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_claros_common_core_Measurement_descriptor,
        new java.lang.String[] { "Timestamp", "ParameterId", "ParameterGuid", "UnitId", "UnitGuid", "Value", });
    claros.common.core.ClarosCommonCoreClarosdatetime.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
