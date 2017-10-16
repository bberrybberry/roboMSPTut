/**
 * This simple program explains how to make an LED blink based
 * on energia code supplied to the MSP430G2553 launchpad.
 * 
 * This simple blinker flashes LED1
 */

 #define TIME_DELAY_MS 750;
 
void setup() {
  // Configure IO
   pinMode(RED_LED);

   //set up your serial console
   Serial.begin(9600); // 9600 bps Baud Rate
   Serial.printf("Let's blink an LED!");

}

void loop() {
  // Turn the LED ON
  digitalWrite(RED_LED, HIGH);
  
  // Wait 
  delay(TIME_DELAY_MS);

  // Turn the LED OFF
  digitalWrite(RED_LED, LOW);

  // Wait
  delay(TIME_DELAY_MS);
}
