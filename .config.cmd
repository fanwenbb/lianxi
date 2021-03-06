deps_config := \
	utility/mbedtls/Config.in \
	utility/libc/Config.in \
	utility/cjson/Config.in \
	utility/activation/chip_code/Config.in \
	utility/activation/Config.in \
	utility/Config.in \
	security/prov/Config.in \
	security/itls/Config.in \
	security/irot/tee/Config.in \
	security/irot/se/Config.in \
	security/irot/km/Config.in \
	security/irot/Config.in \
	security/id2/Config.in \
	security/alicrypto/Config.in \
	security/ls_hal/Config.in \
	security/ls_osa/Config.in \
	security/Config.in \
	middleware/uagent/ota/2ndboot/Config.in \
	middleware/uagent/ota/Config.in \
	middleware/uagent/ulog/Config.in \
	middleware/uagent/uagent/Config.in \
	middleware/uagent/Config.in \
	middleware/linkkit/certs/Config.in \
	middleware/linkkit/wrappers/Config.in \
	middleware/linkkit/infra/Config.in \
	middleware/linkkit/dynamic_register/Config.in \
	middleware/linkkit/dev_reset/Config.in \
	middleware/linkkit/dev_sign/Config.in \
	middleware/linkkit/iot_coap/Config.in \
	middleware/linkkit/iot_http/Config.in \
	middleware/linkkit/http2/Config.in \
	middleware/linkkit/wifi_provision/Config.in \
	middleware/linkkit/dev_model/Config.in \
	middleware/linkkit/mqtt/Config.in \
	middleware/linkkit/Config.in \
	network/und/Config.in \
	network/http/Config.in \
	network/yloop/Config.in \
	network/netmgr/Config.in \
	network/nal/sal/Config.in \
	network/lwip/Config.in \
	network/Config.in \
	drivers/sal/wifi/mk3060/Config.in \
	drivers/sal/wifi/gt202/Config.in \
	drivers/sal/wifi/esp8266/Config.in \
	drivers/sal/wifi/bk7231/Config.in \
	drivers/sal/wifi/Config.in \
	drivers/sal/gprs/sim800/Config.in \
	drivers/sal/gprs/Config.in \
	drivers/Config.in \
	osal/aos/Config.in \
	kernel/fs/vfs/Config.in \
	kernel/fs/kv/Config.in \
	kernel/debug/Config.in \
	kernel/cli/Config.in \
	kernel/init/Config.in \
	kernel/rhino/Config.in \
	kernel/Config.in \
	platform/arch/arm/armv5/Config.in \
	platform/mcu/moc108/Config.in \
	board/mk3060/Config.in \
	platform/arch/linux/Config.in \
	platform/mcu/linux/Config.in \
	board/linuxhost/Config.in \
	board/Config.in \
	app/Config.in \
	app/example/mqttapp/Config.in \
	app/example/uart/Config.in \
	app/example/Config.in \
	./build/Config.in

out/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
