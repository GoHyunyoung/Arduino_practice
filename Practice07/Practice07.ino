//Chapter07 - 온도 센서 구동

int sensorPin = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  //시리얼 모니터를 사용하기전 초기화단계(통신속도:9600 baud rate 는 같은 속도로 설정이 되어있어야함)
}

void loop() {
  // put your main code here, to run repeatedly:

  float sensorValue;

  sensorValue = analogRead(sensorPin);
  float voltage = sensorValue * 0.004882814;
  float degreeC = (voltage - 0.5) * 100;
  //TMP36은 섭씨 25도 일때 750mV 출력이므로 섭씨 x도를 알려면 voltage에 100/750를 곱해야함
  //
  float degreeF = (degreeC * 9 / 5) + 32;

  Serial.print("voltage = ");
  Serial.print(voltage);
  Serial.print(", ");

  Serial.print("degreeC = ");
  Serial.print(degreeC);
  Serial.print(", ");

  Serial.print("degreeF = ");
  Serial.println(degreeF);
  delay(1000);
}
