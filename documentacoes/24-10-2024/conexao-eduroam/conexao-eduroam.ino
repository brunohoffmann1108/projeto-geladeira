#include <WiFi.h>
#include <esp_eap_client.h>

const char *ssid = "eduroam";
const char *identidade = "codigo_de_matriculo";
const char *senha = "senha_do_educare";

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(1000);

  WiFi.begin(ssid);
  esp_eap_client_set_identity((uint8_t *)identidade, strlen(identidade));
  esp_eap_client_set_username((uint8_t *)identidade, strlen(identidade));
  esp_eap_client_set_password((uint8_t *)senha, strlen(senha));
  esp_wifi_sta_enterprise_enable();

  Serial.print("Conectando a rede...");
}

void loop() {
  if(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
  }
  else{
    Serial.println("Conectado.");
    Serial.print("IP: ");
    Serial.println(WiFi.localIP());
  }
  delay(10000);

}
