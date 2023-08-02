void setup() {
  int analogInPin = A0;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  float sv = (sensorValue*0.0049)+0.0064;
  Serial.println(sv);
}
