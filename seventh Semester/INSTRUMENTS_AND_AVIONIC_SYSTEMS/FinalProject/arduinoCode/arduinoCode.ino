#include <SoftwareSerial.h>

int TRIG = 10;      // trigger en pin 10
int ECO = 9;        // echo en pin 9
int LED = 13;       // LED en pin 13 (puedes cambiarlo si tienes un pin diferente)

// Definir pines para SoftwareSerial
const int RX = 0;   // Pin RX del HC-05 al pin 2 del Arduino
const int TX = 1;   // Pin TX del HC-05 al pin 3 del Arduino

SoftwareSerial BTSerial(RX, TX);  // Crear el puerto serial para HC-05

int DURACION;
int DISTANCIA;

void setup()
{
  pinMode(TRIG, OUTPUT);   // trigger como salida
  pinMode(ECO, INPUT);     // echo como entrada
  pinMode(LED, OUTPUT);    // LED como salida
  Serial.begin(9600);      // inicializacion de comunicacion serial a 9600 bps (monitor serial)
  BTSerial.begin(9600);    // inicializacion de comunicacion serial a 9600 bps (HC-05)
}

void loop()
{
  digitalWrite(TRIG, HIGH);      // generacion del pulso a enviar
  delayMicroseconds(10);         // espera de 10 microsegundos
  digitalWrite(TRIG, LOW);       // del sensor
  
  DURACION = pulseIn(ECO, HIGH); // con funcion pulseIn se espera un pulso
                                 // alto en Echo
  DISTANCIA = DURACION / 58.2;   // distancia medida en centimetros
  Serial.println(DISTANCIA);     // envio de valor de distancia por monitor serial
  BTSerial.print(DISTANCIA);     // envio de valor de distancia por Bluetooth
  BTSerial.print("\r\n");        // agregar CRLF para indicar el final del mensaje
  delay(200);                    // demora entre datos
}
