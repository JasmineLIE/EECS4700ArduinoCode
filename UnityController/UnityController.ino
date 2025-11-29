

const int hall_pin_1 = A0;
const int hall_pin_2 = A1;
const int hall_pin_3 = A2;
const int hall_pin_4 = A3;
const int hall_pin_5 = A4

void setup() {
  

  Serial.begin(9600); //can use any serial, important that it does not interfere with any other port traffic
  // put your setup code here, to run once:
 
}

void loop() {
  
 
 
 int hall_state_1 = analogRead(hall_pin_1);

 int hall_state_2 = analogRead(hall_pin_2);

 int hall_state_3 = analogRead(hall_pin_3);

 int hall_state_4 = analogRead(hall_pin_4);

 int hall_state_5 = analogRead(hall_pin_5);


  Serial.print("A");
  Serial.println(hall_state_1);
 

 Serial.print("B");
  Serial.println(hall_state_2);


  Serial.print("C");
  Serial.println(hall_state_3);

   Serial.print("D");
  Serial.println(hall_state_4);

   Serial.print("E");
  Serial.println(hall_state_5);



  delay(1000);

  Serial.flush();

}
