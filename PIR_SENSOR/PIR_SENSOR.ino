int ledPin = 13;
int inputPin = 3;
int pirState = 0;
int val = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(inputPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inputPin);
  if(val==1){
      digitalWrite(ledPin,1);
      if(pirState==0){
          Serial.println("Notion detected");
          pirState = 1;
        }
  }else{
            digitalWrite(ledPin,0);
            if(pirSt ate == 1){
                Serial.println("Motion Detected");
                pirState = 0;
              }
          }
}
    
