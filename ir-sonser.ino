#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>

// Define the pin for the LED
const int ledPin = D1;

// Define the pin for the IR receiver
const int IRpin = D5;

// Initialize the IR receiver
IRrecv irrecv(IRpin);

decode_results results;

void setup()
{
  // Initialize LED pin as an output
  pinMode(ledPin, OUTPUT);

  // Start the IR receiver
  irrecv.enableIRIn();
}

void loop() {
  // Check if IR signal is received
  if (irrecv.decode(&results)) {
    // If the received IR signal matches the power button signal
    if (results.value == 0x40BF48B7) {
      // Toggle LED state
      digitalWrite(ledPin, !digitalRead(ledPin));
    }
    // Reset the IR receiver for the next signal
    irrecv.resume();
  }
}