void setup() {
  // put your setup code here, to run once:
    pinMode(11, OUTPUT);
    pinMode(7,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(7)==HIGH){
    tone(11,450);
    digitalWrite(7,LOW);  
    noTone(11);
  }
}
