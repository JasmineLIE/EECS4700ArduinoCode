


void setup() {
  

  Serial.begin(9600); //can use any serial, important that it does not interfere with any other port traffic
  // put your setup code here, to run once:
 

}

void loop() {
  
 
 
 int hall_state = analogRead(A0);

 int hall_state_2 = analogRead(A1);

  Serial.print("Sensor 1: ");
  Serial.println(hall_state);
 
  Serial.print("Snesor 2: ");
  Serial.println(hall_state_2);
  delay(1000);

  Serial.flush();

}
