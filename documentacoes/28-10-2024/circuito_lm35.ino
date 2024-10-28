int valor_sensor = 0;
#define sensor 15

void setup() {
  Serial.begin(115200);
  pinMode(sensor, INPUT);

}

void loop() {
  valor_sensor = analogRead(sensor);
  Serial.println(valor_sensor);
  delay(500);

}
