<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_core_parameter.proto

namespace Claros\Common\Core;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>claros.common.core.Parameter</code>
 */
class Parameter extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>string Id = 1;</code>
     */
    private $Id = '';
    /**
     * Generated from protobuf field <code>uint32 IntId = 2;</code>
     */
    private $IntId = 0;
    /**
     * Generated from protobuf field <code>string i18nKey = 3;</code>
     */
    private $i18nKey = '';
    /**
     * Generated from protobuf field <code>string parameterTypeId = 4;</code>
     */
    private $parameterTypeId = '';
    /**
     * Generated from protobuf field <code>string quantityTypeId = 5;</code>
     */
    private $quantityTypeId = '';
    /**
     * Generated from protobuf field <code>string description = 6;</code>
     */
    private $description = '';
    /**
     * Generated from protobuf field <code>string tenantId = 7;</code>
     */
    private $tenantId = '';
    /**
     * Generated from protobuf field <code>string createdById = 8;</code>
     */
    private $createdById = '';
    /**
     * Generated from protobuf field <code>.claros.common.core.ClarosDateTime createdOn = 9;</code>
     */
    private $createdOn = null;
    /**
     * Generated from protobuf field <code>string modifiedById = 10;</code>
     */
    private $modifiedById = '';
    /**
     * Generated from protobuf field <code>.claros.common.core.ClarosDateTime modifiedOn = 11;</code>
     */
    private $modifiedOn = null;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type string $Id
     *     @type int $IntId
     *     @type string $i18nKey
     *     @type string $parameterTypeId
     *     @type string $quantityTypeId
     *     @type string $description
     *     @type string $tenantId
     *     @type string $createdById
     *     @type \Claros\Common\Core\ClarosDateTime $createdOn
     *     @type string $modifiedById
     *     @type \Claros\Common\Core\ClarosDateTime $modifiedOn
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\ClarosCommonCoreParameter::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>string Id = 1;</code>
     * @return string
     */
    public function getId()
    {
        return $this->Id;
    }

    /**
     * Generated from protobuf field <code>string Id = 1;</code>
     * @param string $var
     * @return $this
     */
    public function setId($var)
    {
        GPBUtil::checkString($var, True);
        $this->Id = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>uint32 IntId = 2;</code>
     * @return int
     */
    public function getIntId()
    {
        return $this->IntId;
    }

    /**
     * Generated from protobuf field <code>uint32 IntId = 2;</code>
     * @param int $var
     * @return $this
     */
    public function setIntId($var)
    {
        GPBUtil::checkUint32($var);
        $this->IntId = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string i18nKey = 3;</code>
     * @return string
     */
    public function getI18NKey()
    {
        return $this->i18nKey;
    }

    /**
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
     * Generated from protobuf field <code>string parameterTypeId = 4;</code>
     * @return string
     */
    public function getParameterTypeId()
    {
        return $this->parameterTypeId;
    }

    /**
     * Generated from protobuf field <code>string parameterTypeId = 4;</code>
     * @param string $var
     * @return $this
     */
    public function setParameterTypeId($var)
    {
        GPBUtil::checkString($var, True);
        $this->parameterTypeId = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string quantityTypeId = 5;</code>
     * @return string
     */
    public function getQuantityTypeId()
    {
        return $this->quantityTypeId;
    }

    /**
     * Generated from protobuf field <code>string quantityTypeId = 5;</code>
     * @param string $var
     * @return $this
     */
    public function setQuantityTypeId($var)
    {
        GPBUtil::checkString($var, True);
        $this->quantityTypeId = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string description = 6;</code>
     * @return string
     */
    public function getDescription()
    {
        return $this->description;
    }

    /**
     * Generated from protobuf field <code>string description = 6;</code>
     * @param string $var
     * @return $this
     */
    public function setDescription($var)
    {
        GPBUtil::checkString($var, True);
        $this->description = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string tenantId = 7;</code>
     * @return string
     */
    public function getTenantId()
    {
        return $this->tenantId;
    }

    /**
     * Generated from protobuf field <code>string tenantId = 7;</code>
     * @param string $var
     * @return $this
     */
    public function setTenantId($var)
    {
        GPBUtil::checkString($var, True);
        $this->tenantId = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string createdById = 8;</code>
     * @return string
     */
    public function getCreatedById()
    {
        return $this->createdById;
    }

    /**
     * Generated from protobuf field <code>string createdById = 8;</code>
     * @param string $var
     * @return $this
     */
    public function setCreatedById($var)
    {
        GPBUtil::checkString($var, True);
        $this->createdById = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.claros.common.core.ClarosDateTime createdOn = 9;</code>
     * @return \Claros\Common\Core\ClarosDateTime
     */
    public function getCreatedOn()
    {
        return $this->createdOn;
    }

    /**
     * Generated from protobuf field <code>.claros.common.core.ClarosDateTime createdOn = 9;</code>
     * @param \Claros\Common\Core\ClarosDateTime $var
     * @return $this
     */
    public function setCreatedOn($var)
    {
        GPBUtil::checkMessage($var, \Claros\Common\Core\ClarosDateTime::class);
        $this->createdOn = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string modifiedById = 10;</code>
     * @return string
     */
    public function getModifiedById()
    {
        return $this->modifiedById;
    }

    /**
     * Generated from protobuf field <code>string modifiedById = 10;</code>
     * @param string $var
     * @return $this
     */
    public function setModifiedById($var)
    {
        GPBUtil::checkString($var, True);
        $this->modifiedById = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.claros.common.core.ClarosDateTime modifiedOn = 11;</code>
     * @return \Claros\Common\Core\ClarosDateTime
     */
    public function getModifiedOn()
    {
        return $this->modifiedOn;
    }

    /**
     * Generated from protobuf field <code>.claros.common.core.ClarosDateTime modifiedOn = 11;</code>
     * @param \Claros\Common\Core\ClarosDateTime $var
     * @return $this
     */
    public function setModifiedOn($var)
    {
        GPBUtil::checkMessage($var, \Claros\Common\Core\ClarosDateTime::class);
        $this->modifiedOn = $var;

        return $this;
    }

}
