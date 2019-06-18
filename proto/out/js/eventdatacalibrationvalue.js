/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.claros.instrument.event.EventDataCalibrationValue');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
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
proto.claros.instrument.event.EventDataCalibrationValue = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.claros.instrument.event.EventDataCalibrationValue, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.claros.instrument.event.EventDataCalibrationValue.displayName = 'proto.claros.instrument.event.EventDataCalibrationValue';
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
proto.claros.instrument.event.EventDataCalibrationValue.prototype.toObject = function(opt_includeInstance) {
  return proto.claros.instrument.event.EventDataCalibrationValue.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.claros.instrument.event.EventDataCalibrationValue} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.instrument.event.EventDataCalibrationValue.toObject = function(includeInstance, msg) {
  var f, obj = {
    value: +jspb.Message.getFieldWithDefault(msg, 1, 0.0),
    unit: jspb.Message.getFieldWithDefault(msg, 2, 0),
    chemicalform: jspb.Message.getFieldWithDefault(msg, 3, 0)
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
 * @return {!proto.claros.instrument.event.EventDataCalibrationValue}
 */
proto.claros.instrument.event.EventDataCalibrationValue.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.claros.instrument.event.EventDataCalibrationValue;
  return proto.claros.instrument.event.EventDataCalibrationValue.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.claros.instrument.event.EventDataCalibrationValue} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.claros.instrument.event.EventDataCalibrationValue}
 */
proto.claros.instrument.event.EventDataCalibrationValue.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readFloat());
      msg.setValue(value);
      break;
    case 2:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setUnit(value);
      break;
    case 3:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setChemicalform(value);
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
proto.claros.instrument.event.EventDataCalibrationValue.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.claros.instrument.event.EventDataCalibrationValue.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.claros.instrument.event.EventDataCalibrationValue} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.claros.instrument.event.EventDataCalibrationValue.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getValue();
  if (f !== 0.0) {
    writer.writeFloat(
      1,
      f
    );
  }
  f = message.getUnit();
  if (f !== 0) {
    writer.writeUint32(
      2,
      f
    );
  }
  f = message.getChemicalform();
  if (f !== 0) {
    writer.writeUint32(
      3,
      f
    );
  }
};


/**
 * optional float value = 1;
 * @return {number}
 */
proto.claros.instrument.event.EventDataCalibrationValue.prototype.getValue = function() {
  return /** @type {number} */ (+jspb.Message.getFieldWithDefault(this, 1, 0.0));
};


/** @param {number} value */
proto.claros.instrument.event.EventDataCalibrationValue.prototype.setValue = function(value) {
  jspb.Message.setProto3FloatField(this, 1, value);
};


/**
 * optional uint32 unit = 2;
 * @return {number}
 */
proto.claros.instrument.event.EventDataCalibrationValue.prototype.getUnit = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 2, 0));
};


/** @param {number} value */
proto.claros.instrument.event.EventDataCalibrationValue.prototype.setUnit = function(value) {
  jspb.Message.setProto3IntField(this, 2, value);
};


/**
 * optional uint32 chemicalForm = 3;
 * @return {number}
 */
proto.claros.instrument.event.EventDataCalibrationValue.prototype.getChemicalform = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/** @param {number} value */
proto.claros.instrument.event.EventDataCalibrationValue.prototype.setChemicalform = function(value) {
  jspb.Message.setProto3IntField(this, 3, value);
};

