#define pin_pot 34
#define pin_led 25
int valor_pot = 0;

void setup() {
  Serial.begin(115200);
  pinMode(pin_led, OUTPUT);
}

void loop() {
  valor_pot = analogRead(pin_pot);

  int valor_mapeado0 = map(valor_pot, 0, 4095, 0, 63);
  int valor_mapeado1 = map(valor_mapeado0, 0, 63, 0, 255);

  dacWrite(pin_led, valor_mapeado1);
  Serial.println(valor_mapeado0);
  Serial.println(valor_pot);
  Serial.println();
  delay(100);
}
