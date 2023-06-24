float temperatura;
 
void setup() {
  pinMode(10,OUTPUT);
  digitalWrite(10,LOW);
Serial.begin(9600);
}
 

void loop() {
temperatura = (float(analogRead(A0))*5/(1023))/0.01;
digitalWrite(10,LOW);
while(temperatura > 33){
  digitalWrite(10,HIGH);
}
Serial.println(temperatura);
delay(250);
}
