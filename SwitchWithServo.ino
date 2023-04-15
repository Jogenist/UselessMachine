#include <Servo.h>

Servo myservo;

int pos = 0;

const int analog_ip = A4;   //Naming analog input pin
int inputVal = 0;
void setup() {
  myservo.attach(9);
  // put your setup code here, to run once:
  Serial.begin(9600);       // Initiating Serial communication
}

void loop() {
  // put your main code here, to run repeatedly:
  inputVal = analogRead (analog_ip); // Analog Values 0 to 1023
  Serial.println (inputVal);

  if(inputVal > 20)
  {
    pos = 180;
    myservo.write(pos);
  }
  else
  {
    if(pos > 0)
    {
      pos = 0;
      myservo.write(pos);
    }
  }
}
