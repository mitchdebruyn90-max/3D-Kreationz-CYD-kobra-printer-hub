cmake_minimum_required(VERSION 3.5)

project(3D-Kreationz-CYD-Kobra-Printer-Hub)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main firmware
add_executable(firmware
    firmware/src/main.cpp
)

target_include_directories(firmware PRIVATE
    firmware/src
    firmware/components
    firmware/apps
)
