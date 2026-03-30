void setup() {
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(A0);
  int percent = map(potValue, 0, 1023, 0, 100);
  
  Serial.print("Raw: ");
  Serial.print(potValue);
  Serial.print("  |  Percent: ");
  Serial.print(percent);
  Serial.println("%");
  
  delay(50);
}