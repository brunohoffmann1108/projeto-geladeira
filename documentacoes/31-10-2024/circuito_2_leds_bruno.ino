#define pino_INA 35
#define pino_LED 25
int valor_INA = 0;

void setup() {
  Serial.begin(115200);
  pinMode(pino_INA, INPUT);
  pinMode(pino_LED, OUTPUT);

}

void loop() {
  valor_INA = analogRead(pino_INA);
  int brilho_led = map(valor_INA, 0, 4095, 0, 255); 
  dacWrite(pino_LED, brilho_led);
  Serial.print("Tensao vindo do INA: ");
  Serial.println(valor_INA);
  delay(50);
}