void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
      char ch = Serial.read();
      if(ch == '1')
      {
        void upward();
      }
      else if(ch == '2')
      {
        void backward();
      }
      else if(ch == '3')
      {
        void turnLeft();
      }
      else if(ch == '4')
      {
        void turnRight();
      }
      else if(ch == '0')
      {
        void Stop();
      }
  }
}

void upward()      //前进
{
  Serial.println("up");
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  }
void backward()   //后退
{
   Serial.println("back");
         digitalWrite(6,HIGH);
         digitalWrite(7,LOW);
         digitalWrite(8,HIGH);
         digitalWrite(9,LOW);
  }
void turnLeft()   //左转
{
  Serial.println("left");
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  }
void turnRight()  //右转
{
   Serial.println("right");
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
  }
void Stop()      //停车
{
   Serial.println("stop");
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
  }

      

