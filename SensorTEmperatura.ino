#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht (DHTPIN, DHTTYPE);
byte v_sensor = 1;
void setup() {
  Serial.begin(9600);
  dht.begin();
  // put your setup code here, to run once:

}

void loop() {
  delay(5000);

float h = dht.readHumidity();
float t = dht.readTemperature();
float f = dht.readTemperature(true);
if (isnan(h) || isnan(t) || isnan(f) {
  Serial.println("Error obteniendo los datos del senosr DHT11");
  }
  float hif = dht.computeHeatIndex(f,h);
  float hic = dht.computeHeatIndex(t,h, false);
  Serial.print("Humedad: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");
  Serial.print("Indice de calor: ");
  Serial.print(hic);
  Serial.print(" *C ");
  Serial.print(hif);
  Serial.print(" *F");

  }

