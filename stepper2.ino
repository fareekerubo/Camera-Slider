#include <AccelStepper.h>

AccelStepper stepper (1, 9,10);
int MODE0 = 7;
int MODE1 = 6;
int MODE2 = 5;

void setup()
{  
   stepper.setMaxSpeed(15000);
   stepper.setSpeed(12000);
   pinMode(MODE0, OUTPUT); 
   pinMode(MODE1, OUTPUT); 
   pinMode(MODE2, OUTPUT);


   //Motor is now running in Microstepping mode (1/16)

   digitalWrite(MODE0, LOW);
   digitalWrite(MODE1, LOW);
   digitalWrite(MODE2, HIGH);

}

void loop()
{  

   stepper.runSpeed();
}
