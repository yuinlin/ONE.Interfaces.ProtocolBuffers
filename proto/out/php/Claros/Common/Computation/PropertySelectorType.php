<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_computation_propertyselector_type.proto

namespace Claros\Common\Computation;

use UnexpectedValueException;

/**
 * Protobuf type <code>claros.common.computation.PropertySelectorType</code>
 */
class PropertySelectorType
{
    /**
     * Generated from protobuf enum <code>PS_UNKNOWN = 0;</code>
     */
    const PS_UNKNOWN = 0;
    /**
     * Generated from protobuf enum <code>PS_MEASUREMENTTIME = 1;</code>
     */
    const PS_MEASUREMENTTIME = 1;
    /**
     * Generated from protobuf enum <code>PS_BEGINLINETIME = 2;</code>
     */
    const PS_BEGINLINETIME = 2;
    /**
     * Generated from protobuf enum <code>PS_ENDLINETIME = 3;</code>
     */
    const PS_ENDLINETIME = 3;
    /**
     * Generated from protobuf enum <code>PS_MEASURMENTVALUE = 4;</code>
     */
    const PS_MEASURMENTVALUE = 4;

    private static $valueToName = [
        self::PS_UNKNOWN => 'PS_UNKNOWN',
        self::PS_MEASUREMENTTIME => 'PS_MEASUREMENTTIME',
        self::PS_BEGINLINETIME => 'PS_BEGINLINETIME',
        self::PS_ENDLINETIME => 'PS_ENDLINETIME',
        self::PS_MEASURMENTVALUE => 'PS_MEASURMENTVALUE',
    ];

    public static function name($value)
    {
        if (!isset(self::$valueToName[$value])) {
            throw new UnexpectedValueException(sprintf(
                    'Enum %s has no name defined for value %s', __CLASS__, $value));
        }
        return self::$valueToName[$value];
    }


    public static function value($name)
    {
        $const = __CLASS__ . '::' . strtoupper($name);
        if (!defined($const)) {
            throw new UnexpectedValueException(sprintf(
                    'Enum %s has no value defined for name %s', __CLASS__, $name));
        }
        return constant($const);
    }
}
