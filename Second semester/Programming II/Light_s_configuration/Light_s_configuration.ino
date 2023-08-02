//Code create by Juan Bermúdez, Jeison Cruz and Kevin Castañeda for the final proyect of Programmming II

//in the degree of Aircraft Engineer at the Army Aviation School lead by the engineer

//Pedro Fernando Melo Daza.

int NAVL1 = 2, NAVL2 = 3, NAVL3 = 4, NAVL4 = 5, NAVL5 = 6;   //we declare the five navigation lights

int LANDL1 = 7;    //we declare the only landing light

int TAXL1 = 8, TAXL2 = 9;   //we declare the only taxi light

int BCNL1 = 10;    //we declare the only beacon light

int STRBL1 = 11, STRBL2 = 12, STRBL3 = 13;    //we declare the three strobe lights

char var;


void setup() {

   Serial.begin(9600);       //we start with the communication with serial way
                              //we initialize the pins and leds with the OUTPUT mode.
                         
  pinMode(NAVL1, OUTPUT);
  
  pinMode(NAVL2, OUTPUT);
  
  pinMode(NAVL3, OUTPUT);
  
  pinMode(NAVL4, OUTPUT);
  
  pinMode(NAVL5, OUTPUT);
  
  pinMode(LANDL1, OUTPUT);
  
  pinMode(TAXL1, OUTPUT);

  pinMode(TAXL2, OUTPUT);
  
  pinMode(BCNL1, OUTPUT);
  
  pinMode(STRBL1, OUTPUT);
  
  pinMode(STRBL2, OUTPUT);
  
  pinMode(STRBL3, OUTPUT);

}


void loop() {
/*
   digitalWrite(NAVL1, HIGH);
    digitalWrite(NAVL2, HIGH);
     digitalWrite(NAVL3, HIGH);
      digitalWrite(NAVL4, HIGH);
       digitalWrite(NAVL5, HIGH);
        digitalWrite(LANDL1, HIGH);
        digitalWrite(TAXL1, HIGH);
    digitalWrite(TAXL2, HIGH);
    digitalWrite(STRBL1, HIGH);

    digitalWrite(STRBL2, HIGH);

    digitalWrite(STRBL3, HIGH);
    digitalWrite(STRBL1, HIGH);

    digitalWrite(STRBL2, HIGH);

    digitalWrite(BCNL1, HIGH);*/
if (Serial.available()){
  

  var = Serial.read();


  if (var== 'a'){               //if the char is A, the navigation lights turn on

    digitalWrite(NAVL1, HIGH);
    //delay(1);
    
    digitalWrite(NAVL2, HIGH);
    //delay(1);
    
    digitalWrite(NAVL3, HIGH);
    //delay(1);
    digitalWrite(NAVL4, HIGH);
  //  delay(1);
    digitalWrite(NAVL5, HIGH);
    
  }

  if (var== 'b'){         //if the char is B, the navigation lights turn off

    digitalWrite(NAVL1, LOW);
    
    digitalWrite(NAVL2, LOW);
    
    digitalWrite(NAVL3, LOW);
    
    digitalWrite(NAVL4, LOW);
    
    digitalWrite(NAVL5, LOW);
    
  }

  if (var== 'c'){           //if the char is C, the landing light turn on

    digitalWrite(LANDL1, HIGH);
    
  }

  if (var== 'd'){         //if the char is D, the landing light turn off

    digitalWrite(LANDL1, LOW);
      
  }

  if (var== 'e'){         //if the char is E, the taxi light turn on

    digitalWrite(TAXL1, HIGH);
    delay(1);
    digitalWrite(TAXL2, HIGH);
    
  }

  if (var== 'f'){         //if the char is F, the taxi light turn off

    digitalWrite(TAXL1, LOW);
    digitalWrite(TAXL2, LOW);
  }
Serial.println(var);
  if (var== 'g'){

    delay(500);

    digitalWrite(BCNL1, HIGH);

    delay (100);

    digitalWrite(BCNL1, LOW);

    delay (800);
    
  }

  if (var== 'h'){

    digitalWrite(BCNL1, LOW);
    
  }

  if (var== 'i'){

    digitalWrite(STRBL1, HIGH);

    digitalWrite(STRBL2, HIGH);

    digitalWrite(STRBL3, HIGH);

    delay (50);

    digitalWrite(STRBL1, LOW);

    digitalWrite(STRBL2, LOW);

    delay (50);

    digitalWrite(STRBL3, LOW);

    digitalWrite(STRBL1, HIGH);

    digitalWrite(STRBL2, HIGH);

    delay (50);

    digitalWrite(STRBL1, LOW);

    digitalWrite(STRBL2, LOW);

    delay(850);
    
  }

  if (var== 'j'){

    digitalWrite(STRBL1, LOW);

    digitalWrite(STRBL2, LOW);

    digitalWrite(STRBL3, LOW);
    
  }
}
}
