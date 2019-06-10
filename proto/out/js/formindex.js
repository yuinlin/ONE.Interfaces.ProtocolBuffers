/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.claros.common.form.FormIndex');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.claros.common.core.ClarosDateTime');
goog.require('proto.claros.common.core.TimeWindow');

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
proto.claros.common.form.FormIndex = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.claros.common.form.FormIndex, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.claros.common.form.FormIndex.displayName = 'proto.claros.common.form.FormIndex';
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
proto.claros.common.form.FormIndex.prototype.toObject = function(opt_includeInstance) {
  return proto.claros.common.form.FormIndex.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.claros.common.form.FormIndex} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.common.form.FormIndex.toObject = function(includeInstance, msg) {
  var f, obj = {
    id: jspb.Message.getFieldWithDefault(msg, 1, ""),
    templateid: jspb.Message.getFieldWithDefault(msg, 2, ""),
    templateversion: jspb.Message.getFieldWithDefault(msg, 3, 0),
    timewindow: (f = msg.getTimewindow()) && proto.claros.common.core.TimeWindow.toObject(includeInstance, f),
    lastmodified: (f = msg.getLastmodified()) && proto.claros.common.core.ClarosDateTime.toObject(includeInstance, f),
    name: jspb.Message.getFieldWithDefault(msg, 6, ""),
    creatorid: jspb.Message.getFieldWithDefault(msg, 7, ""),
    isinspeed: jspb.Message.getFieldWithDefault(msg, 8, false)
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
 * @return {!proto.claros.common.form.FormIndex}
 */
proto.claros.common.form.FormIndex.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.claros.common.form.FormIndex;
  return proto.claros.common.form.FormIndex.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.claros.common.form.FormIndex} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.claros.common.form.FormIndex}
 */
proto.claros.common.form.FormIndex.deserializeBinaryFromReader = function(msg, reader) {
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
      msg.setTemplateid(value);
      break;
    case 3:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setTemplateversion(value);
      break;
    case 4:
      var value = new proto.claros.common.core.TimeWindow;
      reader.readMessage(value,proto.claros.common.core.TimeWindow.deserializeBinaryFromReader);
      msg.setTimewindow(value);
      break;
    case 5:
      var value = new proto.claros.common.core.ClarosDateTime;
      reader.readMessage(value,proto.claros.common.core.ClarosDateTime.deserializeBinaryFromReader);
      msg.setLastmodified(value);
      break;
    case 6:
      var value = /** @type {string} */ (reader.readString());
      msg.setName(value);
      break;
    case 7:
      var value = /** @type {string} */ (reader.readString());
      msg.setCreatorid(value);
      break;
    case 8:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setIsinspeed(value);
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
proto.claros.common.form.FormIndex.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.claros.common.form.FormIndex.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.claros.common.form.FormIndex} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.common.form.FormIndex.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getId();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getTemplateid();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getTemplateversion();
  if (f !== 0) {
    writer.writeUint32(
      3,
      f
    );
  }
  f = message.getTimewindow();
  if (f != null) {
    writer.writeMessage(
      4,
      f,
      proto.claros.common.core.TimeWindow.serializeBinaryToWriter
    );
  }
  f = message.getLastmodified();
  if (f != null) {
    writer.writeMessage(
      5,
      f,
      proto.claros.common.core.ClarosDateTime.serializeBinaryToWriter
    );
  }
  f = message.getName();
  if (f.length > 0) {
    writer.writeString(
      6,
      f
    );
  }
  f = message.getCreatorid();
  if (f.length > 0) {
    writer.writeString(
      7,
      f
    );
  }
  f = message.getIsinspeed();
  if (f) {
    writer.writeBool(
      8,
      f
    );
  }
};


/**
 * optional string id = 1;
 * @return {string}
 */
proto.claros.common.form.FormIndex.prototype.getId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.claros.common.form.FormIndex.prototype.setId = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional string templateId = 2;
 * @return {string}
 */
proto.claros.common.form.FormIndex.prototype.getTemplateid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.claros.common.form.FormIndex.prototype.setTemplateid = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional uint32 templateVersion = 3;
 * @return {number}
 */
proto.claros.common.form.FormIndex.prototype.getTemplateversion = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {number} value */
proto.claros.common.form.FormIndex.prototype.setTemplateversion = function(value) {
  jspb.Message.setProto3IntField(this, 3, value);
};


/**
 * optional claros.common.core.TimeWindow timeWindow = 4;
 * @return {?proto.claros.common.core.TimeWindow}
 */
proto.claros.common.form.FormIndex.prototype.getTimewindow = function() {
  return /** @type{?proto.claros.common.core.TimeWindow} */ (
    jspb.Message.getWrapperField(this, proto.claros.common.core.TimeWindow, 4));
};


/** @param {?proto.claros.common.core.TimeWindow|undefined} value */
proto.claros.common.form.FormIndex.prototype.setTimewindow = function(value) {
  jspb.Message.setWrapperField(this, 4, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.claros.common.form.FormIndex.prototype.clearTimewindow = function() {
  this.setTimewindow(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.claros.common.form.FormIndex.prototype.hasTimewindow = function() {
  return jspb.Message.getField(this, 4) != null;
};


/**
 * optional claros.common.core.ClarosDateTime lastModified = 5;
 * @return {?proto.claros.common.core.ClarosDateTime}
 */
proto.claros.common.form.FormIndex.prototype.getLastmodified = function() {
  return /** @type{?proto.claros.common.core.ClarosDateTime} */ (
    jspb.Message.getWrapperField(this, proto.claros.common.core.ClarosDateTime, 5));
};


/** @param {?proto.claros.common.core.ClarosDateTime|undefined} value */
proto.claros.common.form.FormIndex.prototype.setLastmodified = function(value) {
  jspb.Message.setWrapperField(this, 5, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.claros.common.form.FormIndex.prototype.clearLastmodified = function() {
  this.setLastmodified(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.claros.common.form.FormIndex.prototype.hasLastmodified = function() {
  return jspb.Message.getField(this, 5) != null;
};


/**
 * optional string name = 6;
 * @return {string}
 */
proto.claros.common.form.FormIndex.prototype.getName = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 6, ""));
};


/** @param {string} value */
proto.claros.common.form.FormIndex.prototype.setName = function(value) {
  jspb.Message.setProto3StringField(this, 6, value);
};


/**
 * optional string creatorId = 7;
 * @return {string}
 */
proto.claros.common.form.FormIndex.prototype.getCreatorid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 7, ""));
};


/** @param {string} value */
proto.claros.common.form.FormIndex.prototype.setCreatorid = function(value) {
  jspb.Message.setProto3StringField(this, 7, value);
};


/**
 * optional bool isInSpeed = 8;
 * Note that Boolean fields may be set to 0/1 when serialized from a Java server.
 * You should avoid comparisons like {@code val === true/false} in those cases.
 * @return {boolean}
 */
proto.claros.common.form.FormIndex.prototype.getIsinspeed = function() {
  return /** @type {boolean} */ (jspb.Message.getFieldWithDefault(this, 8, false));
};


/** @param {boolean} value */
proto.claros.common.form.FormIndex.prototype.setIsinspeed = function(value) {
  jspb.Message.setProto3BooleanField(this, 8, value);
};

