/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.claros.common.form.Form');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.claros.common.core.AuditEvent');
goog.require('proto.claros.common.core.Note');
goog.require('proto.claros.common.core.TimeWindow');
goog.require('proto.claros.common.form.FormField');
goog.require('proto.claros.common.form.FormFieldDefinition');
goog.require('proto.claros.common.form.FormTemplate');

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
proto.claros.common.form.Form = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.claros.common.form.Form.repeatedFields_, null);
};
goog.inherits(proto.claros.common.form.Form, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.claros.common.form.Form.displayName = 'proto.claros.common.form.Form';
}

/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.claros.common.form.Form.repeatedFields_ = [5,6,7,8,99];



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
proto.claros.common.form.Form.prototype.toObject = function(opt_includeInstance) {
  return proto.claros.common.form.Form.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.claros.common.form.Form} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.common.form.Form.toObject = function(includeInstance, msg) {
  var f, obj = {
    id: jspb.Message.getFieldWithDefault(msg, 1, ""),
    name: jspb.Message.getFieldWithDefault(msg, 2, ""),
    timewindow: (f = msg.getTimewindow()) && proto.claros.common.core.TimeWindow.toObject(includeInstance, f),
    formtemplate: (f = msg.getFormtemplate()) && proto.claros.common.form.FormTemplate.toObject(includeInstance, f),
    adhocformfielddefinitionsList: jspb.Message.toObjectList(msg.getAdhocformfielddefinitionsList(),
    proto.claros.common.form.FormFieldDefinition.toObject, includeInstance),
    templateformfieldsList: jspb.Message.toObjectList(msg.getTemplateformfieldsList(),
    proto.claros.common.form.FormField.toObject, includeInstance),
    adhocformfieldsList: jspb.Message.toObjectList(msg.getAdhocformfieldsList(),
    proto.claros.common.form.FormField.toObject, includeInstance),
    notesList: jspb.Message.toObjectList(msg.getNotesList(),
    proto.claros.common.core.Note.toObject, includeInstance),
    auditeventsList: jspb.Message.toObjectList(msg.getAuditeventsList(),
    proto.claros.common.core.AuditEvent.toObject, includeInstance)
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
 * @return {!proto.claros.common.form.Form}
 */
proto.claros.common.form.Form.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.claros.common.form.Form;
  return proto.claros.common.form.Form.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.claros.common.form.Form} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.claros.common.form.Form}
 */
proto.claros.common.form.Form.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setId(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setName(value);
      break;
    case 3:
      var value = new proto.claros.common.core.TimeWindow;
      reader.readMessage(value,proto.claros.common.core.TimeWindow.deserializeBinaryFromReader);
      msg.setTimewindow(value);
      break;
    case 4:
      var value = new proto.claros.common.form.FormTemplate;
      reader.readMessage(value,proto.claros.common.form.FormTemplate.deserializeBinaryFromReader);
      msg.setFormtemplate(value);
      break;
    case 5:
      var value = new proto.claros.common.form.FormFieldDefinition;
      reader.readMessage(value,proto.claros.common.form.FormFieldDefinition.deserializeBinaryFromReader);
      msg.addAdhocformfielddefinitions(value);
      break;
    case 6:
      var value = new proto.claros.common.form.FormField;
      reader.readMessage(value,proto.claros.common.form.FormField.deserializeBinaryFromReader);
      msg.addTemplateformfields(value);
      break;
    case 7:
      var value = new proto.claros.common.form.FormField;
      reader.readMessage(value,proto.claros.common.form.FormField.deserializeBinaryFromReader);
      msg.addAdhocformfields(value);
      break;
    case 8:
      var value = new proto.claros.common.core.Note;
      reader.readMessage(value,proto.claros.common.core.Note.deserializeBinaryFromReader);
      msg.addNotes(value);
      break;
    case 99:
      var value = new proto.claros.common.core.AuditEvent;
      reader.readMessage(value,proto.claros.common.core.AuditEvent.deserializeBinaryFromReader);
      msg.addAuditevents(value);
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
proto.claros.common.form.Form.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.claros.common.form.Form.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.claros.common.form.Form} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.common.form.Form.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getId();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getName();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getTimewindow();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      proto.claros.common.core.TimeWindow.serializeBinaryToWriter
    );
  }
  f = message.getFormtemplate();
  if (f != null) {
    writer.writeMessage(
      4,
      f,
      proto.claros.common.form.FormTemplate.serializeBinaryToWriter
    );
  }
  f = message.getAdhocformfielddefinitionsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      5,
      f,
      proto.claros.common.form.FormFieldDefinition.serializeBinaryToWriter
    );
  }
  f = message.getTemplateformfieldsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      6,
      f,
      proto.claros.common.form.FormField.serializeBinaryToWriter
    );
  }
  f = message.getAdhocformfieldsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      7,
      f,
      proto.claros.common.form.FormField.serializeBinaryToWriter
    );
  }
  f = message.getNotesList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      8,
      f,
      proto.claros.common.core.Note.serializeBinaryToWriter
    );
  }
  f = message.getAuditeventsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      99,
      f,
      proto.claros.common.core.AuditEvent.serializeBinaryToWriter
    );
  }
};


/**
 * optional string id = 1;
 * @return {string}
 */
proto.claros.common.form.Form.prototype.getId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.claros.common.form.Form.prototype.setId = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional string name = 2;
 * @return {string}
 */
proto.claros.common.form.Form.prototype.getName = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.claros.common.form.Form.prototype.setName = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional claros.common.core.TimeWindow timeWindow = 3;
 * @return {?proto.claros.common.core.TimeWindow}
 */
proto.claros.common.form.Form.prototype.getTimewindow = function() {
  return /** @type{?proto.claros.common.core.TimeWindow} */ (
    jspb.Message.getWrapperField(this, proto.claros.common.core.TimeWindow, 3));
};


/** @param {?proto.claros.common.core.TimeWindow|undefined} value */
proto.claros.common.form.Form.prototype.setTimewindow = function(value) {
  jspb.Message.setWrapperField(this, 3, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.claros.common.form.Form.prototype.clearTimewindow = function() {
  this.setTimewindow(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.claros.common.form.Form.prototype.hasTimewindow = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * optional FormTemplate formTemplate = 4;
 * @return {?proto.claros.common.form.FormTemplate}
 */
proto.claros.common.form.Form.prototype.getFormtemplate = function() {
  return /** @type{?proto.claros.common.form.FormTemplate} */ (
    jspb.Message.getWrapperField(this, proto.claros.common.form.FormTemplate, 4));
};


/** @param {?proto.claros.common.form.FormTemplate|undefined} value */
proto.claros.common.form.Form.prototype.setFormtemplate = function(value) {
  jspb.Message.setWrapperField(this, 4, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.claros.common.form.Form.prototype.clearFormtemplate = function() {
  this.setFormtemplate(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.claros.common.form.Form.prototype.hasFormtemplate = function() {
  return jspb.Message.getField(this, 4) != null;
};


/**
 * repeated FormFieldDefinition adHocFormFieldDefinitions = 5;
 * @return {!Array<!proto.claros.common.form.FormFieldDefinition>}
 */
proto.claros.common.form.Form.prototype.getAdhocformfielddefinitionsList = function() {
  return /** @type{!Array<!proto.claros.common.form.FormFieldDefinition>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.claros.common.form.FormFieldDefinition, 5));
};


/** @param {!Array<!proto.claros.common.form.FormFieldDefinition>} value */
proto.claros.common.form.Form.prototype.setAdhocformfielddefinitionsList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 5, value);
};


/**
 * @param {!proto.claros.common.form.FormFieldDefinition=} opt_value
 * @param {number=} opt_index
 * @return {!proto.claros.common.form.FormFieldDefinition}
 */
proto.claros.common.form.Form.prototype.addAdhocformfielddefinitions = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 5, opt_value, proto.claros.common.form.FormFieldDefinition, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 */
proto.claros.common.form.Form.prototype.clearAdhocformfielddefinitionsList = function() {
  this.setAdhocformfielddefinitionsList([]);
};


/**
 * repeated FormField templateFormFields = 6;
 * @return {!Array<!proto.claros.common.form.FormField>}
 */
proto.claros.common.form.Form.prototype.getTemplateformfieldsList = function() {
  return /** @type{!Array<!proto.claros.common.form.FormField>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.claros.common.form.FormField, 6));
};


/** @param {!Array<!proto.claros.common.form.FormField>} value */
proto.claros.common.form.Form.prototype.setTemplateformfieldsList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 6, value);
};


/**
 * @param {!proto.claros.common.form.FormField=} opt_value
 * @param {number=} opt_index
 * @return {!proto.claros.common.form.FormField}
 */
proto.claros.common.form.Form.prototype.addTemplateformfields = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 6, opt_value, proto.claros.common.form.FormField, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 */
proto.claros.common.form.Form.prototype.clearTemplateformfieldsList = function() {
  this.setTemplateformfieldsList([]);
};


/**
 * repeated FormField adhocFormFields = 7;
 * @return {!Array<!proto.claros.common.form.FormField>}
 */
proto.claros.common.form.Form.prototype.getAdhocformfieldsList = function() {
  return /** @type{!Array<!proto.claros.common.form.FormField>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.claros.common.form.FormField, 7));
};


/** @param {!Array<!proto.claros.common.form.FormField>} value */
proto.claros.common.form.Form.prototype.setAdhocformfieldsList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 7, value);
};


/**
 * @param {!proto.claros.common.form.FormField=} opt_value
 * @param {number=} opt_index
 * @return {!proto.claros.common.form.FormField}
 */
proto.claros.common.form.Form.prototype.addAdhocformfields = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 7, opt_value, proto.claros.common.form.FormField, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 */
proto.claros.common.form.Form.prototype.clearAdhocformfieldsList = function() {
  this.setAdhocformfieldsList([]);
};


/**
 * repeated claros.common.core.Note notes = 8;
 * @return {!Array<!proto.claros.common.core.Note>}
 */
proto.claros.common.form.Form.prototype.getNotesList = function() {
  return /** @type{!Array<!proto.claros.common.core.Note>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.claros.common.core.Note, 8));
};


/** @param {!Array<!proto.claros.common.core.Note>} value */
proto.claros.common.form.Form.prototype.setNotesList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 8, value);
};


/**
 * @param {!proto.claros.common.core.Note=} opt_value
 * @param {number=} opt_index
 * @return {!proto.claros.common.core.Note}
 */
proto.claros.common.form.Form.prototype.addNotes = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 8, opt_value, proto.claros.common.core.Note, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 */
proto.claros.common.form.Form.prototype.clearNotesList = function() {
  this.setNotesList([]);
};


/**
 * repeated claros.common.core.AuditEvent auditEvents = 99;
 * @return {!Array<!proto.claros.common.core.AuditEvent>}
 */
proto.claros.common.form.Form.prototype.getAuditeventsList = function() {
  return /** @type{!Array<!proto.claros.common.core.AuditEvent>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.claros.common.core.AuditEvent, 99));
};


/** @param {!Array<!proto.claros.common.core.AuditEvent>} value */
proto.claros.common.form.Form.prototype.setAuditeventsList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 99, value);
};


/**
 * @param {!proto.claros.common.core.AuditEvent=} opt_value
 * @param {number=} opt_index
 * @return {!proto.claros.common.core.AuditEvent}
 */
proto.claros.common.form.Form.prototype.addAuditevents = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 99, opt_value, proto.claros.common.core.AuditEvent, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 */
proto.claros.common.form.Form.prototype.clearAuditeventsList = function() {
  this.setAuditeventsList([]);
};

