#define BLYNK_TEMPLATE_ID "TMPL34O2imM28"
#define BLYNK_TEMPLATE_NAME "PIR with Blynk"
#define BLYNK_AUTH_TOKEN "aMnomzFa9Y0MWwhOQ7yVSv0b4nDSkCL-"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = BLYNK_AUTH_TOKEN;  //Enter your Blynk Auth token
char ssid[] = "OPPO A5s";  //Enter your WIFI SSID
char pass[] = "Madhujeevi";  //Enter your WIFI Password
#define pir D2
BlynkTimer timer;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
pinMode(pir,INPUT);
timer.setInterval(100L, pirSensor);
}

void loop() {
 
Blynk.run();//Run the Blynk library
  timer.run();//Run the Blynk timer
}
void pirSensor(){
int Value = analogRead(pir);
Blynk.virtualWrite(V2, Value);
}
