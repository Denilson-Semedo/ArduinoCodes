#include <Servo.h>
Servo servo;
void setup() {
  servo.attach(8);
  servo.write(0);
  Serial.begin(9600);
}
int x=0;
void loop() {
  char c = (Serial.read());
  int i;
  if( c == 'A' && x==0)
  {   
    for(i=0;i<90;i++){
    servo.write(i);
    delay(10);
    } 
    x=1; 
  }
  if( c == 'B' && x==1)
  {
    for(i=90;i>0;i--){
    servo.write(i);
    delay(10);
    } 
    x=0; 
  }
}
