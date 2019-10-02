// also works for 12.4 V - 11.76 V

//==retardmode==//
#include "pitches.h"

#define SPEAKER 11
int NOTE_DUR = 137; // This value can be modified
                    // to change the tempo

int NOTES[7] = { NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5 };

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
  play(NOTE_FS4, 2);
  play(NOTE_B4, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 3);
  play(NOTE_E5, 3);
  play(NOTE_D5, 3);
  play(NOTE_CS5, 3);
  play(NOTE_B4, 3);
  play(NOTE_A4, 3);
  play(NOTE_G4, 6); //m10
  play(NOTE_D5, 6);
  play(NOTE_D5, 20);
  play(NOTE_D5, 4); //m11
  play(NOTE_A4, 4);
  play(NOTE_D5, 4); 
  play(NOTE_A4, 4);
  play(NOTE_D5, 4); 
  play(NOTE_A4, 4);
  play(NOTE_D5, 4);
  play(NOTE_E5, 2);
  play(NOTE_CS5, 13); //m12
  delay(NOTE_DUR*21);
  play(NOTE_B4, 10); //m13
  play(NOTE_FS4, 2);
  play(NOTE_B4, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 3);
  play(NOTE_E5, 3);
  play(NOTE_D5, 3);
  play(NOTE_CS5, 3);
  play(NOTE_B4, 3);
  play(NOTE_A4, 3);
  play(NOTE_G4, 6); //m14
  play(NOTE_D5, 6);
  play(NOTE_D5, 20);
  play(NOTE_D5, 4); //m15
  play(NOTE_A4, 4);
  play(NOTE_D5, 4); 
  play(NOTE_A4, 4);
  play(NOTE_D5, 4); 
  play(NOTE_A4, 4);
  play(NOTE_D5, 4);
  play(NOTE_E5, 2);
  play(NOTE_CS5, 12);//m16
  delay(NOTE_DUR*6);
  play(NOTE_FS4, 2); 
  play(NOTE_D5, 6);
  play(NOTE_E4, 2);
  play(NOTE_CS5, 6);
  play(NOTE_D4, 2);
  play(NOTE_B4, 10); //m17
  play(NOTE_FS4, 2);
  play(NOTE_FS4, 2);
  play(NOTE_B4, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 4);
  play(NOTE_CS5, 4);
  play(NOTE_B4, 8); //m18
  play(NOTE_B4, 2);
  play(NOTE_B4, 2);
  play(NOTE_B4, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 4);
  play(NOTE_E5, 4);
  play(NOTE_A4, 8); //m19
  play(NOTE_A4, 2);
  play(NOTE_A4, 2);
  play(NOTE_A4, 2);
  play(NOTE_A4, 2);
  play(NOTE_D5, 2);
  play(NOTE_A4, 2);
  play(NOTE_D5, 2);
  play(NOTE_A4, 2);
  play(NOTE_D5, 4);
  play(NOTE_E5, 2);
  play(NOTE_E5, 4); //tie into m20
  play(NOTE_CS5, 22);
  delay(NOTE_DUR*4);
  play(NOTE_B4, 8); //m21
  play(NOTE_B4, 2);
  play(NOTE_FS4, 2);
  play(NOTE_B4, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 4);
  play(NOTE_CS5, 4);
  play(NOTE_B4, 8); //m22
  play(NOTE_B4, 2);
  play(NOTE_B4, 2);
  play(NOTE_B4, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 4);
  play(NOTE_E5, 2);
  play(NOTE_A4, 10); //m23
  play(NOTE_A4, 2);
  play(NOTE_A4, 2);
  play(NOTE_A4, 2);
  play(NOTE_A4, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_D5, 4);
  play(NOTE_E5, 2);
  play(NOTE_E5, 4); //tie into m24
  play(NOTE_CS5, 14);
}

//=============//

const int SAMPLESIZE = 15;

class queue {
  public:
    queue() {
      for(int i = 0; i < SAMPLESIZE; i++) {
        array[i] = 0;
      }
    }
    double pushpop(double newVal) {
      double temp = array[pointer];
      array[pointer] = newVal;
      if(++pointer == 10)
        pointer = 0;
      return temp;
    }
  private:
    double array[SAMPLESIZE];
    int pointer = 0;
};

//===============//

#define IR_RECEIVER_L A5
#define IR_RECEIVER_R A6
#define IR_RECEIVER_C A7

#define R_IN2 5
#define R_IN1 3
#define L_IN2 9
#define L_IN1 6

#define UPPERBOUND_L 980;
#define UPPERBOUND_R 980;
#define UPPERBOUND_C 980;

long backgroundNoise_L = 0;
long backgroundNoise_R = 0;
long backgroundNoise_C = 0;

int error_L;
int error_R;
int error_C;

int prevError = 0;

long speed_L = 1000;
long speed_R = 1000;

bool turnDirection = false;

const double BRAKE = 20; // brake constant for head on collision
const double K_P = 4.3;  // proportional constant
const double K_D = 4.6;  // derivative constant
const int ONEWALL = 300;

const bool serialEnable = false;

queue pastErrors;

void drive(bool isRight, int dutyCycle) { // accepts 0 to 1000, for more precision
  // IN1 - Speed
  // R_IN2 - Low
  
  if (isRight) {
    int driveSpeed = dutyCycle * 247 / 1000;
    analogWrite(R_IN1, driveSpeed);
    analogWrite(R_IN2, LOW);
  }
  else {
    int driveSpeed = dutyCycle * 255 / 1000;
    analogWrite(L_IN1, driveSpeed);
    analogWrite(L_IN2, LOW);
  }
}

bool determineDirection() {   // determines which direction the car should turn
  long leftReading = 0, rightReading = 0;
  for(size_t i=0; i<100; i++) {
    leftReading += analogRead(IR_RECEIVER_L);
//    leftReading -= backgroundNoise_L;
    rightReading += analogRead(IR_RECEIVER_R);
//    rightReading -= backgroundNoise_R;
    delayMicroseconds(1);
  }

  if(serialEnable) {
    if(leftReading > rightReading) {
      Serial.println("turn right");
    }
    else {
      Serial.println("turn left");
    }
  }
  
  return leftReading > rightReading;  // if left reading is higher, returns true to turn right
}

void turn(bool toTheRight) {
  
//  drive(true, 1000);
//  drive(false, 1000);
//  delay(0);
  if(toTheRight) {
    analogWrite(R_IN1, LOW);
    analogWrite(R_IN2, 255);
    analogWrite(L_IN1, 255);
    analogWrite(L_IN2, LOW);    
  } else {
    analogWrite(L_IN1, LOW);
    analogWrite(L_IN2, 255);
    analogWrite(R_IN1, 255);
    analogWrite(R_IN2, LOW);   
  }
  delay(20);
  drive(true, 1000);
  drive(false, 1000);
  delay(20);
}

void microTurn(bool toTheRight) {
  
  drive(true, 0);
  drive(false, 0);
  delay(100);
  
  if(toTheRight) {
    while(readIR(IR_RECEIVER_C) > 75) {
      analogWrite(R_IN1, LOW);
      analogWrite(R_IN2, 150);
      analogWrite(L_IN1, 150);
      analogWrite(L_IN2, LOW); 
    }   
  } else {
    while(readIR(IR_RECEIVER_C) > 50) {
      analogWrite(L_IN1, LOW);
      analogWrite(L_IN2, 150);
      analogWrite(R_IN1, 150);
      analogWrite(R_IN2, LOW);   
    }
  }
  
  drive(true, 0);
  drive(false, 0);
  delay(100);
}

bool brakeCheck(int error_C) {  // checks for wall in front
  //  Serial.println(error_C);
  if(error_C > 55) {
    drive(true, 0);
    drive(false, 0);
    delay(10);
    return true;
  }
  return false;
}

int readIR(int pin) {
  int lowerBound = 0;
  int upperBound = 0;
  String side = "";

  switch (pin) {
    case IR_RECEIVER_L:
      lowerBound = backgroundNoise_L;
      upperBound = UPPERBOUND_L;
      side = "Left";
      break;
    case IR_RECEIVER_R:
      lowerBound = backgroundNoise_R;
      upperBound = UPPERBOUND_R;
      side = "Right";
      break;
    case IR_RECEIVER_C:
      lowerBound = backgroundNoise_C;
      upperBound = UPPERBOUND_C;
      side = "Center";
      break;
    default:
      Serial.println("reading from invalid pin");
  }

  int voltageRead = analogRead(pin);
  if(serialEnable) {
    Serial.print(side);
    Serial.print(" Read voltage is: ");
    Serial.println(voltageRead);
  }

  voltageRead = constrain(voltageRead, lowerBound, upperBound);
  voltageRead = map(voltageRead, lowerBound, upperBound, 0, 100);
  if(serialEnable) {
    Serial.print(side);
    Serial.print(" converted voltage is: ");
    Serial.println(voltageRead);
    Serial.println();
  }
  
  return voltageRead;
}

void setup() {
  // put your setup code here, to run once:
  pinMode(L_IN1, OUTPUT);
  pinMode(L_IN2, OUTPUT);
  pinMode(R_IN1, OUTPUT);
  pinMode(R_IN2, OUTPUT);
  pinMode(SPEAKER, OUTPUT);

  pinMode(IR_RECEIVER_L, INPUT);
  pinMode(IR_RECEIVER_R, INPUT);
  pinMode(IR_RECEIVER_C, INPUT);

  // Calibrate background noise
  for (size_t i = 0; i < 100; i++) {
    backgroundNoise_L += analogRead(IR_RECEIVER_L);
    backgroundNoise_R += analogRead(IR_RECEIVER_R);
    backgroundNoise_C += analogRead(IR_RECEIVER_C);
    delay(5);
  }
  backgroundNoise_L /= 100;
  backgroundNoise_R /= 100;
  backgroundNoise_C /= 100;

  randomSeed(analogRead(IR_RECEIVER_R));
  
  if(serialEnable) {
    Serial.begin(9600);
    Serial.print("Left background noise: ");
    Serial.println(backgroundNoise_L);
    Serial.print("Right background noise: ");
    Serial.println(backgroundNoise_R);
    Serial.print("Center background noise: ");
    Serial.println(backgroundNoise_C);
  }
  
}

void loop() {
  
  if(!serialEnable) {
    drive(true, speed_R);
    drive(false, speed_L);
  }
  
  error_L = readIR(IR_RECEIVER_L);
  error_R = readIR(IR_RECEIVER_R);
  error_C = readIR(IR_RECEIVER_C);

  int error_Horiz = error_R - error_L;  // horizontal accumulated error
  int errorDiff = error_Horiz - pastErrors.pushpop(error_Horiz);
  if(analogRead(IR_RECEIVER_L) < ONEWALL) 
    error_Horiz = error_R;
    errorDiff = 0;
    speed_L = 800;
    speed_R = 800;
  if(analogRead(IR_RECEIVER_R) < ONEWALL) {
    error_Horiz = -error_L;
    errorDiff = 0;
    speed_L = 800;
    speed_R = 800;
  }
  
  prevError = error_Horiz;

  if(brakeCheck(error_C)) {  // check for objects in front
    if(analogRead(IR_RECEIVER_L) > 450 && analogRead(IR_RECEIVER_R) > 450) {  // we're at the end
      while(1) {
        drive(true, 0);
        drive(false, 0);
        Despacito();
      }  
    }
    microTurn(determineDirection());
    speed_R = 300;
    speed_L = 300;
    prevError = 0;

  }
  else {
    speed_L -= K_P * error_Horiz;
    speed_R += K_P * error_Horiz;

//    if(!(analogRead(IR_RECEIVER_R) < ONEWALL) && !(analogRead(IR_RECEIVER_L) < ONEWALL)) {
      speed_L -= K_D * errorDiff;
      speed_R += K_D * errorDiff;
//    }
    
    if(error_L < 45 && error_R < 45) {
      speed_L = 1000;
      speed_R = 1000;
    }
  }

  speed_L = constrain(speed_L, 300, 1000);
  speed_R = constrain(speed_R, 300, 1000);

  if(serialEnable) {
    Serial.print("L: ");
    Serial.print(speed_L);
    Serial.print(" R: ");
    Serial.println(speed_R);
  }

}
