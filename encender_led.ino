// Ejemplo básico: Encender y apagar un LED en el pin 4

int ledPin = 4;   // Pin digital donde está conectado el LED

void setup() {
  pinMode(ledPin, OUTPUT);  // Configurar el pin como salida
}

void loop() {
  digitalWrite(ledPin, HIGH); // Encender LED
  delay(1000);                // Esperar 1 segundo
  digitalWrite(ledPin, LOW);  // Apagar LED
  delay(1000);                // Esperar 1 segundo
}
