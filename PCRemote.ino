#include <IRremote.h>


const int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void translateIR() {
  switch (results.value)
  {
    case 0xA8B47:
      Serial.print("POWER");
      break;
    case 0x3CB47:
      Serial.println("RIGHT");
      break;
    case 0xDCB47:
      Serial.println("LEFT");
      break;    
    case 0xD8B47:
      Serial.println("REWIND");
      break;
    case 0x58B47:
      Serial.println("PLAYPAUSE");
      break;
    case 0x38B47:
      Serial.println("FASTFWD");
      break;
    case 0x9CB47:
      Serial.println("UP");
      break;
    case 0x5CB47:
      Serial.println("DOWN");
      break;
    case 0x490:
      Serial.println("VOLUP");
      break;
    case 0xC90:
      Serial.println("VOLDOWN");
      break;
    case 0x42B47:
      Serial.println("HOME");
      break;
    case 0xBCB47:
      Serial.println("OK");
      break;
  }
  delay(500);
}

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop(){
  if (irrecv.decode(&results)){
        Serial.println(results.value, HEX);
        translateIR();
        irrecv.resume();
  }
}