<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_instrument_event_data_metadata.proto

namespace Claros\Instrument\Event;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>claros.instrument.event.EventDataMetaData</code>
 */
class EventDataMetaData extends \Google\Protobuf\Internal\Message
{
    /**
     * The i18n database that is associated to the event
     *
     * Generated from protobuf field <code>string i18nDatabaseName = 1;</code>
     */
    private $i18nDatabaseName = '';
    /**
     * This is the Identifier within the i18n Database
     *
     * Generated from protobuf field <code>int32 translationIndex = 2;</code>
     */
    private $translationIndex = 0;
    /**
     * This is the translatable key that is used to describe the event
     *
     * Generated from protobuf field <code>string i18nKey = 3;</code>
     */
    private $i18nKey = '';
    /**
     * ????? - Dan Dickout had a concept of a status on an event
     *
     * Generated from protobuf field <code>int32 status = 4;</code>
     */
    private $status = 0;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type string $i18nDatabaseName
     *           The i18n database that is associated to the event
     *     @type int $translationIndex
     *           This is the Identifier within the i18n Database
     *     @type string $i18nKey
     *           This is the translatable key that is used to describe the event
     *     @type int $status
     *           ????? - Dan Dickout had a concept of a status on an event
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\ClarosInstrumentEventDataMetadata::initOnce();
        parent::__construct($data);
    }

    /**
     * The i18n database that is associated to the event
     *
     * Generated from protobuf field <code>string i18nDatabaseName = 1;</code>
     * @return string
     */
    public function getI18NDatabaseName()
    {
        return $this->i18nDatabaseName;
    }

    /**
     * The i18n database that is associated to the event
     *
     * Generated from protobuf field <code>string i18nDatabaseName = 1;</code>
     * @param string $var
     * @return $this
     */
    public function setI18NDatabaseName($var)
    {
        GPBUtil::checkString($var, True);
        $this->i18nDatabaseName = $var;

        return $this;
    }

    /**
     * This is the Identifier within the i18n Database
     *
     * Generated from protobuf field <code>int32 translationIndex = 2;</code>
     * @return int
     */
    public function getTranslationIndex()
    {
        return $this->translationIndex;
    }

    /**
     * This is the Identifier within the i18n Database
     *
     * Generated from protobuf field <code>int32 translationIndex = 2;</code>
     * @param int $var
     * @return $this
     */
    public function setTranslationIndex($var)
    {
        GPBUtil::checkInt32($var);
        $this->translationIndex = $var;

        return $this;
    }

    /**
     * This is the translatable key that is used to describe the event
     *
     * Generated from protobuf field <code>string i18nKey = 3;</code>
     * @return string
     */
    public function getI18NKey()
    {
        return $this->i18nKey;
    }

    /**
     * This is the translatable key that is used to describe the event
     *
     * Generated from protobuf field <code>string i18nKey = 3;</code>
     * @param string $var
     * @return $this
     */
    public function setI18NKey($var)
    {
        GPBUtil::checkString($var, True);
        $this->i18nKey = $var;

        return $this;
    }

    /**
     * ????? - Dan Dickout had a concept of a status on an event
     *
     * Generated from protobuf field <code>int32 status = 4;</code>
     * @return int
     */
    public function getStatus()
    {
        return $this->status;
    }

    /**
     * ????? - Dan Dickout had a concept of a status on an event
     *
     * Generated from protobuf field <code>int32 status = 4;</code>
     * @param int $var
     * @return $this
     */
    public function setStatus($var)
    {
        GPBUtil::checkInt32($var);
        $this->status = $var;

        return $this;
    }

}
