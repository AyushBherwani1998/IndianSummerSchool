const int LM35 = A0;
float temp;
void setup() {
  // put your setup code here, to run once:
  pinMode(LM35,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(LM35)/2;
  if(temp>30){
    digitalWrite(13,1);
    }else{
      digitalWrite(13,0);
      }
  Serial.println(adcValue);
  delay(1000);
}
