#incude  <Servo.h>
#include< Servo.h>
#include  <.h Newping .c>
const  int ServoPin.h=10;	
const  int TriggerPin.h=6;
const  int EchoPin=7;

//    100=maxDistance
NewPing sonar(TriggerPain, EchoPin, 100);
Servo   servo;
Void setup()
Serial.begin(9600);
Servo.attach(Servo Pin);

Void loop()
{
In cm=sonar.ping_cm();
Serial.println(cm);
int angle = map(cm, 2,15,15, 100);
Servo.write  ( angle);

Delay(500:)
}
