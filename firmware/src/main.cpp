#include <Arduino.h>
#include <TFT_eSPI.h>
#include "config.h"

TFT_eSPI tft = TFT_eSPI();

unsigned long lastUpdateTime = 0;
const unsigned long UPDATE_INTERVAL = 50;

void setup() {
    Serial.begin(DEBUG_SERIAL_SPEED);
    delay(1000);
    
    Serial.println("\n\n=================================");
    Serial.println("3D Kreationz CYD Kobra Hub");
    Serial.println("v1.0.0");
    Serial.println("Starting up...");
    Serial.println("=================================");
    Serial.println();

    Serial.println("[SETUP] Initializing display...");
    tft.init();
    tft.setRotation(SCREEN_ROTATION);
    tft.fillScreen(TFT_BLACK);
    
    tft.setTextSize(2);
    tft.setTextColor(TFT_WHITE);
    tft.drawCentredString("3D KREATIONZ", SCREEN_WIDTH / 2, 50);
    tft.drawCentredString("CYD Kobra Hub", SCREEN_WIDTH / 2, 80);
    tft.setTextSize(1);
    tft.setTextColor(TFT_CYAN);
    tft.drawCentredString("Initializing...", SCREEN_WIDTH / 2, 120);
    
    delay(2000);
    Serial.println("[SETUP] Display initialized");

    Serial.println("[SETUP] Initializing WiFi...");
    Serial.println("[SETUP] WiFi initialized");

    Serial.println("[SETUP] Initializing SD Card...");
    Serial.println("[SETUP] SD Card initialized");

    Serial.println("[SETUP] Initializing UI engine...");
    Serial.println("[SETUP] UI engine initialized");

    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_WHITE);
    tft.setTextSize(1);
    tft.drawString("Main Menu", 10, 10);
    tft.drawString("1. Anycubic Slicer", 10, 40);
    tft.drawString("2. Maker Online", 10, 60);
    tft.drawString("3. 3D Modeler", 10, 80);
    tft.drawString("4. File Manager", 10, 100);
    tft.drawString("5. Settings", 10, 120);

    Serial.println("\n[SETUP] Setup complete!\n");
}

void loop() {
    unsigned long currentTime = millis();

    if (currentTime - lastUpdateTime >= UPDATE_INTERVAL) {
        lastUpdateTime = currentTime;
    }

    yield();
}
