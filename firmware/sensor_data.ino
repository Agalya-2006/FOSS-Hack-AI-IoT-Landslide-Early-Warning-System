// ESP32 sensor reading example
int soilSensor = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int soilValue = analogRead(soilSensor);
  Serial.println(soilValue);
  delay(1000);
}
