float duracao, distancia;

void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(4, LOW);
  delayMicroseconds(2);
  digitalWrite(4, HIGH);
  delayMicroseconds(10);
  digitalWrite(4, LOW);

  duracao = pulseIn(5, HIGH);
  distancia = (duracao*.0343)/2;
  Serial.print("Distancia: ");
  Serial.println(distancia);
  delay(100);
}
