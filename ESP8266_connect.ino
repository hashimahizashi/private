#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "is80GgcG65CsoaWh40Idg5bvpvxtYcpr";
char ssid[] = "Razer Phone";
char pass[] = "0992146604";
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
  Blynk.run();
}
