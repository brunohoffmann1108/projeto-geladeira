#define pino_sensor 34
#define pino_led 32

int valor_sensor = 0;

void setup() {
  Serial.begin(115200);
  pinMode(pino_led, OUTPUT);
  Serial.println("Setup pronto.");

  delay(1000);
}

void loop() {
  valor_sensor = analogRead(pino_sensor);
  Serial.println(valor_sensor);
  if(valor_sensor < 3500){
    digitalWrite(pino_led, HIGH);
  }
  else{
    digitalWrite(pino_led, LOW);
  }

}
