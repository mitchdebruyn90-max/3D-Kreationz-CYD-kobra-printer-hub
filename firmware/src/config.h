#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

// ============================================================================
// Display Configuration
// ============================================================================
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240
#define SCREEN_ROTATION 1

// ============================================================================
// WiFi Configuration
// ============================================================================
#define WIFI_SSID "YOUR_SSID"
#define WIFI_PASSWORD "YOUR_PASSWORD"
#define WIFI_CONNECT_TIMEOUT 20000
#define WIFI_RECONNECT_INTERVAL 10000

// ============================================================================
// Anycubic Printer Configuration
// ============================================================================
#define PRINTER_IP "192.168.1.100"
#define PRINTER_PORT 8000
#define PRINTER_TIMEOUT 5000
#define PRINTER_POLL_INTERVAL 1000

// ============================================================================
// SD Card Configuration
// ============================================================================
#define USE_SD_CARD true
#define SD_CS_PIN 5
#define SD_MODELS_DIR "/sd/Models"
#define SD_GCODE_DIR "/sd/GCode"
#define SD_PRINTS_DIR "/sd/Prints"
#define SD_DOWNLOADS_DIR "/sd/Downloads"
#define SD_TEMP_DIR "/sd/Temp"

// ============================================================================
// Video Streaming Configuration
// ============================================================================
#define USE_VIDEO_STREAMING true
#define VIDEO_STREAM_PORT 8081
#define VIDEO_FRAME_RATE 15
#define VIDEO_QUALITY 80

// ============================================================================
// 3D Modeler Configuration
// ============================================================================
#define MAX_MESH_VERTICES 2000
#define MAX_MESH_TRIANGLES 1000
#define MODELER_RENDER_FPS 15

// ============================================================================
// Slicer Engine Configuration
// ============================================================================
#define DEFAULT_LAYER_HEIGHT 0.2f
#define DEFAULT_INFILL 20
#define DEFAULT_NOZZLE_TEMP 200
#define DEFAULT_BED_TEMP 60

// ============================================================================
// Debug Configuration
// ============================================================================
#define DEBUG_ENABLED true
#define DEBUG_SERIAL_SPEED 115200
#define DEBUG_WIFI true
#define DEBUG_PRINTER true
#define DEBUG_UI true

#endif
