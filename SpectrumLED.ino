@@ -1,38 +0,0 @@
int RedLED=9;
int GreenLED=10;
int BlueLED=11;
 
void setup() {
  // put your setup code here, to run once:
  pinMode(RedLED,OUTPUT);
  pinMode(GreenLED,OUTPUT);
  pinMode(BlueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int x=0;x<256;x++){
  analogWrite(RedLED,x);
  delay(10);
  }
  for(int x=0;x<256;x++){
  analogWrite(BlueLED,x);
  delay(10);
  }
  for(int x=0;x<256;x++){
    analogWrite(GreenLED,x);
  delay(10);
  }
  for(int x=255;x>0;x--){
  analogWrite(RedLED,x);
  delay(10);
  }
  for(int x=255;x>0;x--){
  analogWrite(BlueLED,x);
  delay(10);
  }
  for(int x=255;x>0;x--){
  analogWrite(GreenLED,x);
  delay(10);
  }
}
