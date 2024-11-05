#include <HardwareSerial.h>

HardwareSerial serial_arduino(2);

void setup() {
  serial_arduino.begin(9600, SERIAL_8N1, 16, 17);
  Serial.begin(115200);

}

void loop() {
  while(serial_arduino.available() > 0){
    int dados_recebidos = serial_arduino.parseInt();
    Serial.println(dados_recebidos);
  }

  delay(10);

}
