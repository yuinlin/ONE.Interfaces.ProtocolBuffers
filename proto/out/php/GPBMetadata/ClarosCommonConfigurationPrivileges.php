<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: claros_common_configuration_privileges.proto

namespace GPBMetadata;

class ClarosCommonConfigurationPrivileges
{
    public static $is_initialized = false;

    public static function initOnce() {
        $pool = \Google\Protobuf\Internal\DescriptorPool::getGeneratedPool();

        if (static::$is_initialized == true) {
          return;
        }
        \GPBMetadata\ClarosCommonConfigurationRights::initOnce();
        $pool->internalAddGeneratedFile(hex2bin(
            "0a84020a2c636c61726f735f636f6d6d6f6e5f636f6e6669677572617469" .
            "6f6e5f70726976696c656765732e70726f746f121b636c61726f732e636f" .
            "6d6d6f6e2e636f6e66696775726174696f6e22ae010a0a50726976696c65" .
            "67657312490a0970726976696c65676518012003280b32362e636c61726f" .
            "732e636f6d6d6f6e2e636f6e66696775726174696f6e2e50726976696c65" .
            "6765732e50726976696c656765456e7472791a550a0e50726976696c6567" .
            "65456e747279120b0a036b657918012001280912320a0576616c75651802" .
            "2001280b32232e636c61726f732e636f6d6d6f6e2e636f6e666967757261" .
            "74696f6e2e5269676874733a023801620670726f746f33"
        ), true);

        static::$is_initialized = true;
    }
}
