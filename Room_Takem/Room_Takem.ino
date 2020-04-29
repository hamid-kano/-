void setup() {
pinMode(2,INPUT);
pinMode(3,OUTPUT);// غطاس
pinMode(4,OUTPUT);//رذاذات
Serial.begin(9600);
}

void loop() 
{
   int value=digitalRead(2);
   Serial.println(value);
   if(value==1)
   {
   digitalWrite(3,LOW);
     for(int i=0;i<1;i++)
     {
       Serial.println(i);
      digitalWrite(4,LOW);
     delay(750);
      digitalWrite(4,HIGH);
     delay(250);
      digitalWrite(4,LOW);
     delay(750);
      digitalWrite(4,HIGH);
     delay(250);
      digitalWrite(4,LOW);
     delay(750);
      digitalWrite(4,HIGH);
     delay(250);
      digitalWrite(4,LOW);
     delay(750);
      digitalWrite(4,HIGH);
     delay(250);
     }
     digitalWrite(3,HIGH);
     
     for(int j=0;j<1;j++)
     {
       digitalWrite(4,LOW);
     delay(750);
      digitalWrite(4,HIGH);
     delay(250);
      digitalWrite(4,LOW);
     delay(750);
      digitalWrite(4,HIGH);
     delay(250);
      digitalWrite(4,LOW);
     delay(750);
      }
     
     digitalWrite(4,HIGH);
     delay(2000);
   }
   else
   {
     digitalWrite(3,HIGH);
     digitalWrite(4,HIGH);
   }
}
