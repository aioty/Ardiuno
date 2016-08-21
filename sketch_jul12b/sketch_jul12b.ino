
int val=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(0);
analogWrite(8,val);//pwm只有8位，故是0-255，超出会溢出
Serial.println(val);
delay(10);
}
