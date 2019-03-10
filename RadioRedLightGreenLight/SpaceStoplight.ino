#include "receiver.h"

#define RED_LED 4
#define GREEN_LED 5
#define WHITE_LED 6

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(WHITE_LED, OUTPUT);
  
  randomSeed(analogRead(0));

  receiver_setup(); // initialize radio receiver            
  Serial.begin(9600);
}

float wrongLight;
float flashedLight = 0;
float storage;
int score = 0;
  
void loop() {
  // put your main code here, to run repeatedly:

  if(flashedLight != 4.21 && flashedLight != 6.42) {
    int randNum = random(2);
    
    if(randNum == 0) {
      flashedLight = 4.21;
      wrongLight = 6.42;
      digitalWrite(GREEN_LED, HIGH);
      delay(50);
      digitalWrite(GREEN_LED, LOW);
      //Serial.println("Flashed green stoplight");
    }
      
    if(randNum == 1) {
      flashedLight = 6.42;
      wrongLight = 4.21;
      digitalWrite(RED_LED, HIGH);
      delay(50);
      digitalWrite(RED_LED, LOW);
      //Serial.println("Flashed red stoplight");
    }
  }

  if (receiving(storage)) {
    Serial.print("Received value: ");
    Serial.println(storage); 
  
    if(storage == flashedLight) {  
      score++;
      Serial.print("Win! Good job! Your score is now: ");
      Serial.println(score);
      
      digitalWrite(WHITE_LED, HIGH);
      delay(500);
      digitalWrite(WHITE_LED, LOW);
      
      flashedLight = 0;
      storage = 0;
    
      
     } else if(storage == wrongLight){
  
      score = 0;
      Serial.println("Lose! You are an idiot!");
      Serial.print("Your score is now: ");
      Serial.println(score);
      
      digitalWrite(WHITE_LED, HIGH);
      delay(5000);
      digitalWrite(WHITE_LED, LOW);
      
      flashedLight = 0;
      storage = 0;
  
    }

  }
     
}
