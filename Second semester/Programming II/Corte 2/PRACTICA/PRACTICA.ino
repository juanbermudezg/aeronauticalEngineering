void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char resultado = Serial.read();
  char resultado1 = "32";
  char resultado2 = "5";
  char resultado3 = "80";
  char resultado4 = "3";
  char resultado5 = "8";

    if (resultado==resultado1||resultado==resultado2||resultado==resultado3||resultado==resultado4||resultado==resultado5){
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);

    }

  else{
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
  }

}
