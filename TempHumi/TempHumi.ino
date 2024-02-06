#include <Wire.h>
#include <HDC1000.h>
 
HDC1000 mySensor;
 
void setup() {
  Serial.begin(9600);
  mySensor.begin();
}

void loop() {
  Serial.print("Temperature: ");
  float temperature = mySensor.getTemp(); 
  Serial.print(temperature); 
  Serial.print("C, Humidity: ");     
  Serial.print(mySensor.getHumi());
  Serial.println("%");
  
  if (temperature > 29) {
    Serial.println("Il fait chaud Aujourd'hui");
  } else if (temperature >= 20 && temperature <= 29) {
    Serial.println("Il fait beau Aujourd'hui");
  } else {
    Serial.println("Il fait froid Aujourd'hui");
  }

  delay(1000);
}
