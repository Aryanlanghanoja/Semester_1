#include <afstandssensor.h>

                                        // AfstandsSensor(triggerPin, echoPin);
AfstandsSensor afstandssensor(5, 6);  // Starter afstandssensoren på ben 13 og 12.

void setup () {
    Serial.begin(9600);  // Opsætter serial kommunikation tilbage til computeren
    //pinMode(7, OUTPUT);
}

void loop () {
    // Måler afstanden for hver 500ms
    Serial.println(afstandssensor.afstandCM());
    delay(500);

    // if(afstandssensor.afstandCM() > 5.00)
    // {
    //    digitalWrite(7,HIGH);
    // }

    // else
    // {
    //   digitalWrite(7,LOW);
    // }
}




