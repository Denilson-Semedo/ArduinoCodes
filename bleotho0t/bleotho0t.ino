char CONECT;

void setup()  
{
  pinMode(13, OUTPUT);     
  Serial.begin(9600);  
}

void loop() 
{
  if (Serial.available())
 
  {
    CONECT=(Serial.read());
    if (CONECT=='a')
    {
      digitalWrite(13, HIGH);
      Serial.println("led ligado");
    }
    else if (CONECT=='b')
    {
      digitalWrite(13, LOW);
      Serial.print("led desligado");
    }
  }
}
