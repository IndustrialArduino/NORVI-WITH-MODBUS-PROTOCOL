#include "Wire.h"

#define RXD 33
#define TXD 2
#define FC  4

void setup() {
  
 Serial.begin(9600);
 pinMode(FC, OUTPUT); 
 Serial1.begin(9600, SERIAL_8N1,RXD,TXD); 
}

void loop() {
  
  digitalWrite(FC, HIGH);                    // Make FLOW CONTROL pin HIGH
  Serial1.println(F("RS485 01 SUCCESS"));    // Send RS485 SUCCESS serially
  delay(500);                                // Wait for transmission of data
  digitalWrite(FC, LOW) ;                    // Receiving mode ON                                            // Serial1.flush() ;     
  
  while (Serial1.available()) {  // Check if data is available
    char c = Serial1.read();     // Read data from RS485
    Serial.write(c);             // Print data on serial monitor
  }
}
