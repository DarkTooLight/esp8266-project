
// when i plss a button the Led goes to lighting  and i plss agin the Led goes to off

const int buttonPin = D0;  // Pin connected to the button
const int ledPin = D5;     // Pin connected to the LED

int buttonState = HIGH;    // Current state of the button
int lastButtonState = HIGH;  // Previous state of the button
bool ledState = LOW;       // Current state of the LED

void setup() {
  pinMode(ledPin, OUTPUT);      // Set the LED pin as output
  pinMode(buttonPin, INPUT_PULLUP);  // Set the button pin as input with internal pull-up resistor
}

void loop() {
  // Read the state of the button
  buttonState = digitalRead(buttonPin);

  // Check if the button is pressed and the state has changed since last check
  if (buttonState != lastButtonState && buttonState == LOW) {
    // Toggle the LED state
    ledState = !ledState;

    // Update the LED based on the new state
    digitalWrite(ledPin, ledState);

    // Print the state of the LED
    if (ledState == HIGH) {
      Serial.println("LED is ON");
    } else {
      Serial.println("LED is OFF");
    }
  }

  // Remember the current button state for the next iteration
  lastButtonState = buttonState;
}
