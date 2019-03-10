#include "transmitter.h"

#define RED_BUTTON 4
#define GREEN_BUTTON 5

int greenLastRead = 0;
int redLastRead = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_BUTTON, INPUT);
  pinMode(GREEN_BUTTON, INPUT);
  transmitter_setup();
  Serial.begin(9600);
}

void loop() {
  //float send = 3.3;
  
  // put your main code here, to run repeatedly:
  int greenRead = digitalRead(GREEN_BUTTON);
  int redRead = digitalRead(RED_BUTTON);

  if(greenLastRead == HIGH && greenRead == LOW) {
    Serial.println("Green button pressed before");
    sending(4.21);
    Serial.println("Green button pressed after");
  }
  else if(redLastRead == HIGH && redRead == LOW) {
    sending(6.42);
  }

  //sending(3.3);
  //delay(500);
  greenLastRead = greenRead;
  redLastRead = redRead;
}
