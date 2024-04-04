#include <Arduino.h>
#include <fileA.h>

#ifdef ESP32
#include <WiFi.h>
#else
#include <ESP8266WiFi.h>
#endif

const char* wifi_ssid = "";
const char* wifi_pass = "";

void setupWiFi() {
    WiFi.begin(wifi_ssid, wifi_pass);
    while (WiFi.status() != WL_CONNECTED) {
        Serial.print(".");
        delay(100);
    }
    Serial.printf("WiFi conncected: http://%s/\r\n", WiFi.localIP().toString().c_str());
}

void setup() {
    Serial.begin(115200);
    Serial.println("Hello World");
    setupWiFi();
    setupWebServer();
}

void loop() {
}