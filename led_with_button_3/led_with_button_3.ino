int ledPin=11;            //pin 11 controls LED
int btnPin=2;             //pin 2 interfaces with BUTTON

volatile int state = LOW; // initial state LOW=off

void setup(){
  pinMode(ledPin, OUTPUT);//set LED pin as an OUTPUT-type
  pinMode(btnPin, INPUT); //set BUTTON pin as an INPUT-type
}

void loop(){
  if( digitalRead(btnPin) == LOW)       //detects if BUTTON is pressed
    for ( int i=0; i<15; i++ ){
      digitalWrite(ledPin, HIGH);        //Output control status LED to ON 
      delay(100);
      digitalWrite(ledPin, LOW);        //Output control status LED to OFF 
      delay(100);
    }
   else
      digitalWrite(ledPin, LOW);        //Output control status LED to OFF     
} 
