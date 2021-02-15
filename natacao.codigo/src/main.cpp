
// =================== Bibliotecas Auxiliares ===================
#include <Arduino.h>

// ====================== Defines e Hardware ====================

#define SENSOR A0

#define BAUD_RATE 9600

// =================== Protótipo Funçõex Aux ====================

int leituraSensor(int pino);
void iniciaConfiguracao();

// =================== Variáveis/Constantes Globais ====================

long ultimoMillis;
const int intervalo = 500;

// ========================== Setup ==============================

void setup() {
  iniciaConfiguracao();
}

// ========================== Loop ==============================

void loop() {
  if (millis() - ultimoMillis > intervalo) {
    int leSensor = leituraSensor(SENSOR);
    Serial.println("Valor: " + String(leSensor));

    ultimoMillis = millis();
  }
  
}

// =================== Implementação Funções Aux ====================

int leituraSensor(int pino) {
  int valorAnalogico = analogRead(pino);
  return valorAnalogico;
}

void iniciaConfiguracao() {
  Serial.begin(BAUD_RATE);
}