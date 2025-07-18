---
title: "BME688 Environmental Sensor 4-in-1"
version: "1.0"
modified: "2025-04-30"
output: "bme688_environmental_sensor_4-in-1"
subtitle: "The sensor module for professional environmental monitoring"
---

<!--
# README_TEMPLATE.md
This file serves as an input to generate a datasheet-style technical PDF.
Fill in each section without deleting or modifying the existing headings.
-->

# BME688 Environmental Sensor 4-in-1

![Product](../../hardware/resources/unit_top_v_1_0_0_bme688_enviromental_sensor_4_in_1.png) 


## Key Technical Specifications

- Operating Voltage: 1.71V to 3.6V
- Supply Current: 0.9 µA (sleep), 2.1 µA (ULP), ~920 µA (gas scan)
- Operating Temperature: -40°C to +85°C
- Relative Humidity Range: 0% to 100% RH
- Pressure Range: 300 hPa to 1100 hPa
- Gas Sensing: VOCs, IAQ index via integrated gas sensor
- Interfaces: I²C and SPI (up to 3.4 MHz)
- Package Size: 3.0 × 3.0 × 0.93 mm³



## Pin & Connector Layout

| Group     | Available Pins                                 | Suggested Use                                     |
|-----------|------------------------------------------------|---------------------------------------------------|
| SPI       | CSB, SDI (MOSI), SDO (MISO), SCK               | High-speed SPI to read sensor data                |
| I²C       | SDA, SCL (via Qwiic connector)                 | Standard I²C for configuration & data acquisition |

## Settings

### Interface Overview

| Interface | Signals / Pins                          | Typical Use                          |
|-----------|-----------------------------------------|--------------------------------------|
| UART      | –                                       | Unavailable                          |
| I²C       | SDA, SCL  (CSB held high)               | Default interface (Qwiic connector)  |
| SPI       | CSB = GND, SDI (MOSI), SCK, SDO (MISO)  | High-speed alternative               |
| USB       | –                                       | Unavailable on this module           |

### Supports

| Symbol | I/O         | Description                        |
|--------|-------------|------------------------------------|
| VCC    | Input       | 3.3V or 5V                         |
| GND    | GND         | Common ground for all components   |


## Block Diagram

![Function diagram](../../hardware/resources/unit_pinout_v_0_0_1_ue0095_bm3688_4_in_1_en.png) <!-- FILL HERE: replace image if needed -->

## Dimensions

![Dimensions](../../hardware/resources/unit_dimension_v_1_0_0_bme688_environmental_sensor_4_in_1.png) <!-- FILL HERE: replace image if needed -->
