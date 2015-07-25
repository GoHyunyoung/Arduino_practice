//Chapter06 - Photo Register

int ledPin = 9;
int sensorPin = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor_value ;
  sensor_value = analogRead(sensorPin);

  //analogRead(pin)를 통해 들어온 값은 0~1023,analogWrite(pin,value)를 통해 나가는 값은 0~255

  //map(value,fromLow,fromHigh,toLow,toHigh)함수를 통해 서로다른 범위의 값으로 매핑(축적변환) 시킬수 있음
  sensor_value = map(sensor_value, 0, 1023, 0, 255);

  //map()함수를 사용해도 여전히 타겟범위를 벗어나는 값을 출력할수가 있기 때문에 constrain()함수를 사용하여
  //범위밖으로 벗어나지않도록 제한해주어야함
  //constrain(value,low,high)
  sensor_value = constrain(sensor_value, 0, 255);

  analogWrite(ledPin, sensor_value);

}
