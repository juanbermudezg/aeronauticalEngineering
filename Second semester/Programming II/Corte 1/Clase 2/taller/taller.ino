void setup() {
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
    int sensorValue = analogRead(A0);
  float sv = (sensorValue*0.0049)+0.0064;

  if (sv>=4.5&&sv<=5.1){
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
  }
  if (sv>=3.0&&sv<=3.5){
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
  }
  if (sv>=0&&sv<=0.5){
    for (int i=0; i<3;i++){
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    delay(100);
  }
  }
  

}
