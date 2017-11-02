void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
  digitalWrite(13, HIGH);   // does 3 blinks waiting for half a second each time 
  delay(500);              
  digitalWrite(13, LOW);    
  delay(500);       
  digitalWrite(13, HIGH);   
  delay(500);              
  digitalWrite(13, LOW);    
  delay(500);
  digitalWrite(13, HIGH);   
  delay(500);              
  digitalWrite(13, LOW);    
  delay(2000);             // off for 2 seconds before starting again.
}
