#include <EduIntro.h>

const int trigPin = 11; 
const int echoPin = 12; 
const int ldrpin = 4;
const int ledpin = 2;

long duration;
long distance;

int brightnessVal;

ServoMotor servo(6);		// creating the object 'servo' on pin D6

void setup() 
{

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(ldrpin,INPUT); // Sets the ldrpin as input
  pinMode(ledpin ,OUTPUT); // Sets the ledpin as outpin

  Serial.begin(9600); // Starts the serial communication

}

void loop() {

  brightnessVal = digitalRead(ldrpin);

    servo.write(0);
    digitalWrite(ledpin,HIGH);

  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculating the distance
  distance= duration*0.034/2;

  // Prints the distance on the Serial Monitor.
  Serial.print("Distance:-");
  Serial.print(distance);
  Serial.print("cm\n");

  // Prints the reading of LDR Sensor on Serial Monitor.
  Serial.print("Brightness:-");
  Serial.print(brightnessVal);
  Serial.print("\n");


  if(distance > 0 && distance <= 30)
  {
    
      servo.write(180);
      delay (3000);   // wait for a second
      servo.write(0);

  }

  else
  {
      servo.write(0);
  }

  if(brightnessVal == 1)
  {
      digitalWrite(ledpin , LOW);
  }

  else
  {
      digitalWrite(ledpin , HIGH);
  }
  
  delay(2000);

}