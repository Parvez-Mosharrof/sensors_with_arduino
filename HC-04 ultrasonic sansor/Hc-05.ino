int trigpin=10;
int echopin=9;
long duration;
int distance;

void setup()
{
pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
Serial.begin(9600);
}

void loop()
{
digitalWrite(trigpin,LOW);
delayMicroseconds(2);
  
  
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  
duration=pulseIn(echopin,HIGH);

  
distance = (0.034*duration)/2 ; 
 Serial.print(distance); 
   Serial.println("CM");
  delay(1000);
}
