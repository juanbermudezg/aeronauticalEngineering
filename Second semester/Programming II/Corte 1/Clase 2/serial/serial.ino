void setup() {
  pinMode(2,INPUT);
  //activar el puerto serial
  Serial.begin(9600);

}

void loop() {
  int lecturadigital2 =digitalRead(2);
  if (lecturadigital2==0){
    Serial.println("Wire connected to 0V or to GND");
    Serial.println(lecturadigital2);
  }
  else{
    Serial.println("Wire connected to 5V");
    Serial.println(lecturadigital2);
  }
}
