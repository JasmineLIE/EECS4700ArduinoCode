

const int hall_pin_1 = A0;
const int hall_pin_2 = A1;
void setup() {
  

  Serial.begin(19200); //can use any serial, important that it does not interfere with any other port traffic
  // put your setup code here, to run once:
 

}

void loop() {
  
 
 
 int hall_state = analogRead(hall_pin_1);

 int hall_state_2 = analogRead(hall_pin_2);

  Serial.print("A");
  Serial.println(hall_state);
 
  Serial.print("B");
  Serial.println(hall_state_2);
  delay(1000);

  Serial.flush();

}
