const int LM35 = A0;
float adcValue;
void setup() {
  // put your setup code here, to run once:
  pinMode(LM35,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  adcValue = analogRead(LM35);
  Serial.println(adcValue/2);
  delay(1000);
}
