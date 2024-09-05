int LED = 2;       
     
int SENSOR_OUTPUT_PIN = 5;

void setup() {

  pinMode(SENSOR_OUTPUT_PIN, INPUT);  

  pinMode(LED, OUTPUT);           

  Serial.begin(9600);

}

void loop() {

  int sensorvalue = digitalRead(SENSOR_OUTPUT_PIN);

  Serial.println(sensorvalue);
  
  if (sensorvalue== HIGH) {
 
   digitalWrite(LED, HIGH);

    delay(1000);
  }

  else {

    digitalWrite(LED, LOW);
   
  }
}
