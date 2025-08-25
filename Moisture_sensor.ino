const int moisturePin = A0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int moistureValue = analogRead(moisturePin);
int moisturePersentage = map(moistureValue,0,1023,100,0);
Serial.print ("moisture level");
Serial.println (moisturePersentage);
Serial.println("%");
delay(1000); 
}
