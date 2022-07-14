#define d8 8
#define d9 9
#define samu 3
void setup(){
  Serial.begin(9600);
  pinMode(d8,OUTPUT);
  pinMode(d9,OUTPUT);
  }
  void loop(){
    for(int i=0;i<=200;i++)
    {
    analogWrite(samu,i);
    digitalWrite(d8,HIGH);
    digitalWrite(d9,LOW);
    delay(5000);
    digitalWrite(d8,LOW);
    digitalWrite(d9,HIGH);
    delay(1000);
    }
  }
  
