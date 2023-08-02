//Programa creado por el estudiante Juan Andrés Bermúdez Gómez del programa de Ingeniería Aeronáutica
//de la Escuela de Aviación del Ejército en la asignatura de Programación II dirigida por el ingeniero
//Pedro Fernando Melo Daza.
int LED1 = 13;
int LED2 = 2;
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  //Inicio del paso 1
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  delay(1000);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  delay(1000);
  //Fin del paso 1
  //Inicio del paso 2
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  delay(1000);
  digitalWrite(LED2, HIGH);
  delay(500);
  digitalWrite(LED2, LOW);
  delay(500);
  //Fin del paso 2
  //Inicio del paso 3
  digitalWrite(LED2, HIGH);
  delay(500);
  digitalWrite(LED2, LOW);
  delay(500);
  //Fin del paso 3
  //Inicio del paso 4
  digitalWrite(LED1, HIGH);
  delay(5000);
  digitalWrite(LED1, LOW);
  delay(500);
  //Fin del paso 4
}
