void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  char letra = Serial.read();
    //enciendo el led en el pin 13 cuando ingreso la letra A en el
    //canal serial
    Serial.println(letra);
    if (letra=='A'){
      digitalWrite(13, HIGH);
      delay(2000);
    }
    //apago el led en el pin 13 cuando ingreso la letra B en el
    //canal serial
  if (letra=='B'){
      digitalWrite(13, LOW);
      delay(2000);
    }

}
