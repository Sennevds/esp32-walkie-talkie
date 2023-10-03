#include <freertos/FreeRTOS.h>
#include <driver/i2s.h>
#include <driver/gpio.h>

// WiFi credentials
#define WIFI_SSID "Livebox-2670"
#define WIFI_PSWD "QbHwghM4oENmVRNTbH"

// sample rate for the system
#define SAMPLE_RATE 16000

// are you using an I2S microphone - comment this if you want to use an analog mic and ADC input
#define USE_I2S_MIC_INPUT



// Which LED pin do you want to use? TinyPico LED or the builtin LED of a generic ESP32 board?
// Comment out this line to use the builtin LED of a generic ESP32 board
#define USE_LED_GENERIC

// Which transport do you want to use? ESP_NOW or UDP?
// comment out this line to use UDP
// #define USE_ESP_NOW

// On which wifi channel (1-11) should ESP-Now transmit? The default ESP-Now channel on ESP32 is channel 1
#define ESP_NOW_WIFI_CHANNEL 1

// In case all transport packets need a header (to avoid interference with other applications or walkie talkie sets), 
// specify TRANSPORT_HEADER_SIZE (the length in bytes of the header) in the next line, and define the transport header in config.cpp
#define TRANSPORT_HEADER_SIZE 0
extern uint8_t transport_header[TRANSPORT_HEADER_SIZE];


// i2s config for using the internal ADC
extern i2s_config_t i2s_adc_config;
// i2s config for reading from of I2S
extern i2s_config_t i2s_mic_Config;
// i2s microphone pins
extern i2s_pin_config_t i2s_mic_pins;
// i2s speaker pins
extern i2s_pin_config_t i2s_speaker_pins;
