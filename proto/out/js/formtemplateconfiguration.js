/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.claros.common.form.FormTemplateConfiguration');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.claros.common.core.Recurrence');
goog.require('proto.claros.common.form.FormFieldDefinition');
goog.require('proto.claros.common.form.FormLayout');

goog.forwardDeclare('proto.claros.common.form.FormTemplateType');
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.claros.common.form.FormTemplateConfiguration = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.claros.common.form.FormTemplateConfiguration.repeatedFields_, null);
};
goog.inherits(proto.claros.common.form.FormTemplateConfiguration, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.claros.common.form.FormTemplateConfiguration.displayName = 'proto.claros.common.form.FormTemplateConfiguration';
}

/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.claros.common.form.FormTemplateConfiguration.repeatedFields_ = [4];



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.claros.common.form.FormTemplateConfiguration.prototype.toObject = function(opt_includeInstance) {
  return proto.claros.common.form.FormTemplateConfiguration.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.claros.common.form.FormTemplateConfiguration} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.common.form.FormTemplateConfiguration.toObject = function(includeInstance, msg) {
  var f, obj = {
    formtemplatetype: jspb.Message.getFieldWithDefault(msg, 1, 0),
    recurrence: (f = msg.getRecurrence()) && proto.claros.common.core.Recurrence.toObject(includeInstance, f),
    formlayout: (f = msg.getFormlayout()) && proto.claros.common.form.FormLayout.toObject(includeInstance, f),
    formfielddefinitionsList: jspb.Message.toObjectList(msg.getFormfielddefinitionsList(),
    proto.claros.common.form.FormFieldDefinition.toObject, includeInstance)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.claros.common.form.FormTemplateConfiguration}
 */
proto.claros.common.form.FormTemplateConfiguration.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.claros.common.form.FormTemplateConfiguration;
  return proto.claros.common.form.FormTemplateConfiguration.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.claros.common.form.FormTemplateConfiguration} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.claros.common.form.FormTemplateConfiguration}
 */
proto.claros.common.form.FormTemplateConfiguration.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {!proto.claros.common.form.FormTemplateType} */ (reader.readEnum());
      msg.setFormtemplatetype(value);
      break;
    case 2:
      var value = new proto.claros.common.core.Recurrence;
      reader.readMessage(value,proto.claros.common.core.Recurrence.deserializeBinaryFromReader);
      msg.setRecurrence(value);
      break;
    case 3:
      var value = new proto.claros.common.form.FormLayout;
      reader.readMessage(value,proto.claros.common.form.FormLayout.deserializeBinaryFromReader);
      msg.setFormlayout(value);
      break;
    case 4:
      var value = new proto.claros.common.form.FormFieldDefinition;
      reader.readMessage(value,proto.claros.common.form.FormFieldDefinition.deserializeBinaryFromReader);
      msg.addFormfielddefinitions(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.claros.common.form.FormTemplateConfiguration.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.claros.common.form.FormTemplateConfiguration.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.claros.common.form.FormTemplateConfiguration} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.common.form.FormTemplateConfiguration.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getFormtemplatetype();
  if (f !== 0.0) {
    writer.writeEnum(
      1,
      f
    );
  }
  f = message.getRecurrence();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto.claros.common.core.Recurrence.serializeBinaryToWriter
    );
  }
  f = message.getFormlayout();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      proto.claros.common.form.FormLayout.serializeBinaryToWriter
    );
  }
  f = message.getFormfielddefinitionsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      4,
      f,
      proto.claros.common.form.FormFieldDefinition.serializeBinaryToWriter
    );
  }
};


/**
 * optional FormTemplateType formTemplateType = 1;
 * @return {!proto.claros.common.form.FormTemplateType}
 */
proto.claros.common.form.FormTemplateConfiguration.prototype.getFormtemplatetype = function() {
  return /** @type {!proto.claros.common.form.FormTemplateType} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {!proto.claros.common.form.FormTemplateType} value */
proto.claros.common.form.FormTemplateConfiguration.prototype.setFormtemplatetype = function(value) {
  jspb.Message.setProto3EnumField(this, 1, value);
};


/**
 * optional claros.common.core.Recurrence recurrence = 2;
 * @return {?proto.claros.common.core.Recurrence}
 */
proto.claros.common.form.FormTemplateConfiguration.prototype.getRecurrence = function() {
  return /** @type{?proto.claros.common.core.Recurrence} */ (
    jspb.Message.getWrapperField(this, proto.claros.common.core.Recurrence, 2));
};


/** @param {?proto.claros.common.core.Recurrence|undefined} value */
proto.claros.common.form.FormTemplateConfiguration.prototype.setRecurrence = function(value) {
  jspb.Message.setWrapperField(this, 2, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.claros.common.form.FormTemplateConfiguration.prototype.clearRecurrence = function() {
  this.setRecurrence(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.claros.common.form.FormTemplateConfiguration.prototype.hasRecurrence = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional FormLayout formLayout = 3;
 * @return {?proto.claros.common.form.FormLayout}
 */
proto.claros.common.form.FormTemplateConfiguration.prototype.getFormlayout = function() {
  return /** @type{?proto.claros.common.form.FormLayout} */ (
    jspb.Message.getWrapperField(this, proto.claros.common.form.FormLayout, 3));
};


/** @param {?proto.claros.common.form.FormLayout|undefined} value */
proto.claros.common.form.FormTemplateConfiguration.prototype.setFormlayout = function(value) {
  jspb.Message.setWrapperField(this, 3, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.claros.common.form.FormTemplateConfiguration.prototype.clearFormlayout = function() {
  this.setFormlayout(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.claros.common.form.FormTemplateConfiguration.prototype.hasFormlayout = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * repeated FormFieldDefinition formFieldDefinitions = 4;
 * @return {!Array<!proto.claros.common.form.FormFieldDefinition>}
 */
proto.claros.common.form.FormTemplateConfiguration.prototype.getFormfielddefinitionsList = function() {
  return /** @type{!Array<!proto.claros.common.form.FormFieldDefinition>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.claros.common.form.FormFieldDefinition, 4));
};


/** @param {!Array<!proto.claros.common.form.FormFieldDefinition>} value */
proto.claros.common.form.FormTemplateConfiguration.prototype.setFormfielddefinitionsList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 4, value);
};


/**
 * @param {!proto.claros.common.form.FormFieldDefinition=} opt_value
 * @param {number=} opt_index
 * @return {!proto.claros.common.form.FormFieldDefinition}
 */
proto.claros.common.form.FormTemplateConfiguration.prototype.addFormfielddefinitions = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 4, opt_value, proto.claros.common.form.FormFieldDefinition, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 */
proto.claros.common.form.FormTemplateConfiguration.prototype.clearFormfielddefinitionsList = function() {
  this.setFormfielddefinitionsList([]);
};


