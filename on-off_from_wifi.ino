#define BLYNK_TEMPLATE_ID "TMPL6H0UmNwk6"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "XohxCnr6eiu8hQnafLo5XrGAmTMhgAGo"


#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "No Network";
char pass[] = "11223344";


//Code

BLYNK_WRITE(V0){
  int value01 = param.asInt();
  
  if(value01 == 1){
    digitalWrite(D5,HIGH);
  }
  if(value01 == 0){
    digitalWrite(D5,LOW);
  }
}

BLYNK_WRITE(V1){
  int value02 = param.asInt();
  
  if(value02 == 1){
    digitalWrite(D6,HIGH);
  }
  if(value02 == 0){
    digitalWrite(D6,LOW);
  }
}


void setup()
{
  Serial.begin(115200);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  
pinMode(D5,OUTPUT);
pinMode(D6,OUTPUT);

}

void loop()
{
  Blynk.run();
}
