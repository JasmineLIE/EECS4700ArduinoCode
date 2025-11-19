

const int hall_pin_1 = 1;
const int hall_pin_2 = 2;
const int threshold = 10;
void setup() {
  

  Serial.begin(19200); //can use any serial, important that it does not interfere with any other port traffic
  // put your setup code here, to run once:
 
  pinMode(hall_pin_1, INPUT);
  pinMode(hall_pin_2, INPUT);
}

void loop() {
  
 
 
 int hall_state_1 = digitalRead(hall_pin_1);

 int hall_state_2 = digitalRead(hall_pin_2);

 if (hall_state < threshold) {
  Serial.print("A:" + hall_state_!);
  Serial.println(hall_state);
 
 }
if (hall_state_2 < threshold) {
 Serial.print("B");
  Serial.println(hall_state_2);
}

 
  delay(1000);

  Serial.flush();

}
