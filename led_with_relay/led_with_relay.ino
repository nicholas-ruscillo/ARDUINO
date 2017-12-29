const int relayPin = 8;       //the pin the relay is triggered by

void setup(){
  pinMode(relayPin, OUTPUT);  //put relayPin into OUTPUT mode
}

void loop(){
  digitalWrite(relayPin, HIGH); //closes relay by sending current
  delay(1000);                  //wait 1 second
  digitalWrite(relayPin, LOW);  //opens relay by stopping current
  delay(1000);                  //wait 1 second
}
