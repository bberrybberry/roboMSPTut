/**
 * This simple program explains how to make an LED blink based
 * on energia code supplied to the MSP430G2553 launchpad.
 * 
 * This simple blinker flashes LED1. It is controlled by the 
 * user push button. 
 */

#define TIME_DELAY_MS 750;
#define POLLING
//#define INTERRUPT

void pushbuttonInterrupt(void);

static int ledState = 0;
static int prevBtnState = 0;
 
void setup() {
  // Configure IO
   pinMode(RED_LED, OUTPUT);
   pinMode(PUSH2, INPUT_PULLUP);

   //init the LED to OFF
   ledState = 0;
   digitalWrite(RED_LED, LOW);

   //set up your serial console
   Serial.begin(9600); // 9600 bps Baud Rate
   Serial.print("Let's blink an LED!");

   #ifdef INTERRUPT
   //attach inrreupt to button on falling edge
   attachInterrupt(PUSH2, pushbuttonInterrupt, FALLING);
   //enable interrupts
   interrupts();
   #endif

}

void loop() {
  #ifdef POLLING
  // see if btn went changed
  if(digitalRead(PUSH2) != prevBtnState){
    //toggle LED: change it's state and save it
    if(ledState){
      ledState = 1;
      digitalWrite(RED_LED, HIGH);
    }
    else{
      ledState = 0;
      digitalWrite(RED_LED, LOW);
    }
  }
  //save button state for next time you visit this function
  prevBtnState = digitalRead(PUSH2);
  
  #endif  
}

void pushbuttonInterrupt(){
    //toggle LED: change it's state and save it
    if(ledState){
      ledState = 1;
      digitalWrite(RED_LED, HIGH);
    }
    else{
      ledState = 0;
      digitalWrite(RED_LED, LOW);
    }
}

