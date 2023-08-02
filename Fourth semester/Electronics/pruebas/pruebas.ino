int led=13;

int data;

void setup(){
  Serial.begin(9600);

  pinMode(led, OUTPUT);
  
}
void loop(){

  if (Serial.available()){
    data = Serial.read();

    if (data=='a'){
      digitalWrite(led,HIGH);
    }
    if (data=='b'){
      digitalWrite(led,LOW);
    }
  }
}
