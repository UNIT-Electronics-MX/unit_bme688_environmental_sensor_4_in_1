# BME688 Environmental Sensor 4-in-1

## Introduction

The BME688 Environmental Sensor 4-in-1 is a compact and highly integrated sensing solution based on Bosch Sensortec’s advanced gas sensor technology. Designed for next-generation environmental monitoring, this module simultaneously measures four key parameters: temperature, relative humidity, barometric pressure, and gas presence, including volatile organic compounds (VOCs) and indoor air quality (IAQ) indicators. By combining multiple sensors in one package, the BME688 reduces design complexity and board space, making it especially suitable for size-constrained applications such as wearables, portable devices, and smart IoT nodes.

The module features digital communication via I²C or SPI interfaces, ensuring seamless integration with microcontrollers and embedded platforms like Arduino, ESP32, and Raspberry Pi. Its ultra-low power consumption enables continuous monitoring in battery-operated systems, while its wide operating range and high accuracy support precise environmental data acquisition under dynamic conditions. Furthermore, the gas sensor includes support for AI-based classification of gas mixtures using Bosch’s BME AI-Studio, opening new possibilities for custom air quality applications.



<div align="center">
  <img src="hardware/resources/unit_top_v_1_0_0_bme688_enviromental_sensor_4_in_1.png" width="450px" alt="Development Board">
  <p><em></em></p>
</div>




## 📦 Overview

| Parameter                | Value/Description                                 |
|--------------------------|---------------------------------------------------|
| Operating Voltage        | 1.71V to 3.6V                                     |
| Supply Current           | 0.9 µA (sleep), 2.1 µA (ULP), ~920 µA (gas scan)  |
| Operating Temperature    | -40°C to +85°C                                    |
| Relative Humidity Range  | 0% to 100% RH                                     |
| Pressure Range           | 300 hPa to 1100 hPa                               |
| Gas Sensing              | VOCs, IAQ index via integrated gas sensor         |
| Interfaces               | I²C and SPI (up to 3.4 MHz)                       |
| Package Size             | 3.0 × 3.0 × 0.93 mm³                              |



## Key Features


- **Relative Humidity**: Accurately measures ambient moisture for precise environmental monitoring.
- **Barometric Pressure**: Detects atmospheric pressure changes to support dynamic weather tracking.
- **Excellent Temperature Stability**: Delivers consistent temperature readings even under varying conditions.
- **Gas Sensing**: Monitors a range of gases to help identify potential environmental hazards.
- **Power Consumption:** Optimized for low power usage, making it ideal for battery-operated devices.
- **Interfaces:** I²C and SPI
- **Input Voltage via VCC Pin:** 3.6–6.0 V (through onboard voltage regulator)

## 🧪 Use Cases

- **Environmental Monitoring:** Tracks air quality, humidity, temperature, and pressure in smart homes and industrial settings.
- **IoT Devices:** Integrates into IoT systems for real-time environmental data collection and analysis.
- **Weather Stations:** Enables accurate weather forecasting and monitoring in DIY weather station projects.
- **Smart Agriculture:** Monitors soil and air conditions to optimize crop growth and yield.
- **Wearable Devices:** Supports health and fitness wearables for environmental parameter monitoring.



## 📚 Resources

- [Schematic Diagram](hardware/schematic.pdf)
- [Board Dimensions (DXF)](docs/dimensions.dxf)
- [Pinout Diagram](docs/pinout.png)
- [Firmware Examples](firmware/)
- [Getting Started Guide](docs/getting_started.md)


## 📝 License

All hardware and documentation in this project are licensed under the **MIT License**.  
Please refer to [`LICENSE.md`](LICENSE.md) for full terms.



<div align="center">
  <sub>Template created by UNIT Electronics </sub>
</div>

