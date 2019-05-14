const int stepPin = 3;
const int dirPin = 4;

void setup() {
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);

}

void loop() {
  
  digitalWrite(dirPin, HIGH);

  for(int x = 0; x < 200; x++) {
       digitalWrite(stepPin, LOW);
       delayMicroseconds(1500);
       digitalWrite(stepPin, HIGH);
       delayMicroseconds(1500);
   }


}
