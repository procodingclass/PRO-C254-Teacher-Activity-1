// Passive Buzzer

int buzzerPin = 26;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  unsigned char  j;
  while (1)
  
    for (int j = 0; j < 100; j++)
    { //make another sound
      digitalWrite(buzzerPin, HIGH);
      delay(2);
      digitalWrite(buzzerPin, LOW);
      delay(2);
    }
    delay(100);
  }
}
