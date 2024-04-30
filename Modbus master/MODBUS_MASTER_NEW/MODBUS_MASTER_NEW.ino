
#include <ModbusMaster.h>
#define FC    22
#define RX_PIN 25 
#define TX_PIN 26

ModbusMaster node;

void preTransmission()
{
  digitalWrite(FC, 1);
}

void postTransmission()
{
  digitalWrite(FC, 0);
}

void setup()
{
  Serial.begin(9600);
  pinMode(FC, OUTPUT);
  digitalWrite(FC, 0);
  
  Serial1.begin(9600, SERIAL_8N1, RX_PIN, TX_PIN);

  node.begin(1, Serial1);                           //Slave ID as 1
  node.preTransmission(preTransmission);
  node.postTransmission(postTransmission);
}

void loop()
{
  uint8_t value;
  value = node.readHoldingRegisters(0x40001, 3);           

  Serial.print("\n");
  Serial.print(" ANIN1 : "); Serial.print(node.getResponseBuffer(0x00));
  Serial.print(" ANIN2 : "); Serial.print(node.getResponseBuffer(0x01));
  Serial.print(" ANIN3 : "); Serial.print(node.getResponseBuffer(0x02));
  Serial.print("\n");
  delay(500);
  
  uint8_t result[3];
  result[1] = node.readDiscreteInputs(0x10001, 1);
  Serial.print(" INPUT1 VALUE : "); Serial.print(node.getResponseBuffer(result[1]));
  Serial.print("\n"); 
  delay(500); 
          
  result[2] = node.readDiscreteInputs(0x10002, 1);
  Serial.print(" INPUT2 VALUE : "); Serial.print(node.getResponseBuffer(result[2]));
  Serial.print("\n");  
  delay(500);
   
  result[3] = node.readDiscreteInputs(0x10003, 1);
  Serial.print(" INPUT3 VALUE : "); Serial.print(node.getResponseBuffer(result[3]));
  Serial.print("\n");
  delay(500); 
}                                                            
