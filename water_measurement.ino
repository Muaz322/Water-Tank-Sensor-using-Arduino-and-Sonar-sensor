
long duration, cm, inches;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(4, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4,LOW);
  delayMicroseconds(5);
  digitalWrite(4, HIGH);
  delayMicroseconds(10);
  digitalWrite(4, LOW);

pinMode(2, INPUT);

duration = pulseIn(2,HIGH);

cm = (duration/2)/29.1;
inches = (duration/2) /74;

Serial.print("Distance: ");
Serial.print(inches);
Serial.print("in, ");
Serial.print(cm);
Serial.print("cm ");
Serial.println();
delay (250);  


}
