
int val=0;
void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
val=Serial.read();
if(val=='R')
  {
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(100);
    Serial.println("hello world!");
  }
}
