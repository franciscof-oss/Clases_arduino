// Leer temperatura y humedad con DHT-11
// Requiere librería: "DHT sensor library" de Adafruit

#include "DHT.h"

#define DHTPIN 2      // Pin donde está conectado el sensor
#define DHTTYPE DHT11 // Tipo de sensor DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();    // Humedad
  float t = dht.readTemperature(); // Temperatura en °C

  if (isnan(h) || isnan(t)) {
    Serial.println("Error al leer el sensor DHT11!");
    return;
  }

  Serial.print("Humedad: ");
  Serial.print(h);
  Serial.print(" %\t");

  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println(" °C");

  delay(2000); // Esperar 2 segundos antes de la siguiente lectura
}
