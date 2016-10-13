const int temperaturePin = A0;
int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
float reading;


void setup()
{
  int index;

  Serial.begin(9600);
  for (index = 0; index <= 4; index++)
  {
    pinMode(ledPins[index], OUTPUT);

  }





}


void loop()
{

  float voltage, degreesC, degreesF;

 
 

  reading = analogRead(temperaturePin);

  reading  *= (5000 / 1024);

  degreesC = (reading - 460.0) / 10.0;

  degreesF = (degreesC * (9.0 / 5.0)) + 32;

  

  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print("  deg C: ");
  Serial.print(degreesC);
  Serial.print("  deg F: ");
  Serial.println(degreesF);

 


  delay(1000); 

  if (degreesF >= 60 && degreesF < 70) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);

    digitalWrite(ledPins[5], LOW);
    digitalWrite(ledPins[6], LOW);
    digitalWrite(ledPins[7], LOW);
    digitalWrite(ledPins[8], LOW);
    digitalWrite(ledPins[9], LOW);
  }
  else if (degreesF >= 70 && degreesF < 80) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);

    digitalWrite(ledPins[5], LOW);
    digitalWrite(ledPins[6], LOW);
    digitalWrite(ledPins[7], LOW);
    digitalWrite(ledPins[8], LOW);
    digitalWrite(ledPins[9], LOW);

  }
  else if (degreesF >= 80 && degreesF < 90) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);

    digitalWrite(ledPins[5], LOW);
    digitalWrite(ledPins[6], LOW);
    digitalWrite(ledPins[7], LOW);
    digitalWrite(ledPins[8], LOW);
    digitalWrite(ledPins[9], LOW);
  }
  else if (degreesF >= 90 && degreesF < 100) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], LOW);

    digitalWrite(ledPins[5], LOW);
    digitalWrite(ledPins[6], LOW);
    digitalWrite(ledPins[7], LOW);
    digitalWrite(ledPins[8], LOW);
    digitalWrite(ledPins[9], LOW);
  }
  else if (degreesF >= 100 && degreesF < 110) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], HIGH);

    digitalWrite(ledPins[5], LOW);
    digitalWrite(ledPins[6], LOW);
    digitalWrite(ledPins[7], LOW);
    digitalWrite(ledPins[8], LOW);
    digitalWrite(ledPins[9], LOW);

  }

  else if (degreesF >= 110 && degreesF < 120) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], HIGH);

    digitalWrite(ledPins[5], HIGH);
    digitalWrite(ledPins[6], LOW);
    digitalWrite(ledPins[7], LOW);
    digitalWrite(ledPins[8], LOW);
    digitalWrite(ledPins[9], LOW);

  }

  else if (degreesF >= 120 && degreesF < 130) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], HIGH);

    digitalWrite(ledPins[5], HIGH);
    digitalWrite(ledPins[6], HIGH);
    digitalWrite(ledPins[7], LOW);
    digitalWrite(ledPins[8], LOW);
    digitalWrite(ledPins[9], LOW);

  }

  else if (degreesF >= 130 && degreesF < 140) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], HIGH);

    digitalWrite(ledPins[5], HIGH);
    digitalWrite(ledPins[6], HIGH);
    digitalWrite(ledPins[7], HIGH);
    digitalWrite(ledPins[8], LOW);
    digitalWrite(ledPins[9], LOW);

  }

  else if (degreesF >= 140 && degreesF < 150) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], HIGH);

    digitalWrite(ledPins[5], HIGH);
    digitalWrite(ledPins[6], HIGH);
    digitalWrite(ledPins[7], HIGH);
    digitalWrite(ledPins[8], HIGH);
    digitalWrite(ledPins[9], LOW);

  }


  else if (degreesF >= 150 && degreesF < 160) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], HIGH);

    digitalWrite(ledPins[5], HIGH);
    digitalWrite(ledPins[6], HIGH);
    digitalWrite(ledPins[7], HIGH);
    digitalWrite(ledPins[8], HIGH);
    digitalWrite(ledPins[9], HIGH);

    delay(1000);

  }


}


float getVoltage(int pin)
{

  return (analogRead(pin) * 0.004882814);

 
}



