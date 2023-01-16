//pin
int pirPin = 9;
int ledPin = 8;
int buzzerPin = 7;

//variable
float detected = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
}

void loop() {
  detected = digitalRead(pirPin);
  if (detected == HIGH){
    digitalWrite(ledPin,HIGH);
    tone(buzzerPin,2000);
    delay(3000);
    noTone(buzzerPin);
    delay(3000);
  }else{
    digitalWrite(ledPin,LOW);
  }

}
