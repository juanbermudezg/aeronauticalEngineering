int led[] = {13,12,11,10,9,8,7,6,5,4,3,2,1,0,A4,A5}; 

int lvl[] = {A3,A2,A1,A0}; 
char data;
int y; 
void setup() { 
 Serial.begin(9600);
 for (int x = 0; x < 16; x ++) { 
 pinMode(led[x], OUTPUT);
 }
 for (int x = 0; x < 4; x ++) { 
 pinMode(lvl[x], OUTPUT);
 }
}
void loop() { 
 
 if (Serial.available()){
  uxu();
  y=0; level();
  //LED (1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);delay(1000);
  data=Serial.read();
  if (data=='1'){
    y=0;level();
    LED (1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='2'){
    y=0;level();
    LED (0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='3'){
    y=0;level();
    LED (0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='4'){
    y=0;level();
    LED (0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  if (data=='5'){
    y=0;level();
    LED (0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='6'){
    y=0;level();
    LED (0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='7'){
    y=0;level();
    LED (0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='8'){
    y=0;level();
    LED (0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);}
  if (data=='9'){
    y=0;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='0'){
    y=0;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='q'){
    y=0;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='w'){
    y=0;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0);}
  delay(1);
  if (data=='e'){
    y=0;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);}
  delay(1);
  if (data=='r'){
    y=0;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0);}
  delay(1);
  if (data=='t'){
    y=0;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);}
  delay(1);
  if (data=='y'){
    y=0;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);}
  delay(1); //segundo piso
  if (data=='u'){
    y=1;level();
    LED (1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='i'){
    y=1;level();
    LED (0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='o'){
    y=1;level();
    LED (0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='p'){
    y=1;level();
    LED (0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  if (data=='a'){
    y=1;level();
    LED (0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='s'){
    y=1;level();
    LED (0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='d'){
    y=1;level();
    LED (0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='f'){
    y=1;level();
    LED (0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);}
  if (data=='g'){
    y=1;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='h'){
    y=1;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='j'){
    y=1;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='k'){
    y=1;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0);}
  delay(1);
  if (data=='l'){
    y=1;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);}
  delay(1);
  if (data=='z'){
    y=1;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0);}
  delay(1);
  if (data=='x'){
    y=1;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);}
  delay(1);
  if (data=='c'){
    y=1;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);}
  delay(1); //tercer piso
  if (data=='v'){
    y=2;level();
    LED (1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='b'){
    y=2;level();
    LED (0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='n'){
    y=2;level();
    LED (0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='m'){
    y=2;level();
    LED (0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  if (data=='Q'){
    y=2;level();
    LED (0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='W'){
    y=2;level();
    LED (0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='E'){
    y=2;level();
    LED (0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='R'){
    y=2;level();
    LED (0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);}
  if (data=='T'){
    y=2;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='Y'){
    y=2;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='U'){
    y=2;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='I'){
    y=2;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0);}
  delay(1);
  if (data=='O'){
    y=2;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);}
  delay(1);
  if (data=='P'){
    y=2;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0);}
  delay(1);
  if (data=='A'){
    y=2;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);}
  delay(1);
  if (data=='S'){
    y=2;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);}
  delay(1); //cuarto piso
  if (data=='D'){
    y=3;level();
    LED (1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='F'){
    y=3;level();
    LED (0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='G'){
    y=3;level();
    LED (0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='H'){
    y=3;level();
    LED (0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  if (data=='J'){
    y=3;level();
    LED (0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='K'){
    y=3;level();
    LED (0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='L'){
    y=3;level();
    LED (0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='Z'){
    y=3;level();
    LED (0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);}
  if (data=='X'){
    y=3;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='C'){
    y=3;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='V'){
    y=3;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0);}
  delay(1);
  if (data=='B'){
    y=3;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0);}
  delay(1);
  if (data=='N'){
    y=3;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);}
  delay(1);
  if (data=='M'){
    y=3;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0);}
  delay(1);
  if (data==','){
    y=3;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);}
  delay(1);
  if (data=='.'){
    y=3;level();
    LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);}
 }
}

void LED (int h, int i, int j, int k, int l, int m, int n, int o, int p, int q,
int r, int s, int t, int u, int v, int w) {
 digitalWrite (led[0], h);
 digitalWrite (led[1], i);
 digitalWrite (led[2], j);
 digitalWrite (led[3], k);
 digitalWrite (led[4], l);
 digitalWrite (led[5], m);
 digitalWrite (led[6], n);
 digitalWrite (led[7], o);
 digitalWrite (led[8], p);
 digitalWrite (led[9], q);
 digitalWrite (led[10], r);
 digitalWrite (led[11], s);
 digitalWrite (led[12], t);
 digitalWrite (led[13], u);
 digitalWrite (led[14], v);
 digitalWrite (led[15], w);
}
void LVL (int h, int i, int j, int k) { 

 digitalWrite (lvl[0], h);
 digitalWrite (lvl[1], i);
 digitalWrite (lvl[2], j);
 digitalWrite (lvl[3], k);
}
void level() { 
 switch (y) {
 case 0: LVL (0, 1, 1, 1); break; 
 case 1: LVL (1, 0, 1, 1); break; 
 case 2: LVL (1, 1, 0, 1); break;
 case 3: LVL (1, 1, 1, 0); break; 
 }
}


void uxu() {
 int t = 100; 

 for (int j = 0; j < 4; j++) { 

 y = j;
 
 LED (1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(t);
 }
}
