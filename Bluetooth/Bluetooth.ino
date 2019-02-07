char data=0;
int led = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    data = Serial.read();
    Serial.println(data);
    if(data=='1'){
        digitalWrite(led,1);
      }else if(data=='0'){
        digitalWrite(led,0);
        delay()
        }
    }
}
