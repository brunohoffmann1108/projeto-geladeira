#define pino_led 27

void setup(){
  pinMode(pino_led, OUTPUT);
}

void loop(){
  digitalWrite(pino_led, HIGH);
  delay(1000);

  digitalWrite(pino_led, LOW);
  delay(1000);
}