int ledPin = 1;
int buttonPin = 2;
int state;
int button;
int prevButton =0;
void setup() {
pinMode(buttonPin, INPUT);
pinMode(ledPin, OUTPUT);
state=0;
}

void loop() {
  button=digitalRead(buttonPin);
switch (state)
{
  case 0:
  digitalWrite(ledPin,LOW);
  if(button==HIGH&&prevButton ==LOW){
    state=1;
  }
  break;
  case 1:
  digitalWrite(ledPin, HIGH);
  if(button==HIGH&&prevButton ==LOW){
    state=2;
  }
  break;
  case 2:
  digitalWrite(ledPin,LOW);
  delay(100);
  digitalWrite(ledPin,HIGH);
  if(button==HIGH&&prevButton ==LOW){
    state=0;
  }
  break;
}
}
