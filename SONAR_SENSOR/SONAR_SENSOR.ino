int trigPin = 2 ;
int echoPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration,inches,cm;
  digitalWrite(trigPin,LOW);
  delay(1000);
  digitalWrite(trigPin,HIGH);
  delay(1000);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeter(duration);
  Serial.print("Inches = ");
  Serial.println(inches);
  Serial.print("CM = ");
  Serial.println(cm);
}

long microsecondsToInches(long duration){
    return duration/74/2;
  }

  
long microsecondsToCentimeter(long duration){
    return duration/29/2;
  }
