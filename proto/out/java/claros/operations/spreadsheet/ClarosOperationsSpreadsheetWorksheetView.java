// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: claros_operations_spreadsheet_worksheet_view.proto

package claros.operations.spreadsheet;

public final class ClarosOperationsSpreadsheetWorksheetView {
  private ClarosOperationsSpreadsheetWorksheetView() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface WorksheetViewOrBuilder extends
      // @@protoc_insertion_point(interface_extends:claros.operations.spreadsheet.WorksheetView)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>.claros.operations.spreadsheet.WorksheetType worksheetType = 1;</code>
     */
    int getWorksheetTypeValue();
    /**
     * <code>.claros.operations.spreadsheet.WorksheetType worksheetType = 1;</code>
     */
    claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.WorksheetType getWorksheetType();

    /**
     * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
     */
    int getColumnMasksCount();
    /**
     * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
     */
    boolean containsColumnMasks(
        int key);
    /**
     * Use {@link #getColumnMasksMap()} instead.
     */
    @java.lang.Deprecated
    java.util.Map<java.lang.Integer, java.lang.String>
    getColumnMasks();
    /**
     * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
     */
    java.util.Map<java.lang.Integer, java.lang.String>
    getColumnMasksMap();
    /**
     * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
     */

    java.lang.String getColumnMasksOrDefault(
        int key,
        java.lang.String defaultValue);
    /**
     * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
     */

    java.lang.String getColumnMasksOrThrow(
        int key);

    /**
     * <code>string layout = 3;</code>
     */
    java.lang.String getLayout();
    /**
     * <code>string layout = 3;</code>
     */
    com.google.protobuf.ByteString
        getLayoutBytes();
  }
  /**
   * Protobuf type {@code claros.operations.spreadsheet.WorksheetView}
   */
  public  static final class WorksheetView extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:claros.operations.spreadsheet.WorksheetView)
      WorksheetViewOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use WorksheetView.newBuilder() to construct.
    private WorksheetView(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private WorksheetView() {
      worksheetType_ = 0;
      layout_ = "";
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private WorksheetView(
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
              int rawValue = input.readEnum();

              worksheetType_ = rawValue;
              break;
            }
            case 18: {
              if (!((mutable_bitField0_ & 0x00000002) != 0)) {
                columnMasks_ = com.google.protobuf.MapField.newMapField(
                    ColumnMasksDefaultEntryHolder.defaultEntry);
                mutable_bitField0_ |= 0x00000002;
              }
              com.google.protobuf.MapEntry<java.lang.Integer, java.lang.String>
              columnMasks__ = input.readMessage(
                  ColumnMasksDefaultEntryHolder.defaultEntry.getParserForType(), extensionRegistry);
              columnMasks_.getMutableMap().put(
                  columnMasks__.getKey(), columnMasks__.getValue());
              break;
            }
            case 26: {
              java.lang.String s = input.readStringRequireUtf8();

              layout_ = s;
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
      return claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.internal_static_claros_operations_spreadsheet_WorksheetView_descriptor;
    }

    @SuppressWarnings({"rawtypes"})
    @java.lang.Override
    protected com.google.protobuf.MapField internalGetMapField(
        int number) {
      switch (number) {
        case 2:
          return internalGetColumnMasks();
        default:
          throw new RuntimeException(
              "Invalid map field number: " + number);
      }
    }
    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.internal_static_claros_operations_spreadsheet_WorksheetView_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView.class, claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView.Builder.class);
    }

    private int bitField0_;
    public static final int WORKSHEETTYPE_FIELD_NUMBER = 1;
    private int worksheetType_;
    /**
     * <code>.claros.operations.spreadsheet.WorksheetType worksheetType = 1;</code>
     */
    public int getWorksheetTypeValue() {
      return worksheetType_;
    }
    /**
     * <code>.claros.operations.spreadsheet.WorksheetType worksheetType = 1;</code>
     */
    public claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.WorksheetType getWorksheetType() {
      @SuppressWarnings("deprecation")
      claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.WorksheetType result = claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.WorksheetType.valueOf(worksheetType_);
      return result == null ? claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.WorksheetType.UNRECOGNIZED : result;
    }

    public static final int COLUMNMASKS_FIELD_NUMBER = 2;
    private static final class ColumnMasksDefaultEntryHolder {
      static final com.google.protobuf.MapEntry<
          java.lang.Integer, java.lang.String> defaultEntry =
              com.google.protobuf.MapEntry
              .<java.lang.Integer, java.lang.String>newDefaultInstance(
                  claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.internal_static_claros_operations_spreadsheet_WorksheetView_ColumnMasksEntry_descriptor, 
                  com.google.protobuf.WireFormat.FieldType.UINT32,
                  0,
                  com.google.protobuf.WireFormat.FieldType.STRING,
                  "");
    }
    private com.google.protobuf.MapField<
        java.lang.Integer, java.lang.String> columnMasks_;
    private com.google.protobuf.MapField<java.lang.Integer, java.lang.String>
    internalGetColumnMasks() {
      if (columnMasks_ == null) {
        return com.google.protobuf.MapField.emptyMapField(
            ColumnMasksDefaultEntryHolder.defaultEntry);
      }
      return columnMasks_;
    }

    public int getColumnMasksCount() {
      return internalGetColumnMasks().getMap().size();
    }
    /**
     * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
     */

    public boolean containsColumnMasks(
        int key) {
      
      return internalGetColumnMasks().getMap().containsKey(key);
    }
    /**
     * Use {@link #getColumnMasksMap()} instead.
     */
    @java.lang.Deprecated
    public java.util.Map<java.lang.Integer, java.lang.String> getColumnMasks() {
      return getColumnMasksMap();
    }
    /**
     * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
     */

    public java.util.Map<java.lang.Integer, java.lang.String> getColumnMasksMap() {
      return internalGetColumnMasks().getMap();
    }
    /**
     * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
     */

    public java.lang.String getColumnMasksOrDefault(
        int key,
        java.lang.String defaultValue) {
      
      java.util.Map<java.lang.Integer, java.lang.String> map =
          internalGetColumnMasks().getMap();
      return map.containsKey(key) ? map.get(key) : defaultValue;
    }
    /**
     * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
     */

    public java.lang.String getColumnMasksOrThrow(
        int key) {
      
      java.util.Map<java.lang.Integer, java.lang.String> map =
          internalGetColumnMasks().getMap();
      if (!map.containsKey(key)) {
        throw new java.lang.IllegalArgumentException();
      }
      return map.get(key);
    }

    public static final int LAYOUT_FIELD_NUMBER = 3;
    private volatile java.lang.Object layout_;
    /**
     * <code>string layout = 3;</code>
     */
    public java.lang.String getLayout() {
      java.lang.Object ref = layout_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        layout_ = s;
        return s;
      }
    }
    /**
     * <code>string layout = 3;</code>
     */
    public com.google.protobuf.ByteString
        getLayoutBytes() {
      java.lang.Object ref = layout_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        layout_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
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
      if (worksheetType_ != claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.WorksheetType.W_UNKNOWN.getNumber()) {
        output.writeEnum(1, worksheetType_);
      }
      com.google.protobuf.GeneratedMessageV3
        .serializeIntegerMapTo(
          output,
          internalGetColumnMasks(),
          ColumnMasksDefaultEntryHolder.defaultEntry,
          2);
      if (!getLayoutBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 3, layout_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (worksheetType_ != claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.WorksheetType.W_UNKNOWN.getNumber()) {
        size += com.google.protobuf.CodedOutputStream
          .computeEnumSize(1, worksheetType_);
      }
      for (java.util.Map.Entry<java.lang.Integer, java.lang.String> entry
           : internalGetColumnMasks().getMap().entrySet()) {
        com.google.protobuf.MapEntry<java.lang.Integer, java.lang.String>
        columnMasks__ = ColumnMasksDefaultEntryHolder.defaultEntry.newBuilderForType()
            .setKey(entry.getKey())
            .setValue(entry.getValue())
            .build();
        size += com.google.protobuf.CodedOutputStream
            .computeMessageSize(2, columnMasks__);
      }
      if (!getLayoutBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(3, layout_);
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
      if (!(obj instanceof claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView)) {
        return super.equals(obj);
      }
      claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView other = (claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView) obj;

      if (worksheetType_ != other.worksheetType_) return false;
      if (!internalGetColumnMasks().equals(
          other.internalGetColumnMasks())) return false;
      if (!getLayout()
          .equals(other.getLayout())) return false;
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
      hash = (37 * hash) + WORKSHEETTYPE_FIELD_NUMBER;
      hash = (53 * hash) + worksheetType_;
      if (!internalGetColumnMasks().getMap().isEmpty()) {
        hash = (37 * hash) + COLUMNMASKS_FIELD_NUMBER;
        hash = (53 * hash) + internalGetColumnMasks().hashCode();
      }
      hash = (37 * hash) + LAYOUT_FIELD_NUMBER;
      hash = (53 * hash) + getLayout().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parseFrom(
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
    public static Builder newBuilder(claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView prototype) {
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
     * Protobuf type {@code claros.operations.spreadsheet.WorksheetView}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:claros.operations.spreadsheet.WorksheetView)
        claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetViewOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.internal_static_claros_operations_spreadsheet_WorksheetView_descriptor;
      }

      @SuppressWarnings({"rawtypes"})
      protected com.google.protobuf.MapField internalGetMapField(
          int number) {
        switch (number) {
          case 2:
            return internalGetColumnMasks();
          default:
            throw new RuntimeException(
                "Invalid map field number: " + number);
        }
      }
      @SuppressWarnings({"rawtypes"})
      protected com.google.protobuf.MapField internalGetMutableMapField(
          int number) {
        switch (number) {
          case 2:
            return internalGetMutableColumnMasks();
          default:
            throw new RuntimeException(
                "Invalid map field number: " + number);
        }
      }
      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.internal_static_claros_operations_spreadsheet_WorksheetView_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView.class, claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView.Builder.class);
      }

      // Construct using claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView.newBuilder()
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
        worksheetType_ = 0;

        internalGetMutableColumnMasks().clear();
        layout_ = "";

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.internal_static_claros_operations_spreadsheet_WorksheetView_descriptor;
      }

      @java.lang.Override
      public claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView getDefaultInstanceForType() {
        return claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView.getDefaultInstance();
      }

      @java.lang.Override
      public claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView build() {
        claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView buildPartial() {
        claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView result = new claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        result.worksheetType_ = worksheetType_;
        result.columnMasks_ = internalGetColumnMasks();
        result.columnMasks_.makeImmutable();
        result.layout_ = layout_;
        result.bitField0_ = to_bitField0_;
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
        if (other instanceof claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView) {
          return mergeFrom((claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView other) {
        if (other == claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView.getDefaultInstance()) return this;
        if (other.worksheetType_ != 0) {
          setWorksheetTypeValue(other.getWorksheetTypeValue());
        }
        internalGetMutableColumnMasks().mergeFrom(
            other.internalGetColumnMasks());
        if (!other.getLayout().isEmpty()) {
          layout_ = other.layout_;
          onChanged();
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
        claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private int worksheetType_ = 0;
      /**
       * <code>.claros.operations.spreadsheet.WorksheetType worksheetType = 1;</code>
       */
      public int getWorksheetTypeValue() {
        return worksheetType_;
      }
      /**
       * <code>.claros.operations.spreadsheet.WorksheetType worksheetType = 1;</code>
       */
      public Builder setWorksheetTypeValue(int value) {
        worksheetType_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>.claros.operations.spreadsheet.WorksheetType worksheetType = 1;</code>
       */
      public claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.WorksheetType getWorksheetType() {
        @SuppressWarnings("deprecation")
        claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.WorksheetType result = claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.WorksheetType.valueOf(worksheetType_);
        return result == null ? claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.WorksheetType.UNRECOGNIZED : result;
      }
      /**
       * <code>.claros.operations.spreadsheet.WorksheetType worksheetType = 1;</code>
       */
      public Builder setWorksheetType(claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.WorksheetType value) {
        if (value == null) {
          throw new NullPointerException();
        }
        
        worksheetType_ = value.getNumber();
        onChanged();
        return this;
      }
      /**
       * <code>.claros.operations.spreadsheet.WorksheetType worksheetType = 1;</code>
       */
      public Builder clearWorksheetType() {
        
        worksheetType_ = 0;
        onChanged();
        return this;
      }

      private com.google.protobuf.MapField<
          java.lang.Integer, java.lang.String> columnMasks_;
      private com.google.protobuf.MapField<java.lang.Integer, java.lang.String>
      internalGetColumnMasks() {
        if (columnMasks_ == null) {
          return com.google.protobuf.MapField.emptyMapField(
              ColumnMasksDefaultEntryHolder.defaultEntry);
        }
        return columnMasks_;
      }
      private com.google.protobuf.MapField<java.lang.Integer, java.lang.String>
      internalGetMutableColumnMasks() {
        onChanged();;
        if (columnMasks_ == null) {
          columnMasks_ = com.google.protobuf.MapField.newMapField(
              ColumnMasksDefaultEntryHolder.defaultEntry);
        }
        if (!columnMasks_.isMutable()) {
          columnMasks_ = columnMasks_.copy();
        }
        return columnMasks_;
      }

      public int getColumnMasksCount() {
        return internalGetColumnMasks().getMap().size();
      }
      /**
       * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
       */

      public boolean containsColumnMasks(
          int key) {
        
        return internalGetColumnMasks().getMap().containsKey(key);
      }
      /**
       * Use {@link #getColumnMasksMap()} instead.
       */
      @java.lang.Deprecated
      public java.util.Map<java.lang.Integer, java.lang.String> getColumnMasks() {
        return getColumnMasksMap();
      }
      /**
       * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
       */

      public java.util.Map<java.lang.Integer, java.lang.String> getColumnMasksMap() {
        return internalGetColumnMasks().getMap();
      }
      /**
       * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
       */

      public java.lang.String getColumnMasksOrDefault(
          int key,
          java.lang.String defaultValue) {
        
        java.util.Map<java.lang.Integer, java.lang.String> map =
            internalGetColumnMasks().getMap();
        return map.containsKey(key) ? map.get(key) : defaultValue;
      }
      /**
       * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
       */

      public java.lang.String getColumnMasksOrThrow(
          int key) {
        
        java.util.Map<java.lang.Integer, java.lang.String> map =
            internalGetColumnMasks().getMap();
        if (!map.containsKey(key)) {
          throw new java.lang.IllegalArgumentException();
        }
        return map.get(key);
      }

      public Builder clearColumnMasks() {
        internalGetMutableColumnMasks().getMutableMap()
            .clear();
        return this;
      }
      /**
       * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
       */

      public Builder removeColumnMasks(
          int key) {
        
        internalGetMutableColumnMasks().getMutableMap()
            .remove(key);
        return this;
      }
      /**
       * Use alternate mutation accessors instead.
       */
      @java.lang.Deprecated
      public java.util.Map<java.lang.Integer, java.lang.String>
      getMutableColumnMasks() {
        return internalGetMutableColumnMasks().getMutableMap();
      }
      /**
       * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
       */
      public Builder putColumnMasks(
          int key,
          java.lang.String value) {
        
        if (value == null) { throw new java.lang.NullPointerException(); }
        internalGetMutableColumnMasks().getMutableMap()
            .put(key, value);
        return this;
      }
      /**
       * <code>map&lt;uint32, string&gt; columnMasks = 2;</code>
       */

      public Builder putAllColumnMasks(
          java.util.Map<java.lang.Integer, java.lang.String> values) {
        internalGetMutableColumnMasks().getMutableMap()
            .putAll(values);
        return this;
      }

      private java.lang.Object layout_ = "";
      /**
       * <code>string layout = 3;</code>
       */
      public java.lang.String getLayout() {
        java.lang.Object ref = layout_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          layout_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string layout = 3;</code>
       */
      public com.google.protobuf.ByteString
          getLayoutBytes() {
        java.lang.Object ref = layout_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          layout_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string layout = 3;</code>
       */
      public Builder setLayout(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        layout_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string layout = 3;</code>
       */
      public Builder clearLayout() {
        
        layout_ = getDefaultInstance().getLayout();
        onChanged();
        return this;
      }
      /**
       * <code>string layout = 3;</code>
       */
      public Builder setLayoutBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        layout_ = value;
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


      // @@protoc_insertion_point(builder_scope:claros.operations.spreadsheet.WorksheetView)
    }

    // @@protoc_insertion_point(class_scope:claros.operations.spreadsheet.WorksheetView)
    private static final claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView();
    }

    public static claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<WorksheetView>
        PARSER = new com.google.protobuf.AbstractParser<WorksheetView>() {
      @java.lang.Override
      public WorksheetView parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new WorksheetView(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<WorksheetView> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<WorksheetView> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetView.WorksheetView getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_claros_operations_spreadsheet_WorksheetView_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_claros_operations_spreadsheet_WorksheetView_fieldAccessorTable;
  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_claros_operations_spreadsheet_WorksheetView_ColumnMasksEntry_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_claros_operations_spreadsheet_WorksheetView_ColumnMasksEntry_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n2claros_operations_spreadsheet_workshee" +
      "t_view.proto\022\035claros.operations.spreadsh" +
      "eet\0322claros_operations_spreadsheet_works" +
      "heet_type.proto\"\354\001\n\rWorksheetView\022C\n\rwor" +
      "ksheetType\030\001 \001(\0162,.claros.operations.spr" +
      "eadsheet.WorksheetType\022R\n\013columnMasks\030\002 " +
      "\003(\0132=.claros.operations.spreadsheet.Work" +
      "sheetView.ColumnMasksEntry\022\016\n\006layout\030\003 \001" +
      "(\t\0322\n\020ColumnMasksEntry\022\013\n\003key\030\001 \001(\r\022\r\n\005v" +
      "alue\030\002 \001(\t:\0028\001b\006proto3"
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
          claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.getDescriptor(),
        }, assigner);
    internal_static_claros_operations_spreadsheet_WorksheetView_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_claros_operations_spreadsheet_WorksheetView_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_claros_operations_spreadsheet_WorksheetView_descriptor,
        new java.lang.String[] { "WorksheetType", "ColumnMasks", "Layout", });
    internal_static_claros_operations_spreadsheet_WorksheetView_ColumnMasksEntry_descriptor =
      internal_static_claros_operations_spreadsheet_WorksheetView_descriptor.getNestedTypes().get(0);
    internal_static_claros_operations_spreadsheet_WorksheetView_ColumnMasksEntry_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_claros_operations_spreadsheet_WorksheetView_ColumnMasksEntry_descriptor,
        new java.lang.String[] { "Key", "Value", });
    claros.operations.spreadsheet.ClarosOperationsSpreadsheetWorksheetType.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}