#define Vin 5.0
#define T0 298.15
#define Rt 10000
#define R0 10000
#define T1 273.15
#define T2 373.15
#define RT1 35563
#define RT2 549
float beta = 0.0;
float Rinf = 0.0;
float TempKelvin = 0.0;
float  TempCelsius = 0.0;
float Vout = 0.0;
float Rout = 0.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  beta = (log(RT1 / RT2)) / ((1 / T1) - (1 / T2));
  Rinf = R0 * exp(-beta / T0);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  Vout = Vin * ((float)(analogRead(0)) / 1024.0);
  Rout = (Rt * Vout / (Vin - Vout));
  TempKelvin = (beta / log(Rout / Rinf));
  TempCelsius = TempKelvin -273.15;
  Serial.print("Temperatura em Celsius: ");
  Serial.print(TempCelsius);
  Serial.print("   Temperatura em Kelvin: ");
  Serial.println(TempKelvin);
  delay(500);
}
