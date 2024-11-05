#define pin_tensao 34
int valor_tensao = 0;

void setup() {
  Serial.begin(115200);
  pinMode(pin_tensao, INPUT);
}

void loop() {
  valor_tensao = analogRead(pin_tensao);
  int tensao = 0;
  if(valor_tensao > 3300){
    tensao = map(valor_tensao, 3300, 4095, 0, 5);
  }
  else{
    tensao = map(valor_tensao, 0, 3300, -5, 0);
  }
  Serial.print("Valor tensao: ");
  Serial.println(valor_tensao);
  Serial.print("Valor tensao de vdd: ");
  Serial.println(tensao);

  delay(50);
}
