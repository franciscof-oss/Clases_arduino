int rojo = 8;
int amarillo = 9;
int verde = 10;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  // Rojo
  digitalWrite(rojo, HIGH);
  delay(3000);
  digitalWrite(rojo, LOW);

  // Verde
  digitalWrite(verde, HIGH);
  delay(3000);
  digitalWrite(verde, LOW);

  // Amarillo
  digitalWrite(amarillo, HIGH);
  delay(1000);
  digitalWrite(amarillo, LOW);
}
