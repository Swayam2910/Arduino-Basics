int Buttonpin=8;
void setup() {
  // put your setup code here, to run once:
pinMode(Buttonpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(digitalRead(Buttonpin));
delay(1000);
}