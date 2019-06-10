<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_report_report.proto

namespace Claros\Common\Report;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>claros.common.report.Report</code>
 */
class Report extends \Google\Protobuf\Internal\Message
{
    /**
     * header
     *
     * Generated from protobuf field <code>string id = 1;</code>
     */
    private $id = '';
    /**
     * Generated from protobuf field <code>string name = 2;</code>
     */
    private $name = '';
    /**
     * data
     *
     * Generated from protobuf field <code>repeated .claros.common.report.ReportData reportData = 4;</code>
     */
    private $reportData;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type string $id
     *           header
     *     @type string $name
     *     @type \Claros\Common\Report\ReportData[]|\Google\Protobuf\Internal\RepeatedField $reportData
     *           data
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\ClarosCommonReportReport::initOnce();
        parent::__construct($data);
    }

    /**
     * header
     *
     * Generated from protobuf field <code>string id = 1;</code>
     * @return string
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * header
     *
     * Generated from protobuf field <code>string id = 1;</code>
     * @param string $var
     * @return $this
     */
    public function setId($var)
    {
        GPBUtil::checkString($var, True);
        $this->id = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string name = 2;</code>
     * @return string
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * Generated from protobuf field <code>string name = 2;</code>
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
     * data
     *
     * Generated from protobuf field <code>repeated .claros.common.report.ReportData reportData = 4;</code>
     * @return \Google\Protobuf\Internal\RepeatedField
     */
    public function getReportData()
    {
        return $this->reportData;
    }

    /**
     * data
     *
     * Generated from protobuf field <code>repeated .claros.common.report.ReportData reportData = 4;</code>
     * @param \Claros\Common\Report\ReportData[]|\Google\Protobuf\Internal\RepeatedField $var
     * @return $this
     */
    public function setReportData($var)
    {
        $arr = GPBUtil::checkRepeatedField($var, \Google\Protobuf\Internal\GPBType::MESSAGE, \Claros\Common\Report\ReportData::class);
        $this->reportData = $arr;

        return $this;
    }

}
