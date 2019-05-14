int switchPin1=D3; //d3
int switchPin2=D1; //d1
int LedPin1 = D4;
int LedPin2 = D5;
int switchValue1;
int switchValue2;


void setup() {
  pinMode(LedPin1, OUTPUT);
  pinMode(switchPin1, INPUT_PULLUP);
 pinMode(LedPin2, OUTPUT);
  pinMode(switchPin2, INPUT_PULLUP);
}

void loop() {
  switchValue1 = digitalRead(switchPin1);
  digitalWrite(LedPin1, !switchValue1);
  switchValue2 = digitalRead(switchPin2);
  digitalWrite(LedPin2, !switchValue2);
}
