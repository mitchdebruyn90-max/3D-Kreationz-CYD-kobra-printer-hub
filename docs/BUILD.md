# Build Instructions

## Quick Start

```bash
git clone https://github.com/mitchdebruyn90-max/3D-Kreationz-CYD-kobra-printer-hub.git
cd 3D-Kreationz-CYD-kobra-printer-hub

pio run -e esp32-cyd
pio run -e esp32-cyd -t upload
pio device monitor
```

## Build Configuration

See `platformio.ini` for settings:
- Optimization: -O2
- TFT_eSPI display driver
- ESP32 partition scheme
- Memory settings for 4MB flash

## Development Workflow

1. Edit source files
2. Build: `pio run`
3. Upload: `pio run -t upload`
4. Test with: `pio device monitor`

## Debug Output

Edit `firmware/src/config.h` to enable debug:
```cpp
#define DEBUG_ENABLED true
```

## Troubleshooting

### Build Errors
- Clear cache: `pio run --target clean`
- Check TFT_eSPI library version

### Upload Fails
- Press RST button on ESP32
- Try lower baud rate
- Check USB cable
