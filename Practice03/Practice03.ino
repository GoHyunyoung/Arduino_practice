//Pracitce03 - RGB_LED

int bluePin = 13;
int greenPin = 12;
int redPin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // vivid_Color();

  vivid_Spectrum();
}

void vivid_Color(void) {
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, LOW);
  delay(100);

  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
  delay(100);

  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(100);

  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
  delay(100);

  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, HIGH);
  delay(100);

  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(100);

  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, HIGH);
  delay(100);
}
void vivid_Spectrum(void) {

  //analogWrite(pin,value)
  for (int G = 0; G < 1024; G++) {
    analogWrite(greenPin, G);
    for (int R = 0; R < 1024; R++) {
      analogWrite(redPin, R);
      for (int B = 0; B < 1024; B++) {
        analogWrite(bluePin, B);
      }
      for (int B = 1023; B > 0 ; B--) {
        analogWrite(bluePin, B);
      }
    }
    for (int R = 1023; R > 0 ; R--) {
      analogWrite(redPin, R);
    }
  }
  for (int G = 1023; G > 0 ; G--) {
    analogWrite(greenPin, G);
  }
}

