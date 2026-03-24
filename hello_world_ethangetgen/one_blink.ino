// ECE 1895 Hello World - One Blink

// the setup function runs once when you press reset or power the board
void setup()
{
  pinMode(8, OUTPUT); // 8 = digital pin 8 = actual pin 14

  pinMode(9, INPUT_PULLUP); // 9 = digital pin 9 = pushbutton at bottom of breadboard is used to start/stop LED blinking
}

// the loop function runs over and over again forever
void loop() 
{
  if (digitalRead(9) == LOW) // turn the LEDs on according to the following sequence if the switch is pressed (i.e. pulls pin low which is normally pulled high)
  {
    digitalWrite(8, HIGH); // turn the LED on (HIGH means supply 5V to LED)
    delay(500); // wait about 1/2 a second
    digitalWrite(8, LOW); // turn the LED off (LOW means tie to ground)
    delay(500);
  }
  else // turn all LEDs off if the switch is not pressed
  {
    digitalWrite(8, LOW);
  }                     
}
