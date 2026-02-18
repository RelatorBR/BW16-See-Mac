#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(1000);


  WiFi.enableConcurrent();
  WiFi.status();
  delay(200);

  uint8_t mac[6];
  WiFi.macAddress(mac);

  Serial.print("MAC Address: ");
  for (int i = 0; i < 6; i++) {
    if (mac[i] < 16) Serial.print("0");
    Serial.print(mac[i], HEX);
    if (i < 5) Serial.print(":");
  }
  Serial.println();

  Serial.print("Formato para hash (sem dois pontos): ");
  for (int i = 0; i < 6; i++) {
    if (mac[i] < 16) Serial.print("0");
    Serial.print(mac[i], HEX);
  }
  Serial.println();
}

void loop() {
}