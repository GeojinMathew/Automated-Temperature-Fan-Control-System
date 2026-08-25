#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
#define FAN_PIN 9

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(FAN_PIN, OUTPUT);
  analogWrite(FAN_PIN, 0);
}

void loop() {
  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("DHT11 reading failed!");
    analogWrite(FAN_PIN, 0);
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  if (temperature < 30) {
    analogWrite(FAN_PIN, 0);
    Serial.println("Fan: OFF");
  } 
  else if (temperature < 31) {
    analogWrite(FAN_PIN, 80);
    Serial.println("Fan: LOW");
  } 
  else if (temperature < 32) {
    analogWrite(FAN_PIN, 160);
    Serial.println("Fan: MEDIUM");
  } 
  else {
    analogWrite(FAN_PIN, 255);
    Serial.println("Fan: HIGH");
  }

  delay(2000);
}
