void SendUdp(String valor){//Sub-rotina para enviar dados ao host.
   if (WiFi.status() == WL_CONNECTED)//Só ira enviar dados se estiver conectado.
   {
      udp.beginPacket(remotIP, remotlPort);//Inicializa o pacote de transmissao ao IP e PORTA.
      udp.println(valor);//Adiciona-se o valor ao pacote.
      udp.endPacket();//Finaliza o pacote e envia.
      Serial.println("menssagem enviada");
      Serial.println(valor);
      delay(50);
    }
   else//Caso nao esteja com uma conexao estabelicida ao host, piscara lentamente.
   {
     Serial.println("Comunicação UDP desconectada");
   }
}


void testerede(){
String envio;
envio = "#00120#";
SendUdp(envio);
delay(500);
envio = "#0189#";
SendUdp(envio);
delay(500);
envio = "#024#";
SendUdp(envio);
delay(500);
envio = "#00115#";
SendUdp(envio);
delay(500);
envio = "#0192#";
SendUdp(envio);
delay(500);
envio = "#034#";
SendUdp(envio);
delay(500);
envio = "#043#";
SendUdp(envio);
delay(500);
envio = "#070#";
SendUdp(envio);
delay(50);

}
