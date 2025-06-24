#include <Arduino.h>
#include <SPI.h>
#include "bme68xLibrary.h"

// Pines personalizados para ESP32-C6
#define PIN_MOSI 7
#define PIN_MISO 2
#define PIN_SCK  6
#define PIN_CS   18

SPIClass mySPI(0);  // Bus SPI #0 para ESP32-C6
Bme68x bme;

void setup() {
  Serial.begin(115200);
  while (!Serial);

  // Inicializar SPI con pines personalizados
  mySPI.begin(PIN_SCK, PIN_MISO, PIN_MOSI, PIN_CS);

  // Iniciar BME688 en modo SPI
  bme.begin(PIN_CS, mySPI);

  if (bme.checkStatus() == BME68X_ERROR) {
    Serial.println("❌ Error: no se pudo inicializar el sensor.");
    while (1);
  } else if (bme.checkStatus() == BME68X_WARNING) {
    Serial.println("⚠️ Advertencia: " + bme.statusString());
  } else {
    Serial.println("✅ Sensor BME688 SPI listo.");
  }

  bme.setTPH();
  bme.setHeaterProf(300, 100);

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

  delay(1000);
}
