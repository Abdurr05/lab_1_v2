/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Abdurrahman/Documents/labs/lab_1_v2/src/lab_1_v2.ino"
void setup();
void loop();
#line 1 "c:/Users/Abdurrahman/Documents/labs/lab_1_v2/src/lab_1_v2.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D5,OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  digitalWrite(D5, HIGH);
  delay(1000);
  digitalWrite(D5, LOW);
  delay(1000);
  

  
}