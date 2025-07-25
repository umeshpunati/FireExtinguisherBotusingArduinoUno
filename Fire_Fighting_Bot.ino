#include <Servo.h>
#include <SoftwareSerial.h>

Servo myservo;

int pos = 0;    
boolean fire = false;

const String PHONE = "+91**********";

#define rxPin 2
#define txPin 3 
SoftwareSerial sim800L(rxPin,txPin);
#define Left 4
#define Right 5
#define Forward 6
#define GAS_SENSOR 7
#define LM1 8
#define LM2 9
#define RM1 10
#define RM2 11
#define pump 12

void setup()
{
  Serial.begin(115200);
  sim800L.begin(9600);
  sim800L.println("AT");
  delay(1000);
  sim800L.println("AT+CMGF=1");
  delay(1000);
  
  pinMode(Left, INPUT);
  pinMode(Right, INPUT);
  pinMode(Forward, INPUT);
  pinMode(GAS_SENSOR, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  pinMode(pump, OUTPUT);
 
  myservo.attach(13);
  myservo.write(90); 
  
  while(sim800L.available()){
    Serial.println(sim800L.readString());
  }
}

void put_off_fire()
{
  digitalWrite(LM1, HIGH);
  digitalWrite(LM2, HIGH);
  digitalWrite(RM1, HIGH);
  digitalWrite(RM2, HIGH);
  digitalWrite(pump,HIGH);
  delay(500);

  for (pos = 50; pos <= 110; pos += 1) { 
    myservo.write(pos); 
    delay(10);  
  }
  for (pos = 110; pos >= 50; pos -= 1) { 
    myservo.write(pos); 
    delay(10);
  }
  digitalWrite(pump,LOW);
  myservo.write(90); 
  fire=false;
}

void loop()
{
  myservo.write(90);
  
  if (digitalRead(Left) ==1 && digitalRead(Right)==1 && digitalRead(Forward) ==1) 
  {
    delay(500);
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, HIGH);
  }
  else if (digitalRead(Forward) ==0) 
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    fire = true;
  }
  else if (digitalRead(Left) ==0)
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, HIGH);
  }
  else if (digitalRead(Right) ==0) 
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
  delay(400);
  
  if(digitalRead(GAS_SENSOR)== 0)
  {
    Serial.println("Gas is Detected.");
    send_sms(); 
  }
  
  while (fire == true)
  {
    put_off_fire();
    Serial.println("Fire Detected.");
    make_call();
  }
}

void make_call()
{
  Serial.println("calling....");
  sim800L.println("ATD"+PHONE+";");
  delay(20000);
  sim800L.println("ATH");
  delay(1000);
}

void send_sms()
{
  Serial.println("sending sms....");
  delay(50);
  sim800L.print("AT+CMGF=1\r");
  delay(1000);
  sim800L.print("AT+CMGS=\""+PHONE+"\"\r");
  delay(1000);
  sim800L.print("Gas Detected");
  delay(100);
  sim800L.write(0x1A);
  delay(5000);
}
