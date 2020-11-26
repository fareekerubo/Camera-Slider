#include <AccelStepper.h>
AccelStepper mystepper(1, 8, 7);
void setup() {
// mystepper.move(1000);
 //mystepper.setMaxSpeed(400);
 mystepper.setSpeed(3000);
}
void loop() {  
   //mystepper.run();
   mystepper.runSpeed();
}
