void setup() {
  Serial.begin(115200);
  Serial2.begin(115200);

  Serial.print("endereço MAC:  ");
  Serial.println(WiFi.macAddress());

   Serial.printf("conectada na rede: ", ssid);
  
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.print("conectado!");
  Serial.print("$");

  udp.begin(localPort);
  Serial.printf("Now listening at IP %s, UDP port %d\n", WiFi.localIP().toString().c_str(), localPort);
     

}