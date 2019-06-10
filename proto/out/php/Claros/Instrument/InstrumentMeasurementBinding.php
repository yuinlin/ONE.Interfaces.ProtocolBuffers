<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_instrument_measurement_binding.proto

namespace Claros\Instrument;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>claros.instrument.InstrumentMeasurementBinding</code>
 */
class InstrumentMeasurementBinding extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>string instrumentMeasurementId = 1;</code>
     */
    private $instrumentMeasurementId = '';
    /**
     * Generated from protobuf field <code>.claros.common.core.AggregateType aggregateType = 2;</code>
     */
    private $aggregateType = 0;
    /**
     * Generated from protobuf field <code>uint32 unitId = 3;</code>
     */
    private $unitId = 0;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type string $instrumentMeasurementId
     *     @type int $aggregateType
     *     @type int $unitId
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\ClarosInstrumentMeasurementBinding::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>string instrumentMeasurementId = 1;</code>
     * @return string
     */
    public function getInstrumentMeasurementId()
    {
        return $this->instrumentMeasurementId;
    }

    /**
     * Generated from protobuf field <code>string instrumentMeasurementId = 1;</code>
     * @param string $var
     * @return $this
     */
    public function setInstrumentMeasurementId($var)
    {
        GPBUtil::checkString($var, True);
        $this->instrumentMeasurementId = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.claros.common.core.AggregateType aggregateType = 2;</code>
     * @return int
     */
    public function getAggregateType()
    {
        return $this->aggregateType;
    }

    /**
     * Generated from protobuf field <code>.claros.common.core.AggregateType aggregateType = 2;</code>
     * @param int $var
     * @return $this
     */
    public function setAggregateType($var)
    {
        GPBUtil::checkEnum($var, \Claros\Common\Core\AggregateType::class);
        $this->aggregateType = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>uint32 unitId = 3;</code>
     * @return int
     */
    public function getUnitId()
    {
        return $this->unitId;
    }

    /**
     * Generated from protobuf field <code>uint32 unitId = 3;</code>
     * @param int $var
     * @return $this
     */
    public function setUnitId($var)
    {
        GPBUtil::checkUint32($var);
        $this->unitId = $var;

        return $this;
    }

}

