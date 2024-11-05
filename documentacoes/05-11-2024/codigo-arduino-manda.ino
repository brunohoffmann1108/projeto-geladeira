#define pin_botao 3

void setup() {
  Serial.begin(9600);
  pinMode(pin_botao, INPUT);

}

void loop() {
  int i = 0;
  while(digitalRead(pin_botao) == HIGH){
    Serial.println(i);
    i += 1;
    delay(1000);
  }

}
