void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600);

}

void loop() {
  int data = analogRead(PC0);
  Serial.println(data);
  // put your main code here, to run repeatedly:

}
