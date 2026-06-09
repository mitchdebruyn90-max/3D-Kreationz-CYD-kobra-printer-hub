# Hardware Setup Guide

## ESP32 CYD Board Specifications

### Sunton 2.8" TFT Display Module (ESP32-2432S028)

**Microcontroller:**
- ESP32 (240 MHz dual-core)
- 4 MB Flash
- 520 KB SRAM

**Display:**
- 2.8" ILI9341 TFT LCD
- Resolution: 320×240 pixels
- SPI interface

**Touch Screen:**
- XPT2046 Resistive Touchscreen
- SPI interface

**Connectivity:**
- WiFi: 802.11 b/g/n (2.4 GHz)
- Bluetooth 5.0
- USB Serial for programming

**Power:**
- USB-C Power input (5V 2A)
- Can be powered from battery (3.7V LiPo)

**GPIO Pinout:**
```
Display SPI:
  MISO: 12, MOSI: 13, SCLK: 14
  DC: 2, CS: 15, RST: 4

Touch SPI:
  CS: 33 (MISO/MOSI/SCLK shared)

SD Card:
  CS: 5 (MISO/MOSI/SCLK shared)
```

## Flashing the Firmware

### Prerequisites
- PlatformIO CLI or IDE
- USB-C cable
- ESP32 drivers

### Steps

1. **Install PlatformIO**
   ```bash
   pip install platformio
   ```

2. **Clone Repository**
   ```bash
   git clone https://github.com/mitchdebruyn90-max/3D-Kreationz-CYD-kobra-printer-hub.git
   ```

3. **Build Firmware**
   ```bash
   pio run -e esp32-cyd
   ```

4. **Upload to Device**
   ```bash
   pio run -e esp32-cyd -t upload
   ```

5. **Monitor Serial Output**
   ```bash
   pio device monitor
   ```

## Troubleshooting

### USB Device Not Detected
- Install CP210x driver
- Try different USB cable

### Display Not Showing
- Verify TFT_eSPI configuration
- Check display brightness

### WiFi Not Connecting
- Verify SSID and password in config.h
- Check 2.4 GHz availability
