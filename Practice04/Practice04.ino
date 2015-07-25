//Practice04 - 다중 LED 연결

int ledPin[] = {2, 3, 4, 5, 6, 7, 8};
//C,C++형태의 배열선언

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 7; i++)
    pinMode(ledPin[i], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 7; i++) {
    digitalWrite(ledPin[i], HIGH);
    delay(100);
  }
  for (int i = 6; i > 0; i--) {
    digitalWrite(ledPin[i], LOW);
    delay(100);
  }
}
