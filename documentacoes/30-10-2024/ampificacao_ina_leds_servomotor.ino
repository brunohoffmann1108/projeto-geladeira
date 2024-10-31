#include <ESP32Servo.h>
int pino_servo = 22;
Servo servo;

#define pin_ci 34
#define pin_led 23
int valor_amplificado = 0;

void setup() {
  Serial.begin(115200);
  pinMode(34, INPUT);
  pinMode(35, OUTPUT);
  servo.attach(pino_servo);

}

void loop() {
  valor_amplificado = analogRead(pin_ci);
  Serial.print("Tensao do amplificador: ");
  Serial.println(valor_amplificado);
  int brilho_led = map(valor_amplificado, 0, 4095, 0, 255);

  analogWrite(pin_led, brilho_led);

  int valor_servo = map(valor_amplificado, 0, 4095, 0, 180);
  servo.write(valor_servo);
  Serial.print("Valor do servo: ");
  Serial.println(valor_servo);
  delay(20);
}
