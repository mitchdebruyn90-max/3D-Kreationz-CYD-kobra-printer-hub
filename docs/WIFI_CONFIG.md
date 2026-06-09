# WiFi Configuration Guide

## Quick Setup

Edit `firmware/src/config.h`:
```cpp
#define WIFI_SSID "YOUR_SSID"
#define WIFI_PASSWORD "YOUR_PASSWORD"
#define PRINTER_IP "192.168.1.100"
```

Build and upload:
```bash
pio run -e esp32-cyd -t upload
```

## Network Requirements

- 2.4 GHz WiFi (ESP32 does not support 5 GHz)
- Stable internet connection
- Printer on same network (recommended)

## Anycubic Kobra S1 Setup

1. Power on printer
2. Menu → Network → WiFi
3. Connect to your network
4. Note printer's IP address
5. Update `PRINTER_IP` in config.h

## Troubleshooting

### WiFi Not Connecting
1. Check SSID/password spelling
2. Verify 2.4 GHz network availability
3. Check WiFi signal strength
4. Restart router

### Printer Not Found
1. Verify printer IP address
2. Update `PRINTER_IP` in config.h
3. Check firewall settings
