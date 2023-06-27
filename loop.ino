void loop() {
ciclo ++; 
if((millis() - tempoSegAnt) > 1000){
  tempoSegAnt = millis();
  tempo ++; 
  //cont60seg ++;
  //testerede();
  Serial.print("o tempo de inicilaização aproximado em segundos: ");
  Serial.print(tempo);
  Serial.print(" e a quantidade de cilos: ");
  Serial.println(ciclo);
  }
  
if (Serial2.available() > 0) { // verifica se existe dados na porta serial
   recebido = Serial2.readString();// lê do buffer o dado recebido como uma string;
  SendUdp(recebido); // envia via protocolo udp o dado recebido 
  Serial.println("-----------");
  Serial.println(recebido);
  Serial.println("-----------");
  while (Serial2.available() > 0) {
    Serial2.read();
  }
}

}
  

//int tamrec = Serial2.available(); 
  //int finalvalor = tamrec - 3;

