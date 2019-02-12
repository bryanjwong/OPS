#define RED_LED 4
#define GREEN_LED 5

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  
  randomSeed(analogRead(0));
  Serial.begin(9600);
}


char readChar = 'n';
char flashedLight = 'N';
int score = 0;
  
void loop() {
  // put your main code here, to run repeatedly:

  if(flashedLight != 'g' && flashedLight != 'R') {
    int randNum = random(2);
    
    if(randNum == 0) {
      flashedLight = 'g';
      digitalWrite(GREEN_LED, HIGH);
      delay(50);
      digitalWrite(GREEN_LED, LOW);
      //Serial.println("Flashed green stoplight");
    }
      
    if(randNum == 1) {
      flashedLight = 'R';
      digitalWrite(RED_LED, HIGH);
      delay(50);
      digitalWrite(RED_LED, LOW);
      //Serial.println("Flashed red stoplight");
    }
  }
  
  if(Serial.available()){

      readChar = Serial.read();
      //Serial.print("Received ");
      //Serial.println(readChar);
    
    if(readChar == flashedLight) {
      score++;
      Serial.write('W');
      Serial.print("in! Good job! Your score is now: ");
      Serial.println(score);
      delay(1500);
      flashedLight = 'N';
      readChar = 'n';

      
    } else if(readChar != 'n'){

      score = 0;
      Serial.write('L');
      Serial.println("ose! You are an idiot!");
      Serial.print("Your score is now: ");
      Serial.println(score);
      delay(7500);
      flashedLight = 'N';
      readChar = 'n';

    }

  }
    
}
