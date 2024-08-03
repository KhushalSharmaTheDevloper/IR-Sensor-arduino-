int ir = 7;
int led = 8;
int x;

void setup() {
  Serial.begin(9600);
  pinMode(ir, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  x = digitalRead(ir);
  Serial.println(x);

  if (x == 1) {
    digitalWrite(led, LOW);
    Serial.println("Door Close.");
  } else {
    digitalWrite(led, HIGH);
    Serial.println("Door Open.");
  }

 
}
