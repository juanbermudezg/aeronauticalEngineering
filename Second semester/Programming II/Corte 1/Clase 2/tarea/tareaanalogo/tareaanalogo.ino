void setup() {
 
 pinMode(7, INPUT);
 pinMode(8, INPUT);
 Serial.begin(9600);
}

void loop() {

 int juan = analogRead(A0);
 float esave = (juan*0.0049)+0.0064;
 int bermudez = analogRead(A1);
 float udea = (bermudez*0.0049)+0.0064;
 
 if (esave>=4.5&&esave<=5.1){

 digitalWrite(7, HIGH);
 digitalWrite(8, LOW);
 Serial.println("Analogo A0 conectado a 5v");
 delay(1000); 
 }

 if ((udea>=3.0&&udea<=3.5) and (esave<=0.5))
 {
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
 Serial.println("Analogo A1 conectado a 3.3v");
 delay(1000); 
 }


if ((esave>=0&&esave<=0.5)and(udea>=0&&udea<=0.5))
{
  for(int i=0;i<=1;i++)
  {
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(500);
  }


}
 
}
