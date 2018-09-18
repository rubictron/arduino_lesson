#include "MoterDrive.h"

//MoterDrive oneMoter= MoterDrive(9,10,11);


MoterDrive twoMoter=MoterDrive(6,7,8,9,10,11);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
//oneMoter.drive(200);


twoMoter.drive(-200,-200);

}
