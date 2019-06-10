<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_form_formfield.proto

namespace Claros\Common\Form;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>claros.common.form.FormField</code>
 */
class FormField extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>string guid = 1;</code>
     */
    private $guid = '';
    /**
     * Generated from protobuf field <code>string formFieldDefinitionId = 2;</code>
     */
    private $formFieldDefinitionId = '';
    /**
     * Generated from protobuf field <code>.claros.common.form.FormDataEntryType formDataEntryType = 3;</code>
     */
    private $formDataEntryType = 0;
    /**
     * Generated from protobuf field <code>bool isDataEntryTypeLocked = 4;</code>
     */
    private $isDataEntryTypeLocked = false;
    /**
     * Generated from protobuf field <code>string name = 5;</code>
     */
    private $name = '';
    /**
     * Generated from protobuf field <code>repeated .claros.instrument.InstrumentData instrumentData = 7;</code>
     */
    private $instrumentData;
    protected $FormFieldData;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type string $guid
     *     @type string $formFieldDefinitionId
     *     @type int $formDataEntryType
     *     @type bool $isDataEntryTypeLocked
     *     @type string $name
     *     @type \Claros\Operations\Spreadsheet\Cell $cell
     *           AdHocFormField adHocFormField
     *     @type \Claros\Instrument\InstrumentData[]|\Google\Protobuf\Internal\RepeatedField $instrumentData
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\ClarosCommonFormFormfield::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>string guid = 1;</code>
     * @return string
     */
    public function getGuid()
    {
        return $this->guid;
    }

    /**
     * Generated from protobuf field <code>string guid = 1;</code>
     * @param string $var
     * @return $this
     */
    public function setGuid($var)
    {
        GPBUtil::checkString($var, True);
        $this->guid = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string formFieldDefinitionId = 2;</code>
     * @return string
     */
    public function getFormFieldDefinitionId()
    {
        return $this->formFieldDefinitionId;
    }

    /**
     * Generated from protobuf field <code>string formFieldDefinitionId = 2;</code>
     * @param string $var
     * @return $this
     */
    public function setFormFieldDefinitionId($var)
    {
        GPBUtil::checkString($var, True);
        $this->formFieldDefinitionId = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.claros.common.form.FormDataEntryType formDataEntryType = 3;</code>
     * @return int
     */
    public function getFormDataEntryType()
    {
        return $this->formDataEntryType;
    }

    /**
     * Generated from protobuf field <code>.claros.common.form.FormDataEntryType formDataEntryType = 3;</code>
     * @param int $var
     * @return $this
     */
    public function setFormDataEntryType($var)
    {
        GPBUtil::checkEnum($var, \Claros\Common\Form\FormDataEntryType::class);
        $this->formDataEntryType = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>bool isDataEntryTypeLocked = 4;</code>
     * @return bool
     */
    public function getIsDataEntryTypeLocked()
    {
        return $this->isDataEntryTypeLocked;
    }

    /**
     * Generated from protobuf field <code>bool isDataEntryTypeLocked = 4;</code>
     * @param bool $var
     * @return $this
     */
    public function setIsDataEntryTypeLocked($var)
    {
        GPBUtil::checkBool($var);
        $this->isDataEntryTypeLocked = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string name = 5;</code>
     * @return string
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * Generated from protobuf field <code>string name = 5;</code>
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
     * AdHocFormField adHocFormField
     *
     * Generated from protobuf field <code>.claros.operations.spreadsheet.Cell cell = 6;</code>
     * @return \Claros\Operations\Spreadsheet\Cell
     */
    public function getCell()
    {
        return $this->readOneof(6);
    }

    /**
     * AdHocFormField adHocFormField
     *
     * Generated from protobuf field <code>.claros.operations.spreadsheet.Cell cell = 6;</code>
     * @param \Claros\Operations\Spreadsheet\Cell $var
     * @return $this
     */
    public function setCell($var)
    {
        GPBUtil::checkMessage($var, \Claros\Operations\Spreadsheet\Cell::class);
        $this->writeOneof(6, $var);

        return $this;
    }

    /**
     * Generated from protobuf field <code>repeated .claros.instrument.InstrumentData instrumentData = 7;</code>
     * @return \Google\Protobuf\Internal\RepeatedField
     */
    public function getInstrumentData()
    {
        return $this->instrumentData;
    }

    /**
     * Generated from protobuf field <code>repeated .claros.instrument.InstrumentData instrumentData = 7;</code>
     * @param \Claros\Instrument\InstrumentData[]|\Google\Protobuf\Internal\RepeatedField $var
     * @return $this
     */
    public function setInstrumentData($var)
    {
        $arr = GPBUtil::checkRepeatedField($var, \Google\Protobuf\Internal\GPBType::MESSAGE, \Claros\Instrument\InstrumentData::class);
        $this->instrumentData = $arr;

        return $this;
    }

    /**
     * @return string
     */
    public function getFormFieldData()
    {
        return $this->whichOneof("FormFieldData");
    }

}

