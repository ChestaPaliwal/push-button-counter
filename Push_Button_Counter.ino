// Push Button Counter using Serial Monitor

int buttonPin = 2;              // Push button connected to digital pin 2
int buttonState = 0;
int lastButtonState = 0;
int count = 0;

void setup() {
  Serial.begin(9600);          // Start Serial Monitor
  pinMode(buttonPin, INPUT);   // Set button pin as input
  Serial.println("Push Button Counter Initialized");
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // Detect new button press
  if (buttonState == HIGH && lastButtonState == LOW) {
    count++;
    Serial.print("Button Pressed Count: ");
    Serial.println(count);
    delay(200); // Debounce delay
  }

  lastButtonState = buttonState;
}
