/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.sample');
goog.provide('proto.sample.RepeatableOneOf');
goog.provide('proto.sample.customMessage');
goog.provide('proto.sample.enumType');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Map');
goog.require('jspb.Message');

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
proto.sample = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.sample.repeatedFields_, proto.sample.oneofGroups_);
};
goog.inherits(proto.sample, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.sample.displayName = 'proto.sample';
}
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
proto.sample.customMessage = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.sample.customMessage, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.sample.customMessage.displayName = 'proto.sample.customMessage';
}
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
proto.sample.RepeatableOneOf = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, proto.sample.RepeatableOneOf.oneofGroups_);
};
goog.inherits(proto.sample.RepeatableOneOf, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.sample.RepeatableOneOf.displayName = 'proto.sample.RepeatableOneOf';
}

/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.sample.repeatedFields_ = [4,6];

/**
 * Oneof group definitions for this message. Each group defines the field
 * numbers belonging to that group. When of these fields' value is set, all
 * other fields in the group are cleared. During deserialization, if multiple
 * fields are encountered for a group, only the last value seen will be kept.
 * @private {!Array<!Array<number>>}
 * @const
 */
proto.sample.oneofGroups_ = [[1,2]];

/**
 * @enum {number}
 */
proto.sample.OneofCase = {
  ONEOF_NOT_SET: 0,
  SAMPLESTRING: 1,
  SAMPLEUINT32: 2
};

/**
 * @return {proto.sample.OneofCase}
 */
proto.sample.prototype.getOneofCase = function() {
  return /** @type {proto.sample.OneofCase} */(jspb.Message.computeOneofCase(this, proto.sample.oneofGroups_[0]));
};



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
proto.sample.prototype.toObject = function(opt_includeInstance) {
  return proto.sample.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.sample} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.sample.toObject = function(includeInstance, msg) {
  var f, obj = {
    samplestring: jspb.Message.getFieldWithDefault(msg, 1, ""),
    sampleuint32: jspb.Message.getFieldWithDefault(msg, 2, 0),
    samplemapMap: (f = msg.getSamplemapMap()) ? f.toObject(includeInstance, undefined) : [],
    samplerepeatedstringList: jspb.Message.getRepeatedField(msg, 4),
    sampleenumtype: jspb.Message.getFieldWithDefault(msg, 5, 0),
    repeatableoneofList: jspb.Message.toObjectList(msg.getRepeatableoneofList(),
    proto.sample.RepeatableOneOf.toObject, includeInstance)
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
 * @return {!proto.sample}
 */
proto.sample.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.sample;
  return proto.sample.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.sample} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.sample}
 */
proto.sample.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setSamplestring(value);
      break;
    case 2:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setSampleuint32(value);
      break;
    case 3:
      var value = msg.getSamplemapMap();
      reader.readMessage(value, function(message, reader) {
        jspb.Map.deserializeBinary(message, reader, jspb.BinaryReader.prototype.readString, jspb.BinaryReader.prototype.readString, null, "");
         });
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.addSamplerepeatedstring(value);
      break;
    case 5:
      var value = /** @type {!proto.sample.enumType} */ (reader.readEnum());
      msg.setSampleenumtype(value);
      break;
    case 6:
      var value = new proto.sample.RepeatableOneOf;
      reader.readMessage(value,proto.sample.RepeatableOneOf.deserializeBinaryFromReader);
      msg.addRepeatableoneof(value);
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
proto.sample.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.sample.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.sample} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.sample.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = /** @type {string} */ (jspb.Message.getField(message, 1));
  if (f != null) {
    writer.writeString(
      1,
      f
    );
  }
  f = /** @type {number} */ (jspb.Message.getField(message, 2));
  if (f != null) {
    writer.writeUint32(
      2,
      f
    );
  }
  f = message.getSamplemapMap(true);
  if (f && f.getLength() > 0) {
    f.serializeBinary(3, writer, jspb.BinaryWriter.prototype.writeString, jspb.BinaryWriter.prototype.writeString);
  }
  f = message.getSamplerepeatedstringList();
  if (f.length > 0) {
    writer.writeRepeatedString(
      4,
      f
    );
  }
  f = message.getSampleenumtype();
  if (f !== 0.0) {
    writer.writeEnum(
      5,
      f
    );
  }
  f = message.getRepeatableoneofList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      6,
      f,
      proto.sample.RepeatableOneOf.serializeBinaryToWriter
    );
  }
};


/**
 * @enum {number}
 */
proto.sample.enumType = {
  ENUM_UNKNOWN: 0,
  ENUM_ONE: 1
};




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
proto.sample.customMessage.prototype.toObject = function(opt_includeInstance) {
  return proto.sample.customMessage.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.sample.customMessage} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.sample.customMessage.toObject = function(includeInstance, msg) {
  var f, obj = {
    messagebody: jspb.Message.getFieldWithDefault(msg, 20, "")
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
 * @return {!proto.sample.customMessage}
 */
proto.sample.customMessage.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.sample.customMessage;
  return proto.sample.customMessage.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.sample.customMessage} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.sample.customMessage}
 */
proto.sample.customMessage.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 20:
      var value = /** @type {string} */ (reader.readString());
      msg.setMessagebody(value);
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
proto.sample.customMessage.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.sample.customMessage.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.sample.customMessage} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.sample.customMessage.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getMessagebody();
  if (f.length > 0) {
    writer.writeString(
      20,
      f
    );
  }
};


/**
 * optional string messageBody = 20;
 * @return {string}
 */
proto.sample.customMessage.prototype.getMessagebody = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 20, ""));
};


/** @param {string} value */
proto.sample.customMessage.prototype.setMessagebody = function(value) {
  jspb.Message.setProto3StringField(this, 20, value);
};



/**
 * Oneof group definitions for this message. Each group defines the field
 * numbers belonging to that group. When of these fields' value is set, all
 * other fields in the group are cleared. During deserialization, if multiple
 * fields are encountered for a group, only the last value seen will be kept.
 * @private {!Array<!Array<number>>}
 * @const
 */
proto.sample.RepeatableOneOf.oneofGroups_ = [[10,11,12]];

/**
 * @enum {number}
 */
proto.sample.RepeatableOneOf.RepeatableoneofCase = {
  REPEATABLEONEOF_NOT_SET: 0,
  REPEATABLEONEOFSTRING: 10,
  REPEATABLEONEOFUINT32: 11,
  REPEATABLECUSTOMMESSAGE: 12
};

/**
 * @return {proto.sample.RepeatableOneOf.RepeatableoneofCase}
 */
proto.sample.RepeatableOneOf.prototype.getRepeatableoneofCase = function() {
  return /** @type {proto.sample.RepeatableOneOf.RepeatableoneofCase} */(jspb.Message.computeOneofCase(this, proto.sample.RepeatableOneOf.oneofGroups_[0]));
};



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
proto.sample.RepeatableOneOf.prototype.toObject = function(opt_includeInstance) {
  return proto.sample.RepeatableOneOf.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.sample.RepeatableOneOf} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.sample.RepeatableOneOf.toObject = function(includeInstance, msg) {
  var f, obj = {
    repeatableoneofstring: jspb.Message.getFieldWithDefault(msg, 10, ""),
    repeatableoneofuint32: jspb.Message.getFieldWithDefault(msg, 11, 0),
    repeatablecustommessage: (f = msg.getRepeatablecustommessage()) && proto.sample.customMessage.toObject(includeInstance, f)
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
 * @return {!proto.sample.RepeatableOneOf}
 */
proto.sample.RepeatableOneOf.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.sample.RepeatableOneOf;
  return proto.sample.RepeatableOneOf.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.sample.RepeatableOneOf} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.sample.RepeatableOneOf}
 */
proto.sample.RepeatableOneOf.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 10:
      var value = /** @type {string} */ (reader.readString());
      msg.setRepeatableoneofstring(value);
      break;
    case 11:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setRepeatableoneofuint32(value);
      break;
    case 12:
      var value = new proto.sample.customMessage;
      reader.readMessage(value,proto.sample.customMessage.deserializeBinaryFromReader);
      msg.setRepeatablecustommessage(value);
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
proto.sample.RepeatableOneOf.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.sample.RepeatableOneOf.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.sample.RepeatableOneOf} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.sample.RepeatableOneOf.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = /** @type {string} */ (jspb.Message.getField(message, 10));
  if (f != null) {
    writer.writeString(
      10,
      f
    );
  }
  f = /** @type {number} */ (jspb.Message.getField(message, 11));
  if (f != null) {
    writer.writeUint32(
      11,
      f
    );
  }
  f = message.getRepeatablecustommessage();
  if (f != null) {
    writer.writeMessage(
      12,
      f,
      proto.sample.customMessage.serializeBinaryToWriter
    );
  }
};


/**
 * optional string repeatableOneOfString = 10;
 * @return {string}
 */
proto.sample.RepeatableOneOf.prototype.getRepeatableoneofstring = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 10, ""));
};


/** @param {string} value */
proto.sample.RepeatableOneOf.prototype.setRepeatableoneofstring = function(value) {
  jspb.Message.setOneofField(this, 10, proto.sample.RepeatableOneOf.oneofGroups_[0], value);
};


/**
 * Clears the field making it undefined.
 */
proto.sample.RepeatableOneOf.prototype.clearRepeatableoneofstring = function() {
  jspb.Message.setOneofField(this, 10, proto.sample.RepeatableOneOf.oneofGroups_[0], undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.sample.RepeatableOneOf.prototype.hasRepeatableoneofstring = function() {
  return jspb.Message.getField(this, 10) != null;
};


/**
 * optional uint32 repeatableOneOfUint32 = 11;
 * @return {number}
 */
proto.sample.RepeatableOneOf.prototype.getRepeatableoneofuint32 = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 11, 0));
};


/** @param {number} value */
proto.sample.RepeatableOneOf.prototype.setRepeatableoneofuint32 = function(value) {
  jspb.Message.setOneofField(this, 11, proto.sample.RepeatableOneOf.oneofGroups_[0], value);
};


/**
 * Clears the field making it undefined.
 */
proto.sample.RepeatableOneOf.prototype.clearRepeatableoneofuint32 = function() {
  jspb.Message.setOneofField(this, 11, proto.sample.RepeatableOneOf.oneofGroups_[0], undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.sample.RepeatableOneOf.prototype.hasRepeatableoneofuint32 = function() {
  return jspb.Message.getField(this, 11) != null;
};


/**
 * optional customMessage repeatableCustomMessage = 12;
 * @return {?proto.sample.customMessage}
 */
proto.sample.RepeatableOneOf.prototype.getRepeatablecustommessage = function() {
  return /** @type{?proto.sample.customMessage} */ (
    jspb.Message.getWrapperField(this, proto.sample.customMessage, 12));
};


/** @param {?proto.sample.customMessage|undefined} value */
proto.sample.RepeatableOneOf.prototype.setRepeatablecustommessage = function(value) {
  jspb.Message.setOneofWrapperField(this, 12, proto.sample.RepeatableOneOf.oneofGroups_[0], value);
};


/**
 * Clears the message field making it undefined.
 */
proto.sample.RepeatableOneOf.prototype.clearRepeatablecustommessage = function() {
  this.setRepeatablecustommessage(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.sample.RepeatableOneOf.prototype.hasRepeatablecustommessage = function() {
  return jspb.Message.getField(this, 12) != null;
};


/**
 * optional string sampleString = 1;
 * @return {string}
 */
proto.sample.prototype.getSamplestring = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.sample.prototype.setSamplestring = function(value) {
  jspb.Message.setOneofField(this, 1, proto.sample.oneofGroups_[0], value);
};


/**
 * Clears the field making it undefined.
 */
proto.sample.prototype.clearSamplestring = function() {
  jspb.Message.setOneofField(this, 1, proto.sample.oneofGroups_[0], undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.sample.prototype.hasSamplestring = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional uint32 sampleUint32 = 2;
 * @return {number}
 */
proto.sample.prototype.getSampleuint32 = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 2, 0));
};


/** @param {number} value */
proto.sample.prototype.setSampleuint32 = function(value) {
  jspb.Message.setOneofField(this, 2, proto.sample.oneofGroups_[0], value);
};


/**
 * Clears the field making it undefined.
 */
proto.sample.prototype.clearSampleuint32 = function() {
  jspb.Message.setOneofField(this, 2, proto.sample.oneofGroups_[0], undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.sample.prototype.hasSampleuint32 = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * map<string, string> sampleMap = 3;
 * @param {boolean=} opt_noLazyCreate Do not create the map if
 * empty, instead returning `undefined`
 * @return {!jspb.Map<string,string>}
 */
proto.sample.prototype.getSamplemapMap = function(opt_noLazyCreate) {
  return /** @type {!jspb.Map<string,string>} */ (
      jspb.Message.getMapField(this, 3, opt_noLazyCreate,
      null));
};


/**
 * Clears values from the map. The map will be non-null.
 */
proto.sample.prototype.clearSamplemapMap = function() {
  this.getSamplemapMap().clear();
};


/**
 * repeated string sampleRepeatedString = 4;
 * @return {!Array<string>}
 */
proto.sample.prototype.getSamplerepeatedstringList = function() {
  return /** @type {!Array<string>} */ (jspb.Message.getRepeatedField(this, 4));
};


/** @param {!Array<string>} value */
proto.sample.prototype.setSamplerepeatedstringList = function(value) {
  jspb.Message.setField(this, 4, value || []);
};


/**
 * @param {string} value
 * @param {number=} opt_index
 */
proto.sample.prototype.addSamplerepeatedstring = function(value, opt_index) {
  jspb.Message.addToRepeatedField(this, 4, value, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 */
proto.sample.prototype.clearSamplerepeatedstringList = function() {
  this.setSamplerepeatedstringList([]);
};


/**
 * optional enumType sampleEnumType = 5;
 * @return {!proto.sample.enumType}
 */
proto.sample.prototype.getSampleenumtype = function() {
  return /** @type {!proto.sample.enumType} */ (jspb.Message.getFieldWithDefault(this, 5, 0));
};


/** @param {!proto.sample.enumType} value */
proto.sample.prototype.setSampleenumtype = function(value) {
  jspb.Message.setProto3EnumField(this, 5, value);
};


/**
 * repeated RepeatableOneOf repeatableOneOf = 6;
 * @return {!Array<!proto.sample.RepeatableOneOf>}
 */
proto.sample.prototype.getRepeatableoneofList = function() {
  return /** @type{!Array<!proto.sample.RepeatableOneOf>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.sample.RepeatableOneOf, 6));
};


/** @param {!Array<!proto.sample.RepeatableOneOf>} value */
proto.sample.prototype.setRepeatableoneofList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 6, value);
};


/**
 * @param {!proto.sample.RepeatableOneOf=} opt_value
 * @param {number=} opt_index
 * @return {!proto.sample.RepeatableOneOf}
 */
proto.sample.prototype.addRepeatableoneof = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 6, opt_value, proto.sample.RepeatableOneOf, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 */
proto.sample.prototype.clearRepeatableoneofList = function() {
  this.setRepeatableoneofList([]);
};

