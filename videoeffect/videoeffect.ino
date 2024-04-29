const int pwmPin = 5;
int pwmValue = 0;

void setup() {
  pinMode(pwmPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(pwmPin, pwmValue);
  // pwmValue=10;
  pwmValue=(pwmValue+1)%10;
  // pwmValue++;
  // if (pwmValue > 20){
  //   pwmValue = 0;
  // }
  Serial.println(pwmValue);
}
