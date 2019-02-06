const int VAL_PROBE = 0;
const int MOSITURE_LEVEL = 250;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int moisture - analogRead(VAL_PROBE);
  Serial.println(moisture);
  if(mositure>MOISTURE)?digitalWrite(13,1):digitalWrite(13,0);
  delay(100);
}
