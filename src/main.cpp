#include <Arduino.h>
#include <fileA.h>

const char* wifi_ssid = "";
const char* wifi_pass = "";

void setup() {
    Serial.begin(115200);
    Serial.println("Hello World");
    setupWiFi(wifi_ssid, wifi_pass);
    setupWebServer();
}

void loop() {
}
