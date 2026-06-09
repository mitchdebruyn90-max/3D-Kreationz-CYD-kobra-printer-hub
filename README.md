# 3D Kreationz CYD Kobra Printer Hub

A comprehensive embedded touchscreen interface for ESP32 CYD (2.8" TFT 320x240) enabling wireless 3D printing management and model creation for the Anycubic Kobra S1.

## 🎯 Three Integrated Apps

### App 1: Anycubic Slicer Integration + Maker Online
- **WiFi Printing Workflow**: Direct wireless printing from Anycubic Slicer to Kobra S1
- **Print Job Queue Management**: Queue, schedule, and manage multiple print jobs
- **Real-Time Print Monitoring**: Live progress tracking with temperature monitoring
- **Live Video Streaming**: Real-time camera feed to view prints as they happen
- **File Management**: Browse, organize, and manage print files on SD card
- **Maker Online Sync**: Cloud integration for remote print management
- **Print Control**: Pause, resume, cancel with one-touch controls
- **Temperature Monitoring**: Real-time nozzle and bed temperature display

### App 2: Mini 3D Modeler (Fusion 360-lite)
- **3D Model Creation**: Build models from basic primitives
- **Primitives**: Cube, Sphere, Cylinder, Cone
- **Boolean Operations**: Union, Subtract, Intersect
- **Transformations**: Move, Rotate, Scale objects
- **3D Preview**: Real-time visualization on CYD display
- **Model Slicing**: Built-in slicer for print preview
- **STL Export**: Save models as STL for printing
- **STL Import**: Load existing 3D models
- **Print Preview**: Slice and preview before printing

## 🚀 Core Features

### WiFi Printing Workflow
- Connect CYD to same WiFi as Anycubic Slicer and Kobra S1
- Drag-and-drop file transfer via WiFi
- Automatic printer discovery on network
- Print job queuing system
- Wireless print start/stop/pause controls

### File Management
- **SD Card Support**: Store and manage print files locally
- **Folder Structure**: Organized file browsing
  ```
  SD Card Root/
  ├── Models/          # STL models
  ├── GCode/           # Sliced G-code files
  ├── Prints/          # Print history
  └── Downloads/       # Downloaded from cloud
  ```
- **Save/Load Options**: Easy file operations
- **File Metadata**: View file size, date, preview
- **Search & Filter**: Find files quickly

### Real-Time Print Monitoring
- **Live Progress Bar**: Current print percentage
- **Temperature Display**:
  - Nozzle temperature (current/target)
  - Bed temperature (current/target)
  - Real-time temperature graph
- **Print Time**: Elapsed and estimated time remaining
- **Live Video Streaming**: 
  - Embedded camera support (optional USB camera)
  - MJPEG streaming to CYD display
  - Motion detection and recording
- **Print Statistics**:
  - Layer information
  - Speed monitoring
  - Filament usage tracking

### 3D Model Preview + Slicing
- **3D Preview**: Rotate, zoom, pan models on display
- **Built-in Slicer**: Generate G-code from STL
- **Slice Preview**: Layer-by-layer visualization
- **Print Settings**:
  - Layer height (0.1-0.4mm)
  - Infill percentage (0-100%)
  - Support generation
  - Nozzle diameter selection
- **Export to Printer**: Direct transfer to printer queue

## Hardware Requirements

- **ESP32 2432S028 CYD** (Sunton 2.8" TFT 320x240 with Touch)
- **Anycubic Kobra S1** 3D Printer
- **MicroSD Card** (up to 32GB, FAT32 formatted)
- **WiFi 2.4GHz** connectivity
- **USB Power** (5V 2A minimum)
- **Optional**: USB Camera (for live video streaming)

## Project Structure

```
3D-Kreationz-CYD-kobra-printer-hub/
├── firmware/
│   ├── src/
│   │   ├── main.cpp              # Entry point
│   │   └── config.h              # Configuration
│   ├── components/
│   │   ├── ui_engine/            # UI framework
│   │   ├── wifi_manager/         # WiFi connectivity
│   │   ├── display_driver/       # Display abstraction
│   │   ├── sd_card_manager/      # SD card file operations
│   │   ├── video_streaming/      # Camera & video support
│   │   └── slicer_engine/        # G-code generation
│   └── apps/
│       ├── app_manager.h/cpp     # App orchestration
│       ├── anycubic_app/         # Printer integration
│       │   ├── anycubic_app.h/cpp
│       │   ├── print_monitor.h/cpp
│       │   ├── slicer_protocol.h
│       │   └── video_stream.h/cpp
│       └── modeler_app/          # 3D modeling
│           ├── modeler_app.h/cpp
│           ├── mesh_engine.h/cpp
│           └── slicer.h/cpp
├── docs/
│   ├── HARDWARE_SETUP.md
│   ├── WIFI_CONFIG.md
│   ├── SD_CARD_SETUP.md
│   ├── BUILD.md
│   └── API_REFERENCE.md
├── platformio.ini
├── CMakeLists.txt
├── .gitignore
├── LICENSE
└── README.md
```

## Quick Start

1. **Clone repository**
   ```bash
   git clone https://github.com/mitchdebruyn90-max/3D-Kreationz-CYD-kobra-printer-hub.git
   cd 3D-Kreationz-CYD-kobra-printer-hub
   ```

2. **Install Dependencies**
   - PlatformIO IDE or CLI
   - ESP-IDF (handled by PlatformIO)

3. **Configure Hardware**
   - See [HARDWARE_SETUP.md](docs/HARDWARE_SETUP.md)
   - See [SD_CARD_SETUP.md](docs/SD_CARD_SETUP.md)

4. **Configure WiFi**
   - Edit `firmware/src/config.h`
   - See [WIFI_CONFIG.md](docs/WIFI_CONFIG.md)

5. **Build & Upload**
   ```bash
   pio run -e esp32-cyd -t upload
   pio device monitor
   ```

## Technologies

- **C++ 17** - Core firmware
- **Arduino Framework** - ESP32 compatibility
- **TFT_eSPI** - Display driver
- **WiFi/AsyncTCP** - Network communication
- **SD/SPIFFS** - File system management
- **MJPEG** - Video streaming protocol
- **STL Processing** - 3D model handling

## Documentation

- [Hardware Setup Guide](docs/HARDWARE_SETUP.md)
- [WiFi Configuration](docs/WIFI_CONFIG.md)
- [SD Card Setup](docs/SD_CARD_SETUP.md)
- [Build Instructions](docs/BUILD.md)
- [API Reference](docs/API_REFERENCE.md)

## Features Roadmap

- [x] WiFi printing workflow
- [x] File management with SD card
- [x] Real-time print monitoring
- [x] Live video streaming support
- [x] 3D model preview and slicing
- [ ] Multi-material printing support
- [ ] Remote WiFi printing from mobile app
- [ ] Print history and statistics
- [ ] Advanced slicing algorithms
- [ ] Mesh repair and optimization

## License

MIT License - See [LICENSE](LICENSE) file for details

## Contributing

Contributions welcome! Please fork and submit pull requests.

## Support

For issues, questions, or feature requests, please open a GitHub issue.
