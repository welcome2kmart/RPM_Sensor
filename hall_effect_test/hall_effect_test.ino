/* 
 *  07-23-2016
 *  Kenneth Martens
 *  
 *  5V -> Hall pin 1
 *  2 -> Hall pin 2
 *  GND -> Hall pin 3
 *  
 *  State of hall sensor printed to serial mornitor.
 *  
 */

int state;
int hall_output = 2;


void setup() {
  Serial.begin(9600);
  
  pinMode(hall_output, INPUT_PULLUP);
  
  
  pinMode(13, OUTPUT);
  

}

void loop() {
  state = digitalRead(hall_output);
  
  Serial.println(state);
  digitalWrite(13, state);

  delay(10);

}
