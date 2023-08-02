void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  
}
void loop() {
  //AZUL
  digitalWrite(12, HIGH);
  delay(125);
  for (int i=0;i<=3;i++){
  digitalWrite(11, HIGH);
  delay(125); 
  digitalWrite(11, LOW);  
  delay(125);                
  }
  digitalWrite(12, LOW);
  delay(125);
   for (int j=0;j<=3;j++){
  digitalWrite(10, HIGH);
  delay(125); 
  digitalWrite(10, LOW);  
  delay(125);                
  }
  //digitalWrite(11, HIGH);
}
