/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.claros.common.form.Note');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.claros.common.DateTime');

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
proto.claros.common.form.Note = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.claros.common.form.Note, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.claros.common.form.Note.displayName = 'proto.claros.common.form.Note';
}



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
proto.claros.common.form.Note.prototype.toObject = function(opt_includeInstance) {
  return proto.claros.common.form.Note.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.claros.common.form.Note} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.common.form.Note.toObject = function(includeInstance, msg) {
  var f, obj = {
    guid: jspb.Message.getFieldWithDefault(msg, 1, ""),
    formfieldguid: jspb.Message.getFieldWithDefault(msg, 2, ""),
    formguid: jspb.Message.getFieldWithDefault(msg, 3, ""),
    timestamp: (f = msg.getTimestamp()) && proto.claros.common.DateTime.toObject(includeInstance, f),
    userid: jspb.Message.getFieldWithDefault(msg, 5, ""),
    text: jspb.Message.getFieldWithDefault(msg, 6, "")
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
 * @return {!proto.claros.common.form.Note}
 */
proto.claros.common.form.Note.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.claros.common.form.Note;
  return proto.claros.common.form.Note.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.claros.common.form.Note} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.claros.common.form.Note}
 */
proto.claros.common.form.Note.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setGuid(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setFormfieldguid(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.setFormguid(value);
      break;
    case 4:
      var value = new proto.claros.common.DateTime;
      reader.readMessage(value,proto.claros.common.DateTime.deserializeBinaryFromReader);
      msg.setTimestamp(value);
      break;
    case 5:
      var value = /** @type {string} */ (reader.readString());
      msg.setUserid(value);
      break;
    case 6:
      var value = /** @type {string} */ (reader.readString());
      msg.setText(value);
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
proto.claros.common.form.Note.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.claros.common.form.Note.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.claros.common.form.Note} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.common.form.Note.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getGuid();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getFormfieldguid();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getFormguid();
  if (f.length > 0) {
    writer.writeString(
      3,
      f
    );
  }
  f = message.getTimestamp();
  if (f != null) {
    writer.writeMessage(
      4,
      f,
      proto.claros.common.DateTime.serializeBinaryToWriter
    );
  }
  f = message.getUserid();
  if (f.length > 0) {
    writer.writeString(
      5,
      f
    );
  }
  f = message.getText();
  if (f.length > 0) {
    writer.writeString(
      6,
      f
    );
  }
};


/**
 * optional string guid = 1;
 * @return {string}
 */
proto.claros.common.form.Note.prototype.getGuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.claros.common.form.Note.prototype.setGuid = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional string formFieldGUID = 2;
 * @return {string}
 */
proto.claros.common.form.Note.prototype.getFormfieldguid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.claros.common.form.Note.prototype.setFormfieldguid = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional string formGUID = 3;
 * @return {string}
 */
proto.claros.common.form.Note.prototype.getFormguid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/** @param {string} value */
proto.claros.common.form.Note.prototype.setFormguid = function(value) {
  jspb.Message.setProto3StringField(this, 3, value);
};


/**
 * optional claros.common.DateTime timeStamp = 4;
 * @return {?proto.claros.common.DateTime}
 */
proto.claros.common.form.Note.prototype.getTimestamp = function() {
  return /** @type{?proto.claros.common.DateTime} */ (
    jspb.Message.getWrapperField(this, proto.claros.common.DateTime, 4));
};


/** @param {?proto.claros.common.DateTime|undefined} value */
proto.claros.common.form.Note.prototype.setTimestamp = function(value) {
  jspb.Message.setWrapperField(this, 4, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.claros.common.form.Note.prototype.clearTimestamp = function() {
  this.setTimestamp(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.claros.common.form.Note.prototype.hasTimestamp = function() {
  return jspb.Message.getField(this, 4) != null;
};


/**
 * optional string userId = 5;
 * @return {string}
 */
proto.claros.common.form.Note.prototype.getUserid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 5, ""));
};


/** @param {string} value */
proto.claros.common.form.Note.prototype.setUserid = function(value) {
  jspb.Message.setProto3StringField(this, 5, value);
};


/**
 * optional string text = 6;
 * @return {string}
 */
proto.claros.common.form.Note.prototype.getText = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 6, ""));
};


/** @param {string} value */
proto.claros.common.form.Note.prototype.setText = function(value) {
  jspb.Message.setProto3StringField(this, 6, value);
};

