/*
  Reading a serial ASCII-encoded string.

 This sketch demonstrates the Serial parseInt() function.
 It looks for an ASCII string of comma-separated values.
 It parses them into ints, and uses those to fade an RGB LED.

 Circuit: Common-Cathode RGB LED wired like so:
 * Red anode: digital pin 3
 * Green anode: digital pin 5
 * Blue anode: digital pin 6
 * Cathode : GND

 created 13 Apr 2012
 by Tom Igoe
 
 modified 14 Mar 2016
 by Arturo Guadalupi

 This example code is in the public domain.
 */

// pins for the LEDs:
const int p1 = 1;
const int p2 = 2;
const int p3 = 3;
const int p4 = 4;
const int p5 = 5;
const int p6 = 6;
const int p7 = 7;
const int p8 = 8;



void setup() {

  // make the pins outputs:
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  pinMode(p4, OUTPUT);
  pinMode(p5, OUTPUT);
  pinMode(p6, OUTPUT);
  pinMode(p7, OUTPUT);
  pinMode(p8, OUTPUT);

    // initialize serial:
  Serial.begin(9600);
}

void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {
      int percent = Serial.parseInt();
      if (Serial.read() == '\n') {
          if(percent > 0){digitalWrite(p1, HIGH);}
          else{digitalWrite(p1, LOW);}

          if(percent > 12.5){digitalWrite(p2, HIGH);}
          else{digitalWrite(p2, LOW);}

          if(percent > 25){digitalWrite(p3, HIGH);}
          else{digitalWrite(p3, LOW);}  

                  
          if(percent > 37.5){digitalWrite(p4, HIGH);}
          else{digitalWrite(p4, LOW);}
          
          if(percent > 50){digitalWrite(p5, HIGH);}
          else{digitalWrite(p5, LOW);}
          
          if(percent > 62.5){digitalWrite(p6, HIGH);}
          else{digitalWrite(p6, LOW);}
          
          if(percent > 75){digitalWrite(p7, HIGH);}
          else{digitalWrite(p7, LOW);}
          
          if(percent > 87.5){digitalWrite(p8, HIGH);}
          else{digitalWrite(p8, LOW);}
      }
  }
}








