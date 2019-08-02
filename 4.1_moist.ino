const int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin , OUTPUT);

  digitalWrite(ledPin, LOW);
}

//Assuming that moisture below 300 is considered as low

void loop() {

  if(analogRead(0) < 300)
  {
    digitalWrite(ledPin , HIGH);
  }
  else
  {
    digitalWrite(ledPin , LOW);
  }

  delay(1000);
}
