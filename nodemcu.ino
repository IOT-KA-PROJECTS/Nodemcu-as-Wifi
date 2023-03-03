#include <ESP8266WiFi.h>

const char *ssid = "GrootM"; // Mobile hotspot Name
const char *pwd = "grootgroot";  // Mobile hotspot password

void setup() {

  Serial.begin(9600);
  delay(10);
  Serial.print("Wait Connection With : ");
  Serial.println(ssid);
  WiFi.begin(ssid, pwd);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("please wait . . . .");
  }
  Serial.println("");
  Serial.print("WiFi connected With : ");
  Serial.println(ssid);
  Serial.println('\n');
  Serial.print("IP Address");
  Serial.println(WiFi.localIP());
}

void loop() {

}

