
int switchState = 0;
int i;


void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  switchState = digitalRead(2);

 if (switchState == LOW){
  digitalWrite(3, HIGH); // GREEN
  digitalWrite(4, LOW); // RED MID
  digitalWrite(5, LOW); // RED LEFT
  Serial.begin(9600);
 }
 else{ // PRESS BUTTON

   for (i = 0; i < 3; i++) {
      digitalWrite(3, LOW); // GREEN
      digitalWrite(4, LOW); // RED MID
      digitalWrite(5, HIGH); // RED LEFT
      delay(250);
      digitalWrite(4, HIGH); // RED MID
      digitalWrite(5, LOW); // RED LEFT
      delay(250);
      digitalWrite(3, HIGH); // GREEN
      digitalWrite(4, LOW); // RED MID
      digitalWrite(5, LOW); // RED LEFT
      delay(250);
   }

  for (i = 0; i < 5; i++) {
      digitalWrite(3, LOW); // GREEN
      digitalWrite(4, LOW); // RED MID
      digitalWrite(5, LOW); // RED LEFT
      delay(250);

      digitalWrite(3, HIGH); // GREEN
      digitalWrite(4, HIGH); // RED MID
      digitalWrite(5, HIGH); // RED LEFT
      delay(250); }


   for (i = 0; i < 3; i++) {
      digitalWrite(3, HIGH); // GREEN
      digitalWrite(4, LOW); // RED MID
      digitalWrite(5, LOW); // RED LEFT
      delay(250);
      digitalWrite(4, HIGH); // RED MID
      digitalWrite(5, LOW); // RED LEFT
      delay(250);
      digitalWrite(3, LOW); // GREEN
      digitalWrite(4, LOW); // RED MID
      digitalWrite(5, HIGH); // RED LEFT
      delay(250);
   }

 }
 
}
