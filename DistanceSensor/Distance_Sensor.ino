#define LED1 5
#define LED2 6
#define IR_RECEIVER_1 19
#define IR_RECEIVER_2 17

//background noise for each IR receiver
long zero1;
long zero2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(IR_RECEIVER_1, INPUT);
  pinMode(IR_RECEIVER_2, INPUT);
  //here we take the average IR reading over 100 readings
  //to find the background noise
  zero1 = 0;
  zero2 = 0;
  for (int i = 0; i < 100; i++) {
    zero1 += analogRead(IR_RECEIVER_1);
    zero2 += analogRead(IR_RECEIVER_2);
  }
  zero1 /= 100;
  zero2 /= 100;
  zero1 = constrain(zero1, 0, 1023);
  zero2 = constrain(zero2, 0, 1023);
  Serial.begin(9600);
  Serial.print("Background Noise Left: ");
  Serial.println(zero1);
  Serial.print("Background Noise Right: ");
  Serial.println(zero2);
}

void loop() {
  // put your main code here, to run repeatedly:

  //IR values are read from 0 to 1023, with 0 being thr
  //brightest and 1023 being the darkest
  int val1 = analogRead(IR_RECEIVER_1);
  Serial.println(val1);
  val1 = map(val1, 34, zero1, 0, 255);
  //we use 255 - val1 in order to correct for the max/min
  //values being inverted in our previous reading
  val1 = constrain(val1, 0, 255);
  analogWrite(LED1, (255 - val1));

  int val2 = analogRead(IR_RECEIVER_2);
  //Serial.println(val2);
  val2 = map(val2, 32, zero2, 0, 255);
  val2 = constrain(val2, 0, 255);
  analogWrite(LED2, (255 - val2));


}
