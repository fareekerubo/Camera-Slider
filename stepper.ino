#include <AccelStepper.h>

//AccelStepper Xaxis(1, 2, 5); // pin 2 = step, pin 5 = direction
//AccelStepper Yaxis(1, 3, 6); // pin 3 = step, pin 6 = direction
//AccelStepper Zaxis(1, 4, 7); // pin 4 = step, pin 7 = direction

AccelStepper Xaxis(1, 8, 7); // pin 3 = step, pin 6 = direction
AccelStepper Yaxis(1, 9, 10); // pin 4 = step, pin 7 = direction
AccelStepper Zaxis(1, 12,11); // pin 5 = step, pin 8 = direction

void setup() {
  Xaxis.setMaxSpeed(800);
  Yaxis.setMaxSpeed(800);
  Zaxis.setMaxSpeed(800);
  Xaxis.setSpeed(200);
  Yaxis.setSpeed(200);
  Zaxis.setSpeed(200);
}

void loop() {  
   Xaxis.runSpeed();
   Yaxis.runSpeed();
   Zaxis.runSpeed();
}
