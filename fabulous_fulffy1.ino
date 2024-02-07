char reading;
 
void setup()
{
Serial.begin(9600);
  pinMode(4,0);
  pinMode(5,0);
}

void loop()
{
  if(Serial.availbe()>0)reading = Serial.read();
  
  analogWrite(12,(digitalRead(5)||reading == ’R’)*(analogRead(A0/4));
  analogWrite(11,(digitalRead(4)||reading == ’L’)*(analogRead(A1/4));                                              
  
}