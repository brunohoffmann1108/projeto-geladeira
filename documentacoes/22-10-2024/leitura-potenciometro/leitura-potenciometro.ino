#define pot_pin 34
int pot_valor = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  pot_valor = analogRead(pot_pin);
  Serial.println(pot_valor);
  delay(1000);
}
