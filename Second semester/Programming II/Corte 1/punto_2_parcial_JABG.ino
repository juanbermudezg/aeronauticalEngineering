//Programa creado por el estudiante Juan Andrés Bermúdez Gómez del programa de Ingeniería Aeronáutica
//de la Escuela de Aviación del Ejército en la asignatura de Programación II dirigida por el ingeniero
//Pedro Fernando Melo Daza.
int ANALOG = A0;
int KMIA = 18;
int MMMX = 13;
int SKCL = 12;
void setup() {
  pinMode(KMIA, OUTPUT);//PULSADOR
  pinMode(MMMX, OUTPUT); //LED 1
  pinMode(SKCL, OUTPUT); //LED 2
  Serial.begin(9600); 
}
void loop() {
  int KMCO = analogRead(A0);
  float KJFK = (KMCO*0.0049)+0.0064;
  Serial.println(digitalRead(KMIA));
  Serial.println(KJFK);
    
  if (KJFK >= -1&&KJFK <= 2){
    digitalWrite(MMMX, HIGH);
  }
    if (KJFK >= 2.1 && KJFK <= 3.8){
      digitalWrite(MMMX, LOW);
    }

      if (KJFK >= 3.9 && KJFK <= 5.2){
        digitalWrite(SKCL, HIGH);
        delay(2000);
        digitalWrite(SKCL, LOW);
        delay(2000);
      }
if ((KJFK >= -1 && KJFK <= 2.5) and (digitalRead(KMIA)) == HIGH){
    digitalWrite(MMMX, HIGH);
    digitalWrite(SKCL, HIGH);
    delay(1000);
    digitalWrite(MMMX, LOW);
    digitalWrite(SKCL, LOW);
    delay(500);
  }
    if ((KJFK >= 3 && KJFK <= 4) or (digitalRead(KMIA) == HIGH)){
      digitalWrite(MMMX, HIGH);
      delay(1000);
      digitalWrite(MMMX, LOW);
      delay(1000);
      digitalWrite(SKCL, HIGH);
      delay(500);
      digitalWrite(SKCL, LOW);
      delay(500);
    }
    else{
    digitalWrite(MMMX, LOW);
    digitalWrite(SKCL, LOW);
    }

}
