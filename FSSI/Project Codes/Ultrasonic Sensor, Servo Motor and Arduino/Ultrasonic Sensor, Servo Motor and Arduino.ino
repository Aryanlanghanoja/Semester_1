#include <afstandssensor.h>
#include <EduIntro.h>

// AfstandsSensor(triggerPin, echoPin);
AfstandsSensor afstandssensor(10, 11);  // Starter afstandssensoren på ben 10 og 11.
ServoMotor servo(6);		// creating the object 'servo' on pin D6

int brightnessVal;
unsigned float Distance;

void setup ()
{
    pinMode(2,OUTPUT);
    pinMode(4,INPUT);
    Serial.begin(9600);  // Opsætter serial kommunikation tilbage til computeren
}

void loop ()
{
    Distance= afstandssensor.afstandCM() ;

    servo.write(0);
    digitalWrite(2,HIGH);

    brightnessVal = digitalRead(4);

    Serial.print("Distance:-");
    Serial.print(Distance);
    Serial.print(" cm\n");

    Serial.print("Brightness:-");
    Serial.print(brightnessVal);
    Serial.print("\n");

    if(Distance <= 30.00 && Distance > 0)
    {
        servo.write(180);
        delay (200);   // wait for a second
        servo.write(0);
    }

    else if(Distance == -1.00 || Distance == 0.00 )
    {
        servo.write(0);
    }

    else
    {
        servo.write(0);      
    }

    if(brightnessVal == 1)
    {
      digitalWrite(2,LOW);
      delay(1000);
    }

    else
    {
      digitalWrite(2,HIGH);
    }

}