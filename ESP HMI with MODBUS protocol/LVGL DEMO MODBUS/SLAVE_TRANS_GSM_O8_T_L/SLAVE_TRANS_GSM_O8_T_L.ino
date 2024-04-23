#include <ModbusRTU.h>

#define SLAVE_ID 5
#define RXD 25
#define TXD 26
#define FC  22
//
#define OUTPUT1 12
#define OUTPUT2 2
#define OUTPUT3 27
#define OUTPUT4 4

ModbusRTU mb;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600, SERIAL_8N1, RXD, TXD);
  mb.begin(&Serial1, FC); // Use Serial for USB communication
  mb.setBaudrate(9600);
  Serial.println("Modbus Initialized");
  
  //Initialize Digital Inputs
  pinMode(OUTPUT1, OUTPUT);
  pinMode(OUTPUT2, OUTPUT);
  pinMode(OUTPUT3, OUTPUT);
  pinMode(OUTPUT4, OUTPUT);
  
}

void loop() {
  mb.slave(SLAVE_ID);
  
  mb.addCoil(1);
  mb.Coil(1);
  if (mb.Coil(1) == 1)
  {
    digitalWrite(12, HIGH);
    Serial.println("T.1 = 1");
  }
  else
  { digitalWrite(12, LOW);
    Serial.println("T.1 = 0");
  }

  Serial.print(" ");
  // delay(1000);

  mb.addCoil(2);
  mb.Coil(2);
  if (mb.Coil(2) == 1)
  {
    digitalWrite(2, HIGH);
    Serial.println("T.2 = 1");
  }
  else
  { digitalWrite(2, LOW);
  Serial.println("T.2 = 0");
  }
  
  Serial.print(" ");
  // delay(1000);

  mb.addCoil(3);
  mb.Coil(3);
  if (mb.Coil(3) == 1)
  {
    digitalWrite(27, HIGH);
    Serial.println("T.3 = 1");
  }
  else
  { digitalWrite(27, LOW);
    Serial.println("T.3 = 0");
  }
  Serial.print(" ");
  // delay(1000);

  mb.addCoil(4);
  mb.Coil(4);
  if (mb.Coil(4) == 1)
  {
    digitalWrite(4, HIGH);
    Serial.println("T.4 = 1");
  }
  else
  { digitalWrite(4, LOW);
    Serial.println("T.4 = 0");
  }
  Serial.print("\n");
  // delay(1000);

  mb.task();
  yield();
}