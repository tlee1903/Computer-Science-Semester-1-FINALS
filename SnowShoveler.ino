// motor one 
  int in1 = 1; 
  int in2 = 2;
 // motor two
  int in3 = 3;
  int in4 = 4;
 // motor three
  int in5 = 5;
  int in6 = 6;
 // motor four
  int in7 = 7;
  int in8 = 8;
  
void setup() {
  // set all motor control pins to outputs 
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in8, OUTPUT);
 
}

void loop() {
  
  // put your main code here, to run repeatedly.
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  digitalWrite(in5, HIGH);
  digitalWrite(in6, LOW);

  digitalWrite(in7, HIGH);
  digitalWrite(in8, LOW);
}
