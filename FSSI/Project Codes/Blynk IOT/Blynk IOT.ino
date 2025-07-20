#define BLYNK_TEMPLATE_ID "TMPLabetgbGr"
#define BLYNK_DEVICE_NAME "DUSTBIN FULL1"
#define BLYNK_AUTH_TOKEN "dER05cLr4htMpkKmVrW0QufnxfKWdQ-L"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "One Plus Nord CE 2 Lite 5G";  // type your wifi name
char pass[] = "13610@Aryan";                 // type your wifi password

const int trigPin = D5;
const int echoPin = D6;

long duration;
int distance;

int sensorThres = 100;

BlynkTimer timer;

void sendSensor() 
{

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print("\n");
  delay(500);

  if (distance <= 5.00) 
  {
//    Blynk.email("aryanlanghanoja233@gmail.com", "Alert!", "The Dustbin Is Overflowing.");
    Blynk.logEvent("dustbin_full", "The Dustbin Is Overflowing.");
  }

}

void setup() 
{

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(2500L, sendSensor);

}

void loop() 
{

  Blynk.run();
  timer.run();
  
}
