#define AnalogLDR A0
#define Limiar 2.7
#define ledPin 13

int Leitura = 0;
float VoltageLDR;
float ResLDR;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  Leitura = analogRead(AnalogLDR);
  VoltageLDR = Leitura * (5.0/1024);
  Serial.print("Leitura Sensor LDR = ");
  Serial.println(VoltageLDR);

  if(VoltageLDR > Limiar) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}
