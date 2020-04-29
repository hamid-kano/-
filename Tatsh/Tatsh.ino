void setup() {
pinMode(2,INPUT);
pinMode(3,OUTPUT);
Serial.begin(9600);

}
void loop() {
  int value1=digitalRead(2);
  delay(75) ;
  int value2=digitalRead(2);
  delay(75) ;  
  if(value1==0&&value2==0)
  {
  digitalWrite(3,LOW);
  delay(100);
   digitalWrite(3,HIGH);
   delay(2000);
  }
  else{
   digitalWrite(3,HIGH);
   }
}
