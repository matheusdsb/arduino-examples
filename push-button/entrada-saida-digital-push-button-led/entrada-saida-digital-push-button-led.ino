#define PinButton 8
#define ledPin 7


void setup() {
  // put your setup code here, to run once:
  pinMode(PinButton, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(PinButton) == HIGH) {
    digitalWrite(ledPin, HIGH);    
    Serial.println("Acendendo o Led");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Desligando o Led");    
  }
  delay(100);
}
