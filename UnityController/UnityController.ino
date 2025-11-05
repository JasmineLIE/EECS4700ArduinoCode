const int Btn_pin_3 = 3;
const int Btn_pin_4 = 4;
const int Btn_pin_5 = 5;
const int Btn_pin_6 = 6;
const int Btn_pin_7 = 7;


void setup() {
  pinMode(Btn_pin_3, INPUT);
  pinMode(Btn_pin_4, INPUT);
  pinMode(Btn_pin_5, INPUT);
  pinMode(Btn_pin_6, INPUT);
  pinMode(Btn_pin_7, INPUT);

  Serial.begin(19200); //can use any serial, important that it does not interfere with any other port traffic
  // put your setup code here, to run once:
 

}

void loop() {
  int pin_3_val = digitalRead(Btn_pin_3);
    int pin_4_val = digitalRead(Btn_pin_4);
      int pin_5_val = digitalRead(Btn_pin_5);
        int pin_6_val = digitalRead(Btn_pin_6);
          int pin_7_val = digitalRead(Btn_pin_7);
  String data_to_send = "";

  //Can adjust this code where it does not send any data at all unless the button is rpessed.
if (pin_3_val == HIGH) {
  data_to_send = "LEFT";

} else if (pin_4_val== HIGH ) {
  data_to_send = "UP";
 
} else if (pin_5_val == HIGH) {
  data_to_send = "DOWN";

} else if (pin_6_val == HIGH) {
  data_to_send = "RIGHT";

} else if (pin_7_val == HIGH) {
  data_to_send = "ENTER";

}

  Serial.println(data_to_send);
 
  delay(100);

  Serial.flush();

}
