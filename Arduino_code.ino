const int buzzerPin = D5;
const int lightPin1 = D0; // Pin for the first light (Green for NonDrowsy)
const int lightPin2 = D1; // Pin for the second light (Red for Drowsy)

void setup() {
  pinMode(buzzerPin, OUTPUT);  // Set buzzer pin as output
  pinMode(lightPin1, OUTPUT);   // Set light pin 1 as output
  pinMode(lightPin2, OUTPUT);   // Set light pin 2 as output
  Serial.begin(9600); // Start serial communication
}

void loop() {
  if (Serial.available() > 0) {
    char status = Serial.read();  // Read the status sent from Python
    
    if (status == 'D') {
      // Drowsy state
      digitalWrite(lightPin1, LOW);  // Turn off green light
      digitalWrite(lightPin2, HIGH); // Turn on red light
      tone(buzzerPin, 1967);         // Activate buzzer
    }
    else if (status == 'N') {
      // Non-drowsy state
      digitalWrite(lightPin1, HIGH); // Turn on green light
      digitalWrite(lightPin2, LOW);  // Turn off red light
      noTone(buzzerPin);             // Deactivate buzzer
    }
  }
}