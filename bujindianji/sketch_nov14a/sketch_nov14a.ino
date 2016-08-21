//转来的代码尝试了下 OK IN1~4接pin10~13 驱动板上GND接arduino GND 驱动板上VCC接arduino上的5V
int Pin0 = 8;
int Pin1 = 9;
int Pin2 = 10;
int Pin3 = 11;
int Pin4 = 4;
int Pin5 = 5;
int Pin6 = 6;
int Pin7 = 7;
int _step = 0;
boolean dir = 0;//正反转
int stepperSpeed = 9;//电机转速,x ms一步
void setup()
{
 pinMode(Pin0, OUTPUT);
 pinMode(Pin1, OUTPUT);
 pinMode(Pin2, OUTPUT);
 pinMode(Pin3, OUTPUT);
 pinMode(Pin4, OUTPUT);
 pinMode(Pin5, OUTPUT);
 pinMode(Pin5, OUTPUT);
 pinMode(Pin7, OUTPUT);
}

void loop()
{
 digitalWrite(Pin4, HIGH);
 digitalWrite(Pin5, HIGH);
 digitalWrite(Pin6, HIGH);
 digitalWrite(Pin7, HIGH);
  
 switch(_step){
 case 0:
 digitalWrite(Pin0, LOW); //01
 digitalWrite(Pin1, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin3, HIGH);
 break;
 case 1:
 digitalWrite(Pin0, LOW);//3
 digitalWrite(Pin1, LOW);
 digitalWrite(Pin2, HIGH);
 digitalWrite(Pin3, HIGH);
 break;
 case 2:
 digitalWrite(Pin0, LOW);//2
 digitalWrite(Pin1, LOW);
 digitalWrite(Pin2, HIGH);
 digitalWrite(Pin3, LOW);
 break;
 case 3:
 digitalWrite(Pin0, LOW);//6
 digitalWrite(Pin1, HIGH);
 digitalWrite(Pin2, HIGH);
 digitalWrite(Pin3, LOW);
 break;
 case 4:
 digitalWrite(Pin0, LOW);//4
 digitalWrite(Pin1, HIGH);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin3, LOW);
 break;
 case 5:
 digitalWrite(Pin0, HIGH);//c
 digitalWrite(Pin1, HIGH);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin3, LOW);
 break;
 case 6:
 digitalWrite(Pin0, HIGH);//8
 digitalWrite(Pin1, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin3, LOW);
 break;
 case 7:
 digitalWrite(Pin0, HIGH);//9
 digitalWrite(Pin1, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin3, HIGH);
 break;
 default:
 digitalWrite(Pin0, LOW);//0
 digitalWrite(Pin1, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin3, LOW);
 break;
 }
 if(dir){
 _step++;
 }else{
 _step--;
 }
 if(_step>7){
 _step=0;
 }
 if(_step<0){
 _step=7;
 }
 delay(stepperSpeed);


} 
