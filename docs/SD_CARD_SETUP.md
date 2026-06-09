# SD Card Setup Guide

## Hardware Installation

### Requirements
- MicroSD Card (up to 32GB, FAT32)
- Class 10 speed recommended

### Installation
1. Power off ESP32 CYD
2. Insert MicroSD card into slot (back of board)
3. Power on - firmware will auto-detect

## Folder Structure

Firmware auto-creates:
```
/sd/
├── Models/       # STL model files
├── GCode/        # Sliced G-code files
├── Prints/       # Print history
├── Downloads/    # Cloud-downloaded models
└── Temp/         # Temporary files
```

## File Management

### Via CYD Display
- Main Menu → File Manager
- Browse folders
- Upload STL models
- Slice models
- Queue prints

## Storage Tips

- Keep 10% free space minimum
- Organize models by type
- Regular backups recommended
