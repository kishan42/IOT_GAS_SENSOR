
//#define MQ2pin 0
int buzzer = 9;
int sensorValue;  //variable to store sensor value
void setup()
{
  pinMode(buzzer, OUTPUT);
  delay(1000);
  Serial.begin(9600);
  Serial.println("  WARMING UP ! ");
 // delay(20000); // allow the MQ-6 to warm up
}
void loop()
{
  
  sensorValue = analogRead(A0); // read analog input pin 0
  Serial.print("VALUE: ");
  Serial.print(sensorValue);
  Serial.println("ppm");
  if(sensorValue > 200)
  {
   
    digitalWrite(buzzer,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
  }
  delay(2000); // wait 2s for next reading
}
