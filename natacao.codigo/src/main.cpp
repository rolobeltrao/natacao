
// =================== Bibliotecas Auxiliares ===================
#include <Arduino.h>

// ====================== Defines e Hardware ====================

#define SENSOR A0

// =================== Protótipo Funçõex Aux ====================

int leituraSensor(int pino);
void iniciaConfiguracao();

// ========================== Setup ==============================

void setup() {
  iniciaConfiguracao();
}

// ========================== Loop ==============================

void loop() {
  int leSensor = leituraSensor(SENSOR);
  Serial.println("Valor: " + String(leSensor));
  delay(500);
}

// =================== Implementação Funções Aux ====================

int leituraSensor(int pino) {
  int valorAnalogico = analogRead(pino);
  return valorAnalogico;
}

void iniciaConfiguracao() {
  Serial.begin(9600);
}