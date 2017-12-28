int ledPin=11;            //pin 11 controls LED
int btnPin=2;             //pin 2 interfaces with BUTTON

volatile int state = LOW; // initial state LOW=off

void setup(){
  pinMode(ledPin, OUTPUT);//set LED pin as an OUTPUT-type
  pinMode(btnPin, INPUT); //set BUTTON pin as an INPUT-type
}

void loop(){
  if( digitalRead(btnPin) == LOW ){       //detects if BUTTON is pressed
      delay(10);                          //Delay 10ms for the elimination of key leading-edge button jitter
      while( digitalRead(btnPin) == LOW );//Wait for key interfaces to high
      delay(10);                          //delay 10ms for the elimination of key trailing-edge jitter
      state = !state;                     //Negate operation, each time you run the program here, state the HIGH becomes LOW, or the state LOW becomes HIGH.
      digitalWrite(ledPin, state);        //Output control status LED, ON or OFF 
   }
}
