void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char letra = Serial.read();

    if (letra=='A'){
      digitalWrite(13, HIGH);

    }

  if (letra=='B'){
      digitalWrite(13, LOW);

    }

}
