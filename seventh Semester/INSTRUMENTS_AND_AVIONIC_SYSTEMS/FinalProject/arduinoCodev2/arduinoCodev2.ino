#include <SoftwareSerial.h>

SoftwareSerial BTSerial(0, 1); // RX, TX pins

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600); // Establecer la velocidad de comunicación Bluetooth
}

void loop() {
  if (BTSerial.available()) { // Verificar si hay datos disponibles desde el módulo Bluetooth
    char buffer[32]; // Buffer para almacenar la cadena recibida
    int bytesRead = BTSerial.readBytes(buffer, sizeof(buffer)); // Leer la cadena completa
    buffer[bytesRead] = '\0'; // Agregar el carácter nulo al final de la cadena
    Serial.println(buffer); // Enviar los datos recibidos a través del puerto serie de Arduino
    // Agregar un carácter de terminación especial para indicar el final del mensaje
  }

  if (Serial.available()) { // Verificar si hay datos disponibles desde el puerto serie de Arduino
    char data = Serial.read(); // Leer el dato recibido desde el puerto serie de Arduino
    BTSerial.print(data); // Enviar los datos recibidos a través del módulo Bluetooth
  }
  delay(300);
}
