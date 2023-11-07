void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  Serial.begin(9600);

}

void loop() {
  int data = pulseIn(2,LOW);
  Serial.println(data);
  // put your main code here, to run repeatedly:

}
