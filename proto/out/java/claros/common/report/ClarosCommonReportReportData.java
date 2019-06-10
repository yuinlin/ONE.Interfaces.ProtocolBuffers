// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_common_report_report_data.proto

package claros.common.report;

public final class ClarosCommonReportReportData {
  private ClarosCommonReportReportData() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface ReportDataOrBuilder extends
      // @@protoc_insertion_point(interface_extends:claros.common.report.ReportData)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
     */
    boolean hasSpreadsheet();
    /**
     * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
     */
    claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet getSpreadsheet();
    /**
     * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
     */
    claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.SpreadsheetOrBuilder getSpreadsheetOrBuilder();

    public claros.common.report.ClarosCommonReportReportData.ReportData.ReportDataSetCase getReportDataSetCase();
  }
  /**
   * Protobuf type {@code claros.common.report.ReportData}
   */
  public  static final class ReportData extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:claros.common.report.ReportData)
      ReportDataOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use ReportData.newBuilder() to construct.
    private ReportData(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private ReportData() {
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private ReportData(
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
              claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.Builder subBuilder = null;
              if (reportDataSetCase_ == 1) {
                subBuilder = ((claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet) reportDataSet_).toBuilder();
              }
              reportDataSet_ =
                  input.readMessage(claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom((claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet) reportDataSet_);
                reportDataSet_ = subBuilder.buildPartial();
              }
              reportDataSetCase_ = 1;
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
      return claros.common.report.ClarosCommonReportReportData.internal_static_claros_common_report_ReportData_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return claros.common.report.ClarosCommonReportReportData.internal_static_claros_common_report_ReportData_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              claros.common.report.ClarosCommonReportReportData.ReportData.class, claros.common.report.ClarosCommonReportReportData.ReportData.Builder.class);
    }

    private int reportDataSetCase_ = 0;
    private java.lang.Object reportDataSet_;
    public enum ReportDataSetCase
        implements com.google.protobuf.Internal.EnumLite {
      SPREADSHEET(1),
      REPORTDATASET_NOT_SET(0);
      private final int value;
      private ReportDataSetCase(int value) {
        this.value = value;
      }
      /**
       * @deprecated Use {@link #forNumber(int)} instead.
       */
      @java.lang.Deprecated
      public static ReportDataSetCase valueOf(int value) {
        return forNumber(value);
      }

      public static ReportDataSetCase forNumber(int value) {
        switch (value) {
          case 1: return SPREADSHEET;
          case 0: return REPORTDATASET_NOT_SET;
          default: return null;
        }
      }
      public int getNumber() {
        return this.value;
      }
    };

    public ReportDataSetCase
    getReportDataSetCase() {
      return ReportDataSetCase.forNumber(
          reportDataSetCase_);
    }

    public static final int SPREADSHEET_FIELD_NUMBER = 1;
    /**
     * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
     */
    public boolean hasSpreadsheet() {
      return reportDataSetCase_ == 1;
    }
    /**
     * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
     */
    public claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet getSpreadsheet() {
      if (reportDataSetCase_ == 1) {
         return (claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet) reportDataSet_;
      }
      return claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.getDefaultInstance();
    }
    /**
     * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
     */
    public claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.SpreadsheetOrBuilder getSpreadsheetOrBuilder() {
      if (reportDataSetCase_ == 1) {
         return (claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet) reportDataSet_;
      }
      return claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.getDefaultInstance();
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
      if (reportDataSetCase_ == 1) {
        output.writeMessage(1, (claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet) reportDataSet_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (reportDataSetCase_ == 1) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, (claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet) reportDataSet_);
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
      if (!(obj instanceof claros.common.report.ClarosCommonReportReportData.ReportData)) {
        return super.equals(obj);
      }
      claros.common.report.ClarosCommonReportReportData.ReportData other = (claros.common.report.ClarosCommonReportReportData.ReportData) obj;

      if (!getReportDataSetCase().equals(other.getReportDataSetCase())) return false;
      switch (reportDataSetCase_) {
        case 1:
          if (!getSpreadsheet()
              .equals(other.getSpreadsheet())) return false;
          break;
        case 0:
        default:
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
      switch (reportDataSetCase_) {
        case 1:
          hash = (37 * hash) + SPREADSHEET_FIELD_NUMBER;
          hash = (53 * hash) + getSpreadsheet().hashCode();
          break;
        case 0:
        default:
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static claros.common.report.ClarosCommonReportReportData.ReportData parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.common.report.ClarosCommonReportReportData.ReportData parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.common.report.ClarosCommonReportReportData.ReportData parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.common.report.ClarosCommonReportReportData.ReportData parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.common.report.ClarosCommonReportReportData.ReportData parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.common.report.ClarosCommonReportReportData.ReportData parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.common.report.ClarosCommonReportReportData.ReportData parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static claros.common.report.ClarosCommonReportReportData.ReportData parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static claros.common.report.ClarosCommonReportReportData.ReportData parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static claros.common.report.ClarosCommonReportReportData.ReportData parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static claros.common.report.ClarosCommonReportReportData.ReportData parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static claros.common.report.ClarosCommonReportReportData.ReportData parseFrom(
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
    public static Builder newBuilder(claros.common.report.ClarosCommonReportReportData.ReportData prototype) {
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
     * Protobuf type {@code claros.common.report.ReportData}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:claros.common.report.ReportData)
        claros.common.report.ClarosCommonReportReportData.ReportDataOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return claros.common.report.ClarosCommonReportReportData.internal_static_claros_common_report_ReportData_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return claros.common.report.ClarosCommonReportReportData.internal_static_claros_common_report_ReportData_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                claros.common.report.ClarosCommonReportReportData.ReportData.class, claros.common.report.ClarosCommonReportReportData.ReportData.Builder.class);
      }

      // Construct using claros.common.report.ClarosCommonReportReportData.ReportData.newBuilder()
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
        reportDataSetCase_ = 0;
        reportDataSet_ = null;
        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return claros.common.report.ClarosCommonReportReportData.internal_static_claros_common_report_ReportData_descriptor;
      }

      @java.lang.Override
      public claros.common.report.ClarosCommonReportReportData.ReportData getDefaultInstanceForType() {
        return claros.common.report.ClarosCommonReportReportData.ReportData.getDefaultInstance();
      }

      @java.lang.Override
      public claros.common.report.ClarosCommonReportReportData.ReportData build() {
        claros.common.report.ClarosCommonReportReportData.ReportData result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public claros.common.report.ClarosCommonReportReportData.ReportData buildPartial() {
        claros.common.report.ClarosCommonReportReportData.ReportData result = new claros.common.report.ClarosCommonReportReportData.ReportData(this);
        if (reportDataSetCase_ == 1) {
          if (spreadsheetBuilder_ == null) {
            result.reportDataSet_ = reportDataSet_;
          } else {
            result.reportDataSet_ = spreadsheetBuilder_.build();
          }
        }
        result.reportDataSetCase_ = reportDataSetCase_;
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
        if (other instanceof claros.common.report.ClarosCommonReportReportData.ReportData) {
          return mergeFrom((claros.common.report.ClarosCommonReportReportData.ReportData)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(claros.common.report.ClarosCommonReportReportData.ReportData other) {
        if (other == claros.common.report.ClarosCommonReportReportData.ReportData.getDefaultInstance()) return this;
        switch (other.getReportDataSetCase()) {
          case SPREADSHEET: {
            mergeSpreadsheet(other.getSpreadsheet());
            break;
          }
          case REPORTDATASET_NOT_SET: {
            break;
          }
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
        claros.common.report.ClarosCommonReportReportData.ReportData parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (claros.common.report.ClarosCommonReportReportData.ReportData) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int reportDataSetCase_ = 0;
      private java.lang.Object reportDataSet_;
      public ReportDataSetCase
          getReportDataSetCase() {
        return ReportDataSetCase.forNumber(
            reportDataSetCase_);
      }

      public Builder clearReportDataSet() {
        reportDataSetCase_ = 0;
        reportDataSet_ = null;
        onChanged();
        return this;
      }


      private com.google.protobuf.SingleFieldBuilderV3<
          claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet, claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.Builder, claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.SpreadsheetOrBuilder> spreadsheetBuilder_;
      /**
       * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
       */
      public boolean hasSpreadsheet() {
        return reportDataSetCase_ == 1;
      }
      /**
       * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
       */
      public claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet getSpreadsheet() {
        if (spreadsheetBuilder_ == null) {
          if (reportDataSetCase_ == 1) {
            return (claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet) reportDataSet_;
          }
          return claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.getDefaultInstance();
        } else {
          if (reportDataSetCase_ == 1) {
            return spreadsheetBuilder_.getMessage();
          }
          return claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.getDefaultInstance();
        }
      }
      /**
       * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
       */
      public Builder setSpreadsheet(claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet value) {
        if (spreadsheetBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          reportDataSet_ = value;
          onChanged();
        } else {
          spreadsheetBuilder_.setMessage(value);
        }
        reportDataSetCase_ = 1;
        return this;
      }
      /**
       * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
       */
      public Builder setSpreadsheet(
          claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.Builder builderForValue) {
        if (spreadsheetBuilder_ == null) {
          reportDataSet_ = builderForValue.build();
          onChanged();
        } else {
          spreadsheetBuilder_.setMessage(builderForValue.build());
        }
        reportDataSetCase_ = 1;
        return this;
      }
      /**
       * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
       */
      public Builder mergeSpreadsheet(claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet value) {
        if (spreadsheetBuilder_ == null) {
          if (reportDataSetCase_ == 1 &&
              reportDataSet_ != claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.getDefaultInstance()) {
            reportDataSet_ = claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.newBuilder((claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet) reportDataSet_)
                .mergeFrom(value).buildPartial();
          } else {
            reportDataSet_ = value;
          }
          onChanged();
        } else {
          if (reportDataSetCase_ == 1) {
            spreadsheetBuilder_.mergeFrom(value);
          }
          spreadsheetBuilder_.setMessage(value);
        }
        reportDataSetCase_ = 1;
        return this;
      }
      /**
       * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
       */
      public Builder clearSpreadsheet() {
        if (spreadsheetBuilder_ == null) {
          if (reportDataSetCase_ == 1) {
            reportDataSetCase_ = 0;
            reportDataSet_ = null;
            onChanged();
          }
        } else {
          if (reportDataSetCase_ == 1) {
            reportDataSetCase_ = 0;
            reportDataSet_ = null;
          }
          spreadsheetBuilder_.clear();
        }
        return this;
      }
      /**
       * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
       */
      public claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.Builder getSpreadsheetBuilder() {
        return getSpreadsheetFieldBuilder().getBuilder();
      }
      /**
       * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
       */
      public claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.SpreadsheetOrBuilder getSpreadsheetOrBuilder() {
        if ((reportDataSetCase_ == 1) && (spreadsheetBuilder_ != null)) {
          return spreadsheetBuilder_.getMessageOrBuilder();
        } else {
          if (reportDataSetCase_ == 1) {
            return (claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet) reportDataSet_;
          }
          return claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.getDefaultInstance();
        }
      }
      /**
       * <code>.claros.operations.spreadsheet.Spreadsheet spreadsheet = 1;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet, claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.Builder, claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.SpreadsheetOrBuilder> 
          getSpreadsheetFieldBuilder() {
        if (spreadsheetBuilder_ == null) {
          if (!(reportDataSetCase_ == 1)) {
            reportDataSet_ = claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.getDefaultInstance();
          }
          spreadsheetBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet, claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet.Builder, claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.SpreadsheetOrBuilder>(
                  (claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.Spreadsheet) reportDataSet_,
                  getParentForChildren(),
                  isClean());
          reportDataSet_ = null;
        }
        reportDataSetCase_ = 1;
        onChanged();;
        return spreadsheetBuilder_;
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


      // @@protoc_insertion_point(builder_scope:claros.common.report.ReportData)
    }

    // @@protoc_insertion_point(class_scope:claros.common.report.ReportData)
    private static final claros.common.report.ClarosCommonReportReportData.ReportData DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new claros.common.report.ClarosCommonReportReportData.ReportData();
    }

    public static claros.common.report.ClarosCommonReportReportData.ReportData getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<ReportData>
        PARSER = new com.google.protobuf.AbstractParser<ReportData>() {
      @java.lang.Override
      public ReportData parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ReportData(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<ReportData> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<ReportData> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public claros.common.report.ClarosCommonReportReportData.ReportData getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_claros_common_report_ReportData_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_claros_common_report_ReportData_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n&claros_common_report_report_data.proto" +
      "\022\024claros.common.report\032/claros_operation" +
      "s_spreadsheet_spreadsheet.proto\"`\n\nRepor" +
      "tData\022A\n\013spreadsheet\030\001 \001(\0132*.claros.oper" +
      "ations.spreadsheet.SpreadsheetH\000B\017\n\rrepo" +
      "rtDataSetb\006proto3"
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
          claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.getDescriptor(),
        }, assigner);
    internal_static_claros_common_report_ReportData_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_claros_common_report_ReportData_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_claros_common_report_ReportData_descriptor,
        new java.lang.String[] { "Spreadsheet", "ReportDataSet", });
    claros.operations.spreadsheet.ClarosOperationsSpreadsheetSpreadsheet.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}