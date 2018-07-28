/*
  Analog input, analog output, serial output

  Reads an analog input pin, maps the result to a range from 0 to 255 and uses
  the result to set the pulse width modulation (PWM) of an output pin.
  Also prints the results to the Serial Monitor.

  The circuit:
  - potentiometer connected to analog pin 0.
    Center pin of the potentiometer goes to the analog pin.
    side pins of the potentiometer go to +5V and ground
  - LED connected from digital pin 9 to ground

  created 29 Dec. 2008
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInOutSerial
*/

// These constants won't change. They're used to give names to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to


int sensorValue = 0;        // value read from the pot
boolean valor[7]= {0, 0, 0, 0, 0, 0, 0};


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
}

void loop() {

  
  sensorValue = analogRead(analogInPin);

  if (sensorValue < (127)){
  digitalWrite(2,LOW);  
  digitalWrite(4,LOW);   
  digitalWrite(5,LOW);  
  digitalWrite(12,LOW);   
  digitalWrite(13,LOW);  
  digitalWrite(14,LOW);  
  digitalWrite(15,LOW); 
  }
  
  if (sensorValue >= (127)){
  digitalWrite(2,HIGH);  
  digitalWrite(4,LOW);   
  digitalWrite(5,LOW);  
  digitalWrite(12,LOW);   
  digitalWrite(13,LOW);  
  digitalWrite(14,LOW);  
  digitalWrite(15,LOW); 
  }
  if (sensorValue >= (255)){
   digitalWrite(2,HIGH);  
  digitalWrite(4,HIGH);   
  digitalWrite(5,LOW);  
  digitalWrite(12,LOW);   
  digitalWrite(13,LOW);  
  digitalWrite(14,LOW);  
  digitalWrite(15,LOW); 
  }
  if (sensorValue >= (383)){
   digitalWrite(2,HIGH);  
  digitalWrite(4,HIGH);   
  digitalWrite(5,HIGH);  
  digitalWrite(12,LOW);   
  digitalWrite(13,LOW);  
  digitalWrite(14,LOW);  
  digitalWrite(15,LOW); 
  }
  if (sensorValue >= (511)){
    digitalWrite(2,HIGH);  
  digitalWrite(4,HIGH);   
  digitalWrite(5,HIGH);  
  digitalWrite(12,HIGH);   
  digitalWrite(13,LOW);  
  digitalWrite(14,LOW);  
  digitalWrite(15,LOW); 
  }
  if (sensorValue >= (639)){
     digitalWrite(2,HIGH);  
  digitalWrite(4,HIGH);   
  digitalWrite(5,HIGH);  
  digitalWrite(12,HIGH);   
  digitalWrite(13,HIGH);  
  digitalWrite(14,LOW);  
  digitalWrite(15,LOW); 
  }
  if (sensorValue >= (767)){
    digitalWrite(2,HIGH);  
  digitalWrite(4,HIGH);   
  digitalWrite(5,HIGH);  
  digitalWrite(12,HIGH);   
  digitalWrite(13,HIGH);  
  digitalWrite(14,HIGH);  
  digitalWrite(15,LOW); 
  }
  if (sensorValue >= (895)){
    digitalWrite(2,HIGH);  
  digitalWrite(4,HIGH);   
  digitalWrite(5,HIGH);  
  digitalWrite(12,HIGH);   
  digitalWrite(13,HIGH);  
  digitalWrite(14,HIGH);  
  digitalWrite(15,HIGH); 
  }
  // print the results to the Serial Monitor:

  
  Serial.print("sensor = ");
  Serial.println(sensorValue);
  

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(50);
}
