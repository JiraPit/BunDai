//pin
int pirPin = 9;
int ledPin = 8;
int buzzerPin = 7;

//variable
float detected = 0;

void setup() {
  beep_beep();
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
}

void loop() {
  detected = digitalRead(pirPin);
  if (detected == HIGH){
    digitalWrite(ledPin,HIGH);
    beep_beep();
    delay(3000);
  }else{
    digitalWrite(ledPin,LOW);
  }

}

void beep_beep(){
  tone(buzzerPin,2000);
  delay(200);
  noTone(buzzerPin);
  delay(100);
  tone(buzzerPin,2000);
  delay(200);
  noTone(buzzerPin);
}
