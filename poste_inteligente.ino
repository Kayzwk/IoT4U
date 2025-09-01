const int luminosidadePin = 0;
const int ledPin1 = 16;
const int ledPin2 = 5;
const int ledPin3 = 4;

int luminosidade = 0;

void setup() {
  pinMode(luminosidadePin, INPUT);
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  luminosidade = analogRead(luminosidadePin);
  Serial.println(luminosidade);
  if (luminosidade < 1000) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
  delay(10);
}
