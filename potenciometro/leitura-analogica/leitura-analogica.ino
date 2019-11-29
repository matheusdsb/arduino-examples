#define sensorPin A0

int sensorValue = 0;
float voltage;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(100);

}

void loop() {
  // put your main code here, to run repeatedly:

  sensorValue = analogRead(sensorPin);
  voltage = sensorValue * (5.0 / 1024);
  Serial.print("Tensao do potenciometro:");
  Serial.print(voltage);
  Serial.print(" Valor: ");
  Serial.println(sensorValue);
  delay(2000);
}
