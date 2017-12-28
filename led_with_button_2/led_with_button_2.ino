int ledPin=11;            //pin 11 controls LED
int btnPin=2;             //pin 2 interfaces with BUTTON

volatile int state = LOW; // initial state LOW=off

void setup(){
  pinMode(ledPin, OUTPUT);//set LED pin as an OUTPUT-type
  pinMode(btnPin, INPUT); //set BUTTON pin as an INPUT-type
}

void loop(){
  if( digitalRead(btnPin) == LOW)       //detects if BUTTON is pressed
      digitalWrite(ledPin, HIGH);        //Output control status LED to ON 
   else
      digitalWrite(ledPin, LOW);        //Output control status LED to OFF     
} 
