/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.claros.instrument.MilliAmpBinding');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.claros.common.core.ClarosDateTime');

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
proto.claros.instrument.MilliAmpBinding = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.claros.instrument.MilliAmpBinding, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.claros.instrument.MilliAmpBinding.displayName = 'proto.claros.instrument.MilliAmpBinding';
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
proto.claros.instrument.MilliAmpBinding.prototype.toObject = function(opt_includeInstance) {
  return proto.claros.instrument.MilliAmpBinding.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.claros.instrument.MilliAmpBinding} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.instrument.MilliAmpBinding.toObject = function(includeInstance, msg) {
  var f, obj = {
    cardname: jspb.Message.getFieldWithDefault(msg, 1, ""),
    channel: jspb.Message.getFieldWithDefault(msg, 2, 0),
    validfrom: (f = msg.getValidfrom()) && proto.claros.common.core.ClarosDateTime.toObject(includeInstance, f),
    validto: (f = msg.getValidto()) && proto.claros.common.core.ClarosDateTime.toObject(includeInstance, f)
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
 * @return {!proto.claros.instrument.MilliAmpBinding}
 */
proto.claros.instrument.MilliAmpBinding.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.claros.instrument.MilliAmpBinding;
  return proto.claros.instrument.MilliAmpBinding.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.claros.instrument.MilliAmpBinding} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.claros.instrument.MilliAmpBinding}
 */
proto.claros.instrument.MilliAmpBinding.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setCardname(value);
      break;
    case 2:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setChannel(value);
      break;
    case 3:
      var value = new proto.claros.common.core.ClarosDateTime;
      reader.readMessage(value,proto.claros.common.core.ClarosDateTime.deserializeBinaryFromReader);
      msg.setValidfrom(value);
      break;
    case 4:
      var value = new proto.claros.common.core.ClarosDateTime;
      reader.readMessage(value,proto.claros.common.core.ClarosDateTime.deserializeBinaryFromReader);
      msg.setValidto(value);
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
proto.claros.instrument.MilliAmpBinding.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.claros.instrument.MilliAmpBinding.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.claros.instrument.MilliAmpBinding} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.instrument.MilliAmpBinding.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getCardname();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getChannel();
  if (f !== 0) {
    writer.writeUint32(
      2,
      f
    );
  }
  f = message.getValidfrom();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      proto.claros.common.core.ClarosDateTime.serializeBinaryToWriter
    );
  }
  f = message.getValidto();
  if (f != null) {
    writer.writeMessage(
      4,
      f,
      proto.claros.common.core.ClarosDateTime.serializeBinaryToWriter
    );
  }
};


/**
 * optional string cardName = 1;
 * @return {string}
 */
proto.claros.instrument.MilliAmpBinding.prototype.getCardname = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.claros.instrument.MilliAmpBinding.prototype.setCardname = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional uint32 channel = 2;
 * @return {number}
 */
proto.claros.instrument.MilliAmpBinding.prototype.getChannel = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 2, 0));
};


/** @param {number} value */
proto.claros.instrument.MilliAmpBinding.prototype.setChannel = function(value) {
  jspb.Message.setProto3IntField(this, 2, value);
};


/**
 * optional claros.common.core.ClarosDateTime validFrom = 3;
 * @return {?proto.claros.common.core.ClarosDateTime}
 */
proto.claros.instrument.MilliAmpBinding.prototype.getValidfrom = function() {
  return /** @type{?proto.claros.common.core.ClarosDateTime} */ (
    jspb.Message.getWrapperField(this, proto.claros.common.core.ClarosDateTime, 3));
};


/** @param {?proto.claros.common.core.ClarosDateTime|undefined} value */
proto.claros.instrument.MilliAmpBinding.prototype.setValidfrom = function(value) {
  jspb.Message.setWrapperField(this, 3, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.claros.instrument.MilliAmpBinding.prototype.clearValidfrom = function() {
  this.setValidfrom(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.claros.instrument.MilliAmpBinding.prototype.hasValidfrom = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * optional claros.common.core.ClarosDateTime validTo = 4;
 * @return {?proto.claros.common.core.ClarosDateTime}
 */
proto.claros.instrument.MilliAmpBinding.prototype.getValidto = function() {
  return /** @type{?proto.claros.common.core.ClarosDateTime} */ (
    jspb.Message.getWrapperField(this, proto.claros.common.core.ClarosDateTime, 4));
};


/** @param {?proto.claros.common.core.ClarosDateTime|undefined} value */
proto.claros.instrument.MilliAmpBinding.prototype.setValidto = function(value) {
  jspb.Message.setWrapperField(this, 4, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.claros.instrument.MilliAmpBinding.prototype.clearValidto = function() {
  this.setValidto(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.claros.instrument.MilliAmpBinding.prototype.hasValidto = function() {
  return jspb.Message.getField(this, 4) != null;
};

