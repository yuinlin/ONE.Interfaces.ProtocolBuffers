<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_operations_spreadsheet_spreadsheet.proto

namespace Claros\Operations\Spreadsheet;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>claros.operations.spreadsheet.Spreadsheet</code>
 */
class Spreadsheet extends \Google\Protobuf\Internal\Message
{
    /**
     * header
     *
     * Generated from protobuf field <code>string name = 1;</code>
     */
    private $name = '';
    /**
     * Generated from protobuf field <code>string locationId = 2;</code>
     */
    private $locationId = '';
    /**
     * definition 
     *
     * Generated from protobuf field <code>repeated .claros.operations.spreadsheet.SpreadsheetDefinition timeDefinition = 3;</code>
     */
    private $timeDefinition;
    /**
     * Generated from protobuf field <code>repeated .claros.operations.spreadsheet.Worksheet worksheet = 4;</code>
     */
    private $worksheet;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type string $name
     *           header
     *     @type string $locationId
     *     @type \Claros\Operations\Spreadsheet\SpreadsheetDefinition[]|\Google\Protobuf\Internal\RepeatedField $timeDefinition
     *           definition 
     *     @type \Claros\Operations\Spreadsheet\Worksheet[]|\Google\Protobuf\Internal\RepeatedField $worksheet
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\ClarosOperationsSpreadsheetSpreadsheet::initOnce();
        parent::__construct($data);
    }

    /**
     * header
     *
     * Generated from protobuf field <code>string name = 1;</code>
     * @return string
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * header
     *
     * Generated from protobuf field <code>string name = 1;</code>
     * @param string $var
     * @return $this
     */
    public function setName($var)
    {
        GPBUtil::checkString($var, True);
        $this->name = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string locationId = 2;</code>
     * @return string
     */
    public function getLocationId()
    {
        return $this->locationId;
    }

    /**
     * Generated from protobuf field <code>string locationId = 2;</code>
     * @param string $var
     * @return $this
     */
    public function setLocationId($var)
    {
        GPBUtil::checkString($var, True);
        $this->locationId = $var;

        return $this;
    }

    /**
     * definition 
     *
     * Generated from protobuf field <code>repeated .claros.operations.spreadsheet.SpreadsheetDefinition timeDefinition = 3;</code>
     * @return \Google\Protobuf\Internal\RepeatedField
     */
    public function getTimeDefinition()
    {
        return $this->timeDefinition;
    }

    /**
     * definition 
     *
     * Generated from protobuf field <code>repeated .claros.operations.spreadsheet.SpreadsheetDefinition timeDefinition = 3;</code>
     * @param \Claros\Operations\Spreadsheet\SpreadsheetDefinition[]|\Google\Protobuf\Internal\RepeatedField $var
     * @return $this
     */
    public function setTimeDefinition($var)
    {
        $arr = GPBUtil::checkRepeatedField($var, \Google\Protobuf\Internal\GPBType::MESSAGE, \Claros\Operations\Spreadsheet\SpreadsheetDefinition::class);
        $this->timeDefinition = $arr;

        return $this;
    }

    /**
     * Generated from protobuf field <code>repeated .claros.operations.spreadsheet.Worksheet worksheet = 4;</code>
     * @return \Google\Protobuf\Internal\RepeatedField
     */
    public function getWorksheet()
    {
        return $this->worksheet;
    }

    /**
     * Generated from protobuf field <code>repeated .claros.operations.spreadsheet.Worksheet worksheet = 4;</code>
     * @param \Claros\Operations\Spreadsheet\Worksheet[]|\Google\Protobuf\Internal\RepeatedField $var
     * @return $this
     */
    public function setWorksheet($var)
    {
        $arr = GPBUtil::checkRepeatedField($var, \Google\Protobuf\Internal\GPBType::MESSAGE, \Claros\Operations\Spreadsheet\Worksheet::class);
        $this->worksheet = $arr;

        return $this;
    }

}
