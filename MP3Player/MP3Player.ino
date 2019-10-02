/*
  Melody

 Plays a melody

 circuit:
 * 8-ohm speaker on digital pin 8

 created 21 Jan 2010
 modified 30 Aug 2011
 by Tom Igoe

This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Tone

 */
#include "pitches.h"

#define SPEAKER 3
int NOTE_DUR = 137; // This value can be modified
                    // to change the tempo

void play(int note, int dur) {
    tone(SPEAKER, note);
    delay(dur * NOTE_DUR);
    noTone(SPEAKER);
    delay(dur * NOTE_DUR / 3);
}

void Despacito() {
  NOTE_DUR = 58;  // Set tempo to be faster
  play(NOTE_D4, 1);
  play(NOTE_FS4, 1);
  play(NOTE_B4, 1);
  play(NOTE_D5, 1);
  play(NOTE_CS5, 1);
  play(NOTE_B4, 1);
  play(NOTE_AS4, 1);
  play(NOTE_B4, 16); //m2
  delay(NOTE_DUR*6);
  play(NOTE_B4, 6);
  play(NOTE_CS5, 6);
  play(NOTE_D5, 6);
  play(NOTE_E5, 6); //m3
  play(NOTE_FS5, 7);
  play(NOTE_D5, 7);
  play(NOTE_FS5, 8);
  play(NOTE_D5, 8);
  play(NOTE_FS5, 22);
  delay(NOTE_DUR*4);
  play(NOTE_FS4, 2); //m4
  play(NOTE_D5, 6);
  play(NOTE_E4, 2);
  play(NOTE_CS5, 6);
  play(NOTE_D4, 2);
  play(NOTE_B4, 4); //m5
  play(NOTE_D4, 2);
  play(NOTE_FS4, 4);
  play(NOTE_B4, 2);
  play(NOTE_D4, 4);
  play(NOTE_B4, 4);
  play(NOTE_D4, 2);
  play(NOTE_FS4, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_B4, 2);
  play(NOTE_A4, 2);
  play(NOTE_B4, 4); //m6
  play(NOTE_D4, 2);
  play(NOTE_G4, 4);
  play(NOTE_B4, 2);
  play(NOTE_D4, 4);
  play(NOTE_B4, 4);
  play(NOTE_D4, 2);
  play(NOTE_G4, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_B4, 2);
  play(NOTE_A4, 2);
  play(NOTE_D5, 4); //m7
  play(NOTE_FS4, 2);
  play(NOTE_A4, 4);
  play(NOTE_D5, 2);
  play(NOTE_FS4, 4);
  play(NOTE_D5, 4);
  play(NOTE_FS4, 2);
  play(NOTE_A4, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_B4, 2);
  play(NOTE_A4, 2);
  play(NOTE_E5, 12); //m8
  delay(NOTE_DUR*2);
  play(NOTE_FS4, 2); 
  play(NOTE_D5, 6);
  play(NOTE_E4, 2);
  play(NOTE_CS5, 6);
  play(NOTE_D4, 2);
  play(NOTE_B4, 10); //m9
}

void musicILoveIt() {
  NOTE_DUR = 108;
  for(int i=0; i<4; i++) {
    play(NOTE_DS3, 4);
    if(i == 3) break;
    play(NOTE_D3, 3);
    play(NOTE_G3, 3);
    play(NOTE_G2, 3);
    play(NOTE_G2, 3);
  }
  play(NOTE_D3, 2);
  for(int i=0; i<4; i++) {
    play(NOTE_G4, 2);
    play(NOTE_D5, 2);
    play(NOTE_C5, 2);
    play(NOTE_C5, 2);
    play(NOTE_AS4, 2);
    play(NOTE_AS4, 2);
    delay(4 * NOTE_DUR);
    for(int j=0; j<2; j++) {
      play(NOTE_AS4, 2);
      play(NOTE_A4, 2);
      play(NOTE_AS4, 2);
      delay(2 * NOTE_DUR);
    }
  }
}

void musicCountryRoads() {
  NOTE_DUR = 68;
  
  play(NOTE_C4, 2);
  play(NOTE_CS4, 2);
  play(NOTE_E4, 4);
  play(NOTE_FS4, 6);
  play(NOTE_CS4, 2); //m5
  play(NOTE_A3, 6);
  play(NOTE_E4, 2);
  play(NOTE_E4, 6);
  play(NOTE_FS4, 6); //m6
  play(NOTE_E4, 10);
  delay(NOTE_DUR*8);
  play(NOTE_FS4, 4);
  play(NOTE_E4, 2);
  play(NOTE_FS4, 4); //tie into m7
  play(NOTE_A4, 14);
  delay(NOTE_DUR*8);
  play(NOTE_B4, 2);
  play(NOTE_B4, 6);
  play(NOTE_CS5, 6); //m7
  play(NOTE_B4, 10);
  play(NOTE_FS4, 4); //m8
  play(NOTE_FS4, 4);
  play(NOTE_FS4, 4);
  play(NOTE_E4, 4);
  play(NOTE_FS4, 2);
  play(NOTE_A4, 14);
  delay(NOTE_DUR*8);
  play(NOTE_E4, 2);
  play(NOTE_E4, 6);
  play(NOTE_FS4, 6); //m15
  play(NOTE_E4, 10);
  play(NOTE_FS4, 2);
  play(NOTE_A4, 6);
  play(NOTE_A4, 2);
  play(NOTE_CS5, 6);
  play(NOTE_CS5, 16); //m17
  play(NOTE_B4, 4); //m18
  play(NOTE_B4, 4); 
  play(NOTE_B4, 4); 
  play(NOTE_B4, 4); 
  play(NOTE_CS5, 6); 
  play(NOTE_B4, 10); 
  play(NOTE_FS4, 4); 
  play(NOTE_A4, 4); 
  play(NOTE_A4, 4); 
  play(NOTE_B4, 2); 
  play(NOTE_A4, 10);
  play(NOTE_A4, 4); 
  play(NOTE_B4, 4); 
  play(NOTE_CS5, 24);
  play(NOTE_CS5, 2);
  play(NOTE_B4, 2);
  play(NOTE_A4, 4); 
  play(NOTE_B4, 24);
  play(NOTE_CS5, 4);
  play(NOTE_B4, 4);
  play(NOTE_A4, 24);
  play(NOTE_CS5, 4);
  play(NOTE_E5, 4);
  play(NOTE_FS5, 24);
  play(NOTE_FS5, 6);
  play(NOTE_FS5, 2);
  play(NOTE_E5, 4);
  play(NOTE_CS5, 20);
  play(NOTE_CS5, 2);
  play(NOTE_B4, 2);
  play(NOTE_A4, 4);
  play(NOTE_B4, 4);
  play(NOTE_CS5, 20);
  play(NOTE_CS5, 2);
  play(NOTE_B4, 2);
  play(NOTE_A4, 4);
  play(NOTE_A4, 24);
  play(NOTE_A4, 4);
  play(NOTE_B4, 4);
  play(NOTE_A4, 16);
}


void musicMoBamba() {
  NOTE_DUR = 154;
  for(int j=0; j<2; j++) {
    for(int i=0; i<5; i++) {
      play(NOTE_G6, 1);
      play(NOTE_F6, 1);
      play(NOTE_E6, 2);
      if(i == 2 || i == 4) continue;
      play(NOTE_D6, 2);
    }
    delay(2 * NOTE_DUR);  
    if(j == 1) break;
    play(NOTE_G6, 1);
    play(NOTE_F6, 1);
    play(NOTE_E6, 1);
    delay(1 * NOTE_DUR);
  }
  for(int i=0; i<2; i++) {
    play(NOTE_B2, 2);
    play(NOTE_B2, 1);
    play(NOTE_B2, 1);
    play(NOTE_E3, 12);
    play(NOTE_E3, 4);
    play(NOTE_F3, 6);
    play(NOTE_B2, 6);
  }
}

void musicLucidDreams() {
  NOTE_DUR = 67;
  for(int i=0; i<2; i++) {
    play(NOTE_A4, 4);
    play(NOTE_FS3, 2);
    play(NOTE_CS4, 4);
    play(NOTE_A4, 4);
    play(NOTE_E3, 2);
    play(NOTE_GS4, 4);
    play(NOTE_E3, 2);
    play(NOTE_CS4, 4);
    play(NOTE_GS4, 4);
    play(NOTE_D3, 2);
    play(NOTE_FS4, 4);
    play(NOTE_D3, 2);
    play(NOTE_B3, 4);
    play(NOTE_FS4, 4);
    play(NOTE_D3, 2);
    play(NOTE_FS4, 4);
    play(NOTE_B3, 4);
    if(i == 1) break;
    play(NOTE_F4, 8);
  }
  play(NOTE_F4, 6);
  play(NOTE_CS3, 2);
  play(NOTE_D3, 4);
  play(NOTE_B3, 2);
  play(NOTE_FS4, 4);
  play(NOTE_B3, 2);
  play(NOTE_B4, 2);
  play(NOTE_A4, 6);
  play(NOTE_FS4, 4);
  play(NOTE_B3, 6);
  play(NOTE_A2, 2);
  play(NOTE_B3, 6);
  play(NOTE_E4, 6);
  play(NOTE_A3, 4);
  play(NOTE_CS3, 4);
  play(NOTE_GS3, 2);
  play(NOTE_GS4, 2);
  play(NOTE_F4, 8);
  play(NOTE_FS4, 6);
  play(NOTE_E4, 6);
  play(NOTE_D4, 4);
  play(NOTE_CS4, 6);
  play(NOTE_CS4, 10);
  play(NOTE_CS4, 24);
  delay(8 * NOTE_DUR);
  for(int i=0; i<3; i++) {
    delay(4 * NOTE_DUR);
    play(NOTE_CS5, 4);
    play(NOTE_CS5, 3);
    play(NOTE_A4, 3);
    play(NOTE_A4, 2);
    play(NOTE_E5, 3);
    play(NOTE_D5, 3);
    play(NOTE_CS5, 2);
    if(i == 2) break;
    play(NOTE_CS5, 4);
    play(NOTE_B4, 4);
  }
  play(NOTE_CS5, 3);
  play(NOTE_B4, 3);
  play(NOTE_B4, 2);
  play(NOTE_CS5, 3);
  play(NOTE_CS5, 3);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 3);
  play(NOTE_B4, 3);
  play(NOTE_B4, 2);
  play(NOTE_CS5, 3);
  play(NOTE_CS5, 3);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 4);
  play(NOTE_B4, 4);
  play(NOTE_A4, 8);
  for(int i=0; i<2; i++) {
    play(NOTE_A4, 2);
    play(NOTE_A4, 2);
    play(NOTE_A4, 2);
    play(NOTE_B4, 4);
    play(NOTE_A4, 2);
    play(NOTE_A4, 4);
  }
  for(int i=0; i<2; i++) {
    play(NOTE_A4, 2);
    play(NOTE_A4, 2);
    play(NOTE_A4, 2);
    play(NOTE_A4, 2);
    play(NOTE_B4, 4);
  }
  for(int i=0; i<2; i++) {
    play(NOTE_A4, 2);
    play(NOTE_A4, 2);
    play(NOTE_A4, 2);
    play(NOTE_B4, 4);
    play(NOTE_A4, 2);
    play(NOTE_A4, 2);
    play(NOTE_A4, 2);
  }
  play(NOTE_A4, 2);
  play(NOTE_A4, 2);
  play(NOTE_A4, 2);
  play(NOTE_A4, 2);
  play(NOTE_B4, 4);
  play(NOTE_A4, 4);
}



// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};



void setup() {
  pinMode(A6, INPUT);
  pinMode(SPEAKER, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  int pinVoltage = analogRead(A6);
  Serial.begin(9600);
  Serial.println(pinVoltage);
  if(pinVoltage <= 250) {
    Despacito();
  } 

  if(pinVoltage >= 250 && pinVoltage <= 500) {
    musicCountryRoads();
  }
  
  if(pinVoltage >= 500 && pinVoltage <= 750) {
    musicLucidDreams();
  }
  
  if(pinVoltage >= 750) {
    musicILoveIt();
  }
}

void loop() {
  int pinVoltage = analogRead(A6);
  Serial.println(pinVoltage);
  if(pinVoltage <= 250) {
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  } 

  if(pinVoltage >= 250 && pinVoltage <= 500) {
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
  }
  
  if(pinVoltage >= 500 && pinVoltage <= 750) {
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  }

  if(pinVoltage >= 750) {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }

}
