#include <Arduino.h>

#define SENSOR A0

int leituraSensor(int pino);
void iniciaConfiguracao();


void setup() {
  iniciaConfiguracao();
}

void loop() {
  int leSensor = leituraSensor(SENSOR);
  Serial.println("Valor: " + String(leSensor));
  delay(500);
}

int leituraSensor(int pino) {
  int valorAnalogico = analogRead(pino);
  return valorAnalogico;
}

void iniciaConfiguracao() {
  Serial.begin(9600);
}