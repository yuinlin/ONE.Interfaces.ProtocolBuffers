/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.claros.common.core.Unit');

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
proto.claros.common.core.Unit = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.claros.common.core.Unit, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.claros.common.core.Unit.displayName = 'proto.claros.common.core.Unit';
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
proto.claros.common.core.Unit.prototype.toObject = function(opt_includeInstance) {
  return proto.claros.common.core.Unit.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.claros.common.core.Unit} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.common.core.Unit.toObject = function(includeInstance, msg) {
  var f, obj = {
    id: jspb.Message.getFieldWithDefault(msg, 1, ""),
    intid: jspb.Message.getFieldWithDefault(msg, 2, 0),
    i18nkey: jspb.Message.getFieldWithDefault(msg, 3, ""),
    unitname: jspb.Message.getFieldWithDefault(msg, 4, ""),
    quantitytypeid: jspb.Message.getFieldWithDefault(msg, 5, ""),
    description: jspb.Message.getFieldWithDefault(msg, 6, ""),
    createdbyid: jspb.Message.getFieldWithDefault(msg, 7, ""),
    createdon: (f = msg.getCreatedon()) && proto.claros.common.core.ClarosDateTime.toObject(includeInstance, f),
    modifiedbyid: jspb.Message.getFieldWithDefault(msg, 9, ""),
    modifiedon: (f = msg.getModifiedon()) && proto.claros.common.core.ClarosDateTime.toObject(includeInstance, f)
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
 * @return {!proto.claros.common.core.Unit}
 */
proto.claros.common.core.Unit.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.claros.common.core.Unit;
  return proto.claros.common.core.Unit.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.claros.common.core.Unit} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.claros.common.core.Unit}
 */
proto.claros.common.core.Unit.deserializeBinaryFromReader = function(msg, reader) {
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
      var value = /** @type {number} */ (reader.readUint32());
      msg.setIntid(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.setI18nkey(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.setUnitname(value);
      break;
    case 5:
      var value = /** @type {string} */ (reader.readString());
      msg.setQuantitytypeid(value);
      break;
    case 6:
      var value = /** @type {string} */ (reader.readString());
      msg.setDescription(value);
      break;
    case 7:
      var value = /** @type {string} */ (reader.readString());
      msg.setCreatedbyid(value);
      break;
    case 8:
      var value = new proto.claros.common.core.ClarosDateTime;
      reader.readMessage(value,proto.claros.common.core.ClarosDateTime.deserializeBinaryFromReader);
      msg.setCreatedon(value);
      break;
    case 9:
      var value = /** @type {string} */ (reader.readString());
      msg.setModifiedbyid(value);
      break;
    case 10:
      var value = new proto.claros.common.core.ClarosDateTime;
      reader.readMessage(value,proto.claros.common.core.ClarosDateTime.deserializeBinaryFromReader);
      msg.setModifiedon(value);
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
proto.claros.common.core.Unit.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.claros.common.core.Unit.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.claros.common.core.Unit} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.common.core.Unit.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getId();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getIntid();
  if (f !== 0) {
    writer.writeUint32(
      2,
      f
    );
  }
  f = message.getI18nkey();
  if (f.length > 0) {
    writer.writeString(
      3,
      f
    );
  }
  f = message.getUnitname();
  if (f.length > 0) {
    writer.writeString(
      4,
      f
    );
  }
  f = message.getQuantitytypeid();
  if (f.length > 0) {
    writer.writeString(
      5,
      f
    );
  }
  f = message.getDescription();
  if (f.length > 0) {
    writer.writeString(
      6,
      f
    );
  }
  f = message.getCreatedbyid();
  if (f.length > 0) {
    writer.writeString(
      7,
      f
    );
  }
  f = message.getCreatedon();
  if (f != null) {
    writer.writeMessage(
      8,
      f,
      proto.claros.common.core.ClarosDateTime.serializeBinaryToWriter
    );
  }
  f = message.getModifiedbyid();
  if (f.length > 0) {
    writer.writeString(
      9,
      f
    );
  }
  f = message.getModifiedon();
  if (f != null) {
    writer.writeMessage(
      10,
      f,
      proto.claros.common.core.ClarosDateTime.serializeBinaryToWriter
    );
  }
};


/**
 * optional string Id = 1;
 * @return {string}
 */
proto.claros.common.core.Unit.prototype.getId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.claros.common.core.Unit.prototype.setId = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional uint32 IntId = 2;
 * @return {number}
 */
proto.claros.common.core.Unit.prototype.getIntid = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 2, 0));
};


/** @param {number} value */
proto.claros.common.core.Unit.prototype.setIntid = function(value) {
  jspb.Message.setProto3IntField(this, 2, value);
};


/**
 * optional string i18nKey = 3;
 * @return {string}
 */
proto.claros.common.core.Unit.prototype.getI18nkey = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/** @param {string} value */
proto.claros.common.core.Unit.prototype.setI18nkey = function(value) {
  jspb.Message.setProto3StringField(this, 3, value);
};


/**
 * optional string unitName = 4;
 * @return {string}
 */
proto.claros.common.core.Unit.prototype.getUnitname = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 4, ""));
};


/** @param {string} value */
proto.claros.common.core.Unit.prototype.setUnitname = function(value) {
  jspb.Message.setProto3StringField(this, 4, value);
};


/**
 * optional string quantityTypeId = 5;
 * @return {string}
 */
proto.claros.common.core.Unit.prototype.getQuantitytypeid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 5, ""));
};


/** @param {string} value */
proto.claros.common.core.Unit.prototype.setQuantitytypeid = function(value) {
  jspb.Message.setProto3StringField(this, 5, value);
};


/**
 * optional string description = 6;
 * @return {string}
 */
proto.claros.common.core.Unit.prototype.getDescription = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 6, ""));
};


/** @param {string} value */
proto.claros.common.core.Unit.prototype.setDescription = function(value) {
  jspb.Message.setProto3StringField(this, 6, value);
};


/**
 * optional string createdById = 7;
 * @return {string}
 */
proto.claros.common.core.Unit.prototype.getCreatedbyid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 7, ""));
};


/** @param {string} value */
proto.claros.common.core.Unit.prototype.setCreatedbyid = function(value) {
  jspb.Message.setProto3StringField(this, 7, value);
};


/**
 * optional ClarosDateTime createdOn = 8;
 * @return {?proto.claros.common.core.ClarosDateTime}
 */
proto.claros.common.core.Unit.prototype.getCreatedon = function() {
  return /** @type{?proto.claros.common.core.ClarosDateTime} */ (
    jspb.Message.getWrapperField(this, proto.claros.common.core.ClarosDateTime, 8));
};


/** @param {?proto.claros.common.core.ClarosDateTime|undefined} value */
proto.claros.common.core.Unit.prototype.setCreatedon = function(value) {
  jspb.Message.setWrapperField(this, 8, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.claros.common.core.Unit.prototype.clearCreatedon = function() {
  this.setCreatedon(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.claros.common.core.Unit.prototype.hasCreatedon = function() {
  return jspb.Message.getField(this, 8) != null;
};


/**
 * optional string modifiedById = 9;
 * @return {string}
 */
proto.claros.common.core.Unit.prototype.getModifiedbyid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 9, ""));
};


/** @param {string} value */
proto.claros.common.core.Unit.prototype.setModifiedbyid = function(value) {
  jspb.Message.setProto3StringField(this, 9, value);
};


/**
 * optional ClarosDateTime modifiedOn = 10;
 * @return {?proto.claros.common.core.ClarosDateTime}
 */
proto.claros.common.core.Unit.prototype.getModifiedon = function() {
  return /** @type{?proto.claros.common.core.ClarosDateTime} */ (
    jspb.Message.getWrapperField(this, proto.claros.common.core.ClarosDateTime, 10));
};


/** @param {?proto.claros.common.core.ClarosDateTime|undefined} value */
proto.claros.common.core.Unit.prototype.setModifiedon = function(value) {
  jspb.Message.setWrapperField(this, 10, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.claros.common.core.Unit.prototype.clearModifiedon = function() {
  this.setModifiedon(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.claros.common.core.Unit.prototype.hasModifiedon = function() {
  return jspb.Message.getField(this, 10) != null;
};


