<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_task_definition.proto

namespace Claros\Common\Task;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>claros.common.task.TaskDefinition</code>
 */
class TaskDefinition extends \Google\Protobuf\Internal\Message
{
    /**
     * What is the source of the Task?
     *
     * Generated from protobuf field <code>repeated .claros.common.task.TaskDefinitionSource taskSource = 1;</code>
     */
    private $taskSource;
    /**
     * Generated from protobuf field <code>.claros.common.task.TaskDefinition.MaintenanceTriggerType triggerType = 2;</code>
     */
    private $triggerType = 0;
    protected $binding;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type \Claros\Common\Task\TaskDefinitionSource[]|\Google\Protobuf\Internal\RepeatedField $taskSource
     *           What is the source of the Task?
     *     @type int $triggerType
     *     @type \Claros\Common\Task\BindingInstrumentMaintenance $bindingInstrumentMaintenance
     *           BindingForms
     *           BindingManuallyCreatedTasks
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\ClarosCommonTaskDefinition::initOnce();
        parent::__construct($data);
    }

    /**
     * What is the source of the Task?
     *
     * Generated from protobuf field <code>repeated .claros.common.task.TaskDefinitionSource taskSource = 1;</code>
     * @return \Google\Protobuf\Internal\RepeatedField
     */
    public function getTaskSource()
    {
        return $this->taskSource;
    }

    /**
     * What is the source of the Task?
     *
     * Generated from protobuf field <code>repeated .claros.common.task.TaskDefinitionSource taskSource = 1;</code>
     * @param \Claros\Common\Task\TaskDefinitionSource[]|\Google\Protobuf\Internal\RepeatedField $var
     * @return $this
     */
    public function setTaskSource($var)
    {
        $arr = GPBUtil::checkRepeatedField($var, \Google\Protobuf\Internal\GPBType::MESSAGE, \Claros\Common\Task\TaskDefinitionSource::class);
        $this->taskSource = $arr;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.claros.common.task.TaskDefinition.MaintenanceTriggerType triggerType = 2;</code>
     * @return int
     */
    public function getTriggerType()
    {
        return $this->triggerType;
    }

    /**
     * Generated from protobuf field <code>.claros.common.task.TaskDefinition.MaintenanceTriggerType triggerType = 2;</code>
     * @param int $var
     * @return $this
     */
    public function setTriggerType($var)
    {
        GPBUtil::checkEnum($var, \Claros\Common\Task\TaskDefinition_MaintenanceTriggerType::class);
        $this->triggerType = $var;

        return $this;
    }

    /**
     * BindingForms
     * BindingManuallyCreatedTasks
     *
     * Generated from protobuf field <code>.claros.common.task.BindingInstrumentMaintenance bindingInstrumentMaintenance = 3;</code>
     * @return \Claros\Common\Task\BindingInstrumentMaintenance
     */
    public function getBindingInstrumentMaintenance()
    {
        return $this->readOneof(3);
    }

    /**
     * BindingForms
     * BindingManuallyCreatedTasks
     *
     * Generated from protobuf field <code>.claros.common.task.BindingInstrumentMaintenance bindingInstrumentMaintenance = 3;</code>
     * @param \Claros\Common\Task\BindingInstrumentMaintenance $var
     * @return $this
     */
    public function setBindingInstrumentMaintenance($var)
    {
        GPBUtil::checkMessage($var, \Claros\Common\Task\BindingInstrumentMaintenance::class);
        $this->writeOneof(3, $var);

        return $this;
    }

    /**
     * @return string
     */
    public function getBinding()
    {
        return $this->whichOneof("binding");
    }

}
