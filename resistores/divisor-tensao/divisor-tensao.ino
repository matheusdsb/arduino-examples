#define sensorPin1 A0
#define sensorPin2 A1

int sensorValue1 = 0;
int sensorValue2 = 0;

float voltage1;
float voltage2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(100);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue1 = analogRead(sensorPin1);
  sensorValue2 = analogRead(sensorPin2);

  voltage1 = sensorValue1 * (5.0 / 1024);
  voltage2 = sensorValue2 * (5.0 / 1024);

  Serial.print("Tensao do divisor 1: ");
  Serial.print(voltage1);

  Serial.print("  Tensao do divisor 2:  ");
  Serial.println(voltage2);  

  delay(2000);

}
