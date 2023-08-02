int var1,var2,var3,var4,led1=6, led2=7, dip1=8,dip2=9,dip3=10, dip4=11;
char varl1,varl2, var11,var22,var33,var44;

void setup() {
Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(dip1, INPUT);
pinMode(dip2, INPUT);
pinMode(dip3, INPUT);
pinMode(dip4, INPUT);
}

void loop() {
   var1=digitalRead(dip1);
   var2=digitalRead(dip2);
   var3=digitalRead(dip3);
   var4=digitalRead(dip4);
   var11=var1;
   if (var1==0){
    var11='0';
   }
   else{
    var11='1';
   }
   if (var2==0){
    var22='0';
   }
   else{
    var22='1';
   }
   if (var3==0){
    var33='0';
   }
   else{
    var33='1';
   }
   if (var4==0){
    var44='0';
   }
   else{
    var44='1';
   }
   Serial.print(var11);
   Serial.print(var22);
   Serial.print(var33);
   Serial.print(var44);
   //Serial.print("\n");
   //Serial <<var11<<var22<<var33<<var44<<"\n";
   delay(500);

   varl1=Serial.read();

   if (varl1=='a'){

    digitalWrite(led1,HIGH);
    
   }
   else{
    digitalWrite(led1,LOW);
   }
   varl2=Serial.read();

   if (varl2=='a'){

    digitalWrite(led2,HIGH);
    
   }
   else{
    digitalWrite(led2,LOW);
   }
}
