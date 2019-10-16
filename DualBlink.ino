/*
  Dual Blink,  adapted by Nicu FLORICA (niq_ro), 16.10.2019
  Turns an LED on for one second another LED off, then firs LED off for one second other on, repeatedly.
  Original: Blink modified 8 May 2014 by Scott Fitzgerald, modified 2 Sep 2016 by Arturo Guadalupi, modified 8 Sep 2016 by Colby Newman
*/
#define LED_BUILTIN1 25 // https://github.com/BLavery/SAMD21-M0-Mini
#define LED_BUILTIN2 26 // https://github.com/BLavery/SAMD21-M0-Mini

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins LED_BUILTIN1 and LED_BUILTIN1 as outputs.
  pinMode(LED_BUILTIN1, OUTPUT);
  pinMode(LED_BUILTIN2, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN1, HIGH);   // turn the LED1 on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN2, LOW);    // turn the LED2 off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(LED_BUILTIN1, LOW);    // turn the LED1 off by making the voltage LOW
  digitalWrite(LED_BUILTIN2, HIGH);   // turn the LED2 on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
}
