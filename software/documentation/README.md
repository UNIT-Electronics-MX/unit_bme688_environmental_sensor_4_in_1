---
title: "BME688 Environmental Sensor 4-in-1"
version: "1.0"
modified: "2025-04-30"
output: "bme688_environmental_sensor_4-in-1"
subtitle: "Versatile sensor module"
---

<!--
# README_TEMPLATE.md
This file serves as an input to generate a datasheet-style technical PDF.
Fill in each section without deleting or modifying the existing headings.
-->

# BME688 Environmental Sensor 4-in-1

![Product](../../hardware/resources/unit_top_v_1_0_0_bme688_enviromental_sensor_4_in_1.png) <!-- FILL HERE: replace image if needed -->

## Introduction

<!-- FILL HERE -->
The **BME688 Environmental Sensor 4-in-1** is a versatile sensor module that combines temperature, humidity, pressure, and gas sensing capabilities in a single compact package. 

## Functional Description

<!-- FILL HERE -->
- Accurately measures ambient moisture for precise environmental monitoring.
- Detects atmospheric pressure changes to support dynamic weather tracking.
- Delivers consistent temperature readings even under varying conditions.
- Monitors a range of gases to help identify potential environmental hazards.

## Electrical Characteristics & Signal Overview

<!-- FILL HERE -->
- current draw, logic levels, ADC resolution, touchpad sensitivity
- Power supply: 1.71V to 3.6V
- 

## Applications

<!-- FILL HERE -->
- **Environmental Monitoring**: Ideal for tracking air quality, humidity, temperature, and pressure in smart homes and industrial applications.
- **IoT Devices**: Can be integrated into IoT systems for real-time environmental data collection and analysis.
- **Weather Stations**: Useful in DIY weather stations for accurate weather forecasting and monitoring.
- **Smart Agriculture**: Helps in monitoring soil and air conditions to optimize crop growth and yield.
- **Wearable Devices**: Can be used in health and fitness wearables to monitor

## Features

<!-- FILL HERE -->
- List of main technical features of the microcontroller and board design

## Pin & Connector Layout

| Group     | Available Pins | Suggested Use                          |
|-----------|----------------|----------------------------------------|
| GPIO      | <!-- FILL -->  | <!-- FILL -->                          |
| UART      | <!-- FILL -->  | <!-- FILL -->                          |
| TouchPad  | <!-- FILL -->  | <!-- FILL -->                          |
| Analog    | <!-- FILL -->  | <!-- FILL -->                          |
| SPI       | SCK, SDI, SDO  | <!-- FILL -->                          |
| I²C       | QWIIC Connector  | <!-- FILL -->                          |

## Settings

### Interface Overview

| Interface  | Signals / Pins               | Typical Use               |
|------------|------------------------------|---------------------------|
| UART       | <!-- FILL -->                | <!-- FILL -->             |
| I2C        | CSB must be connected to VDD | <!-- FILL -->             |
| SPI        | CSB must be connected to GND | <!-- FILL -->             |
| USB        | <!-- FILL -->                | <!-- FILL -->             |

### Supports

| Symbol | I/O         | Description                        |
|--------|-------------|------------------------------------|
| VCC    | Input       | 3.3V or 5V                         |
| GND    | GND         | Common ground for all components   |
| IO     | Bidirectional | <!-- FILL -->                    |

## Block Diagram

![Function Diagram](images/pinout.png) <!-- FILL HERE: replace image if needed -->

## Dimensions

![Dimensions](../../hardware/resources/unit_dimension_v_1_0_0_bme688_environmental_sensor_4_in_1.png) <!-- FILL HERE: replace image if needed -->

## Usage

<!-- FILL HERE -->
Mention supported development platforms and toolchains 

- (e.g., Arduino IDE, ESP-IDF, PlatformIO, etc.)

## Downloads

<!-- FILL HERE -->
- [Schematic PDF](docs/schematic.pdf)
- [Board Dimensions DXF](docs/dimensions.dxf)
- [Pinout Diagram PNG](docs/pinout.png)

## Purchase

<!-- FILL HERE -->
- [Buy from vendor](https://example.com)
- [Product page](https://example.com/product/template-board)
