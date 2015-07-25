//Practice05 - 푸시 버튼

int ledPin = 13;
int switchPin1 = 2;
int switchPin2 = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin1, INPUT);
  pinMode(switchPin2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //digitalRead(pin) -> HIGH/LOW 반환
  if ((digitalRead(switchPin1) == LOW) && (digitalRead(switchPin2) == LOW))
      //@@@@@ 버튼을 누른 상태가 LOW, 누르지 않은 상태가 HIGH 상태임 @@@@@
    digitalWrite(ledPin, LOW);
  else if ((digitalRead(switchPin1) == LOW) || (digitalRead(switchPin2) == LOW))
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW);

    /*
     *    다음과 같이 if문의 위치를 바꾸게 되면, 버튼하나를 누를경우 해당조건문을 참으로 판단하여
     *    두번째 else if문을 확인하지 않게됨 -> 두개의 버튼을 누를경우 하나의 버튼을 누른것과 같은 출력
     *    
     *    if ((digitalRead(switchPin1) == LOW) || (digitalRead(switchPin2) == LOW))
     *      digitalWrite(ledPin, HIGH);
     *    
     *    else if ((digitalRead(switchPin1) == LOW) && (digitalRead(switchPin2) == LOW))    
     *      digitalWrite(ledPin, LOW);  
     *    
     *    else    
     *      digitalWrite(ledPin, LOW);
     */
}
