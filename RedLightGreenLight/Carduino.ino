#define GREEN_BUTTON 5
#define RED_BUTTON 4
#define WHITE_LED 6
char readChar = 'N'; //default char indicates nothing has happened

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_BUTTON, INPUT);
  pinMode(RED_BUTTON, INPUT);
  pinMode(WHITE_LED, OUTPUT);
  Serial.begin(9600);
}


int greenLastRead = 0, redLastRead = 0;
void loop() {
  int greenRead = digitalRead(GREEN_BUTTON); //read gas and brake buttons
  int redRead = digitalRead(RED_BUTTON);
  
  if(greenLastRead == HIGH && greenRead == LOW){ // only write to serial if button changes from pressed to unpressed
    Serial.write('g');
//    Serial.print('\n');
    //Serial.println("Green button is pressed");
  } else if(redLastRead == HIGH && redRead == LOW){
      Serial.write('R');
//      Serial.print('\n');
      //Serial.println("Red button is pressed");
  }
//  else {
//    Serial.write('N');
////    Serial.print('\n'); 
//  }
  
  if(Serial.available()) { //read from stoplight
    readChar = Serial.read();
    if(readChar == 'W') { // round won
      digitalWrite(WHITE_LED, HIGH);
      delay(500);
      digitalWrite(WHITE_LED, LOW);
      readChar = 'N';
    }
    else if(readChar == 'L') { // round lost
      digitalWrite(WHITE_LED, HIGH);
      delay(5000);
      digitalWrite(WHITE_LED, LOW);
      readChar = 'N';
    }
  }

  greenLastRead = greenRead;
  redLastRead = redRead;
}
