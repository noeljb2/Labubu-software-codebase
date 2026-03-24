// ECE 1895 Hello World - Three Blink

// the setup function runs once when you press reset or power the board
void setup()
{
  pinMode(19, OUTPUT); // 19 = analog input 5 = actual pin 28
  pinMode(18, OUTPUT); // 18 = analog input 4 = actual pin 27
  pinMode(17, OUTPUT); // 17 = analog input 3 = actual pin 26

  pinMode(9, INPUT_PULLUP); // 9 = digital pin 9 = pushbutton at bottom of breadboard is used to start/stop LED blinking
}

// the loop function runs over and over again forever
void loop() 
{
  if (digitalRead(9) == LOW) // turn the LEDs on according to the following sequence if the switch is pressed (i.e. pulls pin low which is normally pulled high)
  {
    digitalWrite(19, HIGH); // turn the LED on (HIGH means supply 5V to LED)
    delay(500); // wait for about 1/2 a second
    digitalWrite(19, LOW); // turn the LED off (LOW means tie to ground)
    delay(500);
    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(18, LOW);
    delay(500);
    digitalWrite(17, HIGH);
    delay(500);
    digitalWrite(17,LOW);
    delay(500);
    // results in one LED on at a time, going in descending order when looking at breadboard
  }
  else // turn all LEDs off if the switch is not pressed
  {
    digitalWrite(19, LOW);
    digitalWrite(18, LOW);
    digitalWrite(17, LOW);
  }      
}
