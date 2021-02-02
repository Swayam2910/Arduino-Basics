int sensepin=0;
int ledpin=9;
void setup()
{
  analogReference(DEFAULT); //isnt necessary
  pinMode(ledpin,OUTPUT);  
  
}

void loop()
{
  int val=analogRead(sensepin);
  
  val=constrain(val,750,900);
  int ledLevel = map(val,750,900,255,0);
  
  analogWrite(ledpin,ledLevel);
  
}
