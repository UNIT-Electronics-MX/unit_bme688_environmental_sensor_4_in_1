#include <Arduino.h>
#include "bme68xLibrary.h"
#include <Wire.h>

#define SDA_PIN 21
#define SCL_PIN 22

Bme68x bme;

void setup() {
  Serial.begin(115200);
  while (!Serial) delay(10);

  Wire.begin(SDA_PIN, SCL_PIN);
  Wire.setClock(100000);  // 100 kHz

  // ✅ Solo llama a begin, sin usar if
  bme.begin(0x77, Wire);

  // Verifica estado del sensor
  if (bme.checkStatus() == BME68X_ERROR) {
    Serial.println("❌ Error: BME688 no detectado.");
    while (1);
  }

  Serial.println("✅ Sensor BME688 inicializado correctamente.");

  bme.setTPH();  // Temp, Pressure, Humidity
  bme.setHeaterProf(300, 100);  // Heater: 300°C, 100 ms

  Serial.println("Time(ms), Temp(°C), Pressure(Pa), Humidity(%), Gas(Ω), Status");
}

void loop() {
  bme68xData data;

  bme.setOpMode(BME68X_FORCED_MODE);
  delayMicroseconds(bme.getMeasDur());

  if (bme.fetchData()) {
    bme.getData(data);

    Serial.print(millis()); Serial.print(", ");
    Serial.print(data.temperature); Serial.print(", ");
    Serial.print(data.pressure); Serial.print(", ");
    Serial.print(data.humidity); Serial.print(", ");
    Serial.print(data.gas_resistance); Serial.print(", ");
    Serial.println(data.status, HEX);
  }

  delay(100);
}
