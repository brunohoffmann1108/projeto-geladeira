 #include "WiFi.h"

void setup(){
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(1000);

  Serial.println("Setup Pronto.");
  Serial.println();
}

void loop(){
  int num_redes = WiFi.scanNetworks();

  if(num_redes == 0){
    Serial.println("Nenhuma rede encontrada.");
  }

  else{
    Serial.print(num_redes);
    Serial.println(" REDES ENCONTRADAS:");
    for(int i = 0; i < num_redes; i++){
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" | Velocidade: ");
      Serial.println(WiFi.RSSI(i));
    }

    Serial.println();
    delay(5000);
  }
}