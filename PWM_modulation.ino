boolean lastButton=LOW;
boolean currentButton=LOW;
int ledLevel=0;
void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
pinMode(1,OUTPUT);
}
boolean debounce(boolean last)
{
  boolean current = digitalRead(8);
  if (last!=current);
  {
    delay(5);
    current=digitalRead(8);
  }
  return current;
}

void loop() 
{
  // put your main code here, to run repeatedly:
currentButton=debounce(lastButton);
if (lastButton==LOW && currentButton==HIGH)
{
  ledLevel = ledLevel + 51;
}
  lastButton=digitalRead(8);
  if (ledLevel>255) ledLevel=0;
  analogWrite(11,ledLevel);
} 
