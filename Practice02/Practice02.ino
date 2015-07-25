//Practice02 - 가변저항

int ledPin = 13;
//디지털핀 13번사용
int sensorValue;
//아날로그핀으로부터 읽어들이는 값

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  //DIGITAL_13번핀 사용
}

void loop() {
  // put your main code here, to run repeatedly:

  //analogRead(pin)
  int sensorValue = analogRead(0);
  //0번 아날로그핀으로부터 Read

  //digitalWrite(pin,HIGH/LOW)
  digitalWrite(ledPin,HIGH);
  delay(sensorValue);
  digitalWrite(ledPin,LOW);
  delay(sensorValue);
  
}
