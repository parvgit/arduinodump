/*
  Blinking LED project.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Last Modification modified 30 March 2020
  by Roy Ben Avraham
 */

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(9, INPUT);




}
  int b = LOW;
// the loop function runs over and over again forever
void loop() {

  int  a = digitalRead(9);
  if( a == LOW )
  {
  if ((a == LOW) && (b == LOW)){
          b= HIGH;
          digitalWrite(13, HIGH);
          Serial.println("Light is  Switched on");
  } else {
    b = LOW;
digitalWrite(13, LOW);
Serial.println("Light is  Switched off");
 }
}


  // int  a = digitalRead(9);
  // if(( a == HIGH ) && (b == HIGH))
  // {
  //  b = LOW;
  //  digitalWrite(13, HIGH);
   
  //  }else  {
   
  //    digitalWrite(13, LOW);
  
  // }
 // digitalWrite(12, HIGH); 
  //digitalWrite(13, LOW);  // turn the LED on (HIGH is the voltage level)
  //delay(300);              // wait for a second
  //digitalWrite(12, LOW);
  //digitalWrite(13, HIGH);    // turn the LED off by making the voltage LOW
  //delay(300);              // wait for a second
  delay(500);
}
