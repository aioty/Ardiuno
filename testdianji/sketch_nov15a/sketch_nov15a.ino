int dirPin = 6;
int stepperPin = 7;
void setup() {
  pinMode(dirPin, OUTPUT);
  pinMode(stepperPin, OUTPUT);
}
void loop(){
  digitalWrite(dirPin, HIGH);
  for(int i=0;i<2000;i++){
  digitalWrite(stepperPin, HIGH);
  delayMicroseconds(100);
  digitalWrite(stepperPin, LOW);
  delayMicroseconds(100);
  }
  digitalWrite(dirPin, LOW);
  for(int i=0;i<2000;i++){
  digitalWrite(stepperPin, HIGH);
  delayMicroseconds(100);
  digitalWrite(stepperPin, LOW);
  delayMicroseconds(100);
  }
}
