int Ledpin=13;
void setup()
{
  Serial.begin(9600);
  
  pinMode(Ledpin,OUTPUT);
  
}

void loop()
{
  while (Serial.available()==0);
  
  int val=Serial.read() - '0';
  
  if (val == 1)
  {
    Serial.println('Led is on');
    digitalWrite(Ledpin,HIGH);
  }
  if (val == 0)
  {
    Serial.println('Led is off');
    digitalWrite(Ledpin,LOW);
  }
  else
  {
    Serial.println('Invalid');
  }
  
  
}