#include <Servo.h>

// Servo e pinos do sensor
Servo servo;
#define TRIGGER_PIN 9
#define ECHO_PIN 8
#define SERVO_PIN 6

// Parâmetros PID
#define KP 6.0 // 20
#define KI 0.04// 0.04
#define KD 11.0 //25

// Definição física do sistema
const double SENSOR_OFFSET = 2.0;       // Distância entre o sensor e a borda da ponte
const double PONTE_COMPRIMENTO = 19.0;  // Comprimento total da ponte em cm
const double SETPOINT = 8.0;            // Posição desejada da bolinha (cm)

// Variáveis PID
double prevError = 0;
double integral = 0;

void setup() {
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  servo.attach(SERVO_PIN);
  //Serial.begin(9600);
  servo.write(90);  // Ponte nivelada
  delay(1000);
}

void loop() {
  ///*
  double position = readDistance();

  if (!isnan(position)) {
    double error = SETPOINT - position;
    integral += error;
    double derivative = error - prevError;

    double pidOutput = KP * error + KI * integral + KD * derivative;
    prevError = error;

    // Converte a saída PID em ângulo do servo (90 é horizontal)
    double angle = constrain(90 + pidOutput, 0, 180);

    servo.write((int)angle);

    //Serial.print("Pos: "); Serial.print(position);
    //Serial.print(" cm | Erro: "); Serial.print(error);
    //Serial.print(" | PID: "); Serial.print(pidOutput);
    //Serial.print(" | Ang: "); Serial.println(angle);
  } else {
    Serial.println("Leitura inválida");
  }

  delay(50);
}

// Função para ler a distância em cm do sensor ultrassônico
long readDistance() {
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH, 20000UL); // timeout de 20 ms (max 3.4 m)
  if (duration == 0) return NAN; // erro ou timeout

  double cm = duration / 29.0 / 2.0;

  // Trata leituras fora do intervalo válido (ex: bolinha muito perto do sensor)
  if (cm <= SENSOR_OFFSET) {
    return 0.0;
  }

  return cm - SENSOR_OFFSET;
  //*/
}

