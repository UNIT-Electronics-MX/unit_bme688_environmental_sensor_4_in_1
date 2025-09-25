# Examples

## Arduino/C++ Examples

The following examples demonstrate various features of this development board.

### ⚡ i2c: example1.ino
```cpp
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
```
[📄 Ver código completo en GitHub](https://github.com/UNIT-Electronics-MX/unit_bme688_environmental_sensor_4_in_1/blob/main/software/examples/c/i2c/example1.ino)

### ⚡ spi: example_spi.ino
```cpp
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

```
[📄 Ver código completo en GitHub](https://github.com/UNIT-Electronics-MX/unit_bme688_environmental_sensor_4_in_1/blob/main/software/examples/c/spi/example_spi.ino)

