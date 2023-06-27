/*
Inclusões de bibliotecas
*/
#include <WiFi.h>
#include <WiFiUdp.h>

/***************************************************************************
Variaveis da rede 
*****************************************************************************/
/******configurações de comunicação*******/
IPAddress remotIP(192, 168, 1, 4);
unsigned int localPort = 60001;
unsigned int remotlPort = 60011;
const char *ssid = "CASALFLJF";
const char *password = "luchicojf";
//const char *ssid = "casalfjf_2g";
//const char *password = "q1w2e3r4";
WiFiUDP udp;
String recebido;

/*************Strings de endereço para enviar via rede******/
String EndSenNivCis = "00";
String EndSenNivCx = "01";
String EndFx = "02";
String EndVol = "03";
String EndStNivCis = "04";
String EndStNivCx = "05";
String EndStBomPc = "06";
String EndStBomCis = "07";

String separador = "#"; // caracter indicativo de inicio e fim de menssagem

/**********************************************************************************************************************
Variável de loop 
**********************************************************************************************************************/
long ciclo = 0;
int cicloAnalog = 0;
unsigned long tempoSeg = 0;
unsigned long tempoSegAnt = 0;
long tempo = 0;













