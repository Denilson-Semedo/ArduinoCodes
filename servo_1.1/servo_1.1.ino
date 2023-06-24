#include <Servo.h>
Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(8);
  servo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=0;i<90;i++){
    servo.write(i);
    delay(10);
  }

  delay(6000);
  
  for(i=90;i>0;i--){
    servo.write(i);
    delay(10);
  }
   delay(6000);
}
