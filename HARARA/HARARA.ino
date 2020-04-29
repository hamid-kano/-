
const int trigPin = 2;
const int echoPin = 3;

long duration;
int distance;
void setup() {

pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(5,HIGH);
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
if(distance<16)
{
  digitalWrite(4,LOW);
 }
 else
 {
  digitalWrite(4,HIGH);
  }
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);

delay(500);

}
