const int Btn_pin = 2;

void setup() {
  pinMode(Btn_pin, INPUT);
  Serial.begin(19200); //can use any serial, important that it does not interfere with any other port traffic
  // put your setup code here, to run once:
 

}

void loop() {
  int value = digitalRead(Btn_pin);
  String data_to_send = "";

  //Can adjust this code where it does not send any data at all unless the button is rpessed.
  if (value > 0) {
    data_to_send = "1";
  } else {
    data_to_send = "0";
  }
 
  delay(10);
  Serial.println(data_to_send);
  Serial.flush();

}
