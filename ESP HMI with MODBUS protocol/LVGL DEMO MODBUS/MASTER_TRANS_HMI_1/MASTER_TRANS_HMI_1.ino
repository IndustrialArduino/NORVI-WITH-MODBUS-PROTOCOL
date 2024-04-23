#include "Wire.h"
#include <ModbusMaster.h>

#define SDA 19
#define SCL 20

// I2C address of PCA9538
#define PCA9538_ADDR 0x73

// PCA9538 register addresses
#define PCA9538_INPUT_REG 0x00
#define PCA9538_OUTPUT_REG 0x01
#define PCA9538_POLARITY_REG 0x02
#define PCA9538_CONFIG_REG 0x03

#define FC    -1
#define RX_PIN 48 
#define TX_PIN 2

#define GPIO5 0x10
#define GPIO6 0x20
#define GPIO7 0x40
#define GPIO8 0x80

#define NUM_OUTPUT_PINS 4

void setPinMode(uint8_t pin, uint8_t mode) {
  uint8_t config = readRegister(PCA9538_CONFIG_REG);
  if (mode == INPUT) {
    config |= pin;
  } else {
    config &= ~pin;
  }
  writeRegister(PCA9538_CONFIG_REG, config);
}

void writeOutput(uint8_t pin, uint8_t value) {
  uint8_t output = readRegister(PCA9538_OUTPUT_REG);
  if (value == LOW) {
    output &= ~pin;
  } else {
    output |= pin;
  }
  writeRegister(PCA9538_OUTPUT_REG, output);
}
uint8_t readInput() {
  return readRegister(PCA9538_INPUT_REG);
}

uint8_t readRegister(uint8_t reg) {
  Wire.beginTransmission(PCA9538_ADDR);
  Wire.write(reg);
  Wire.endTransmission(false);
  Wire.requestFrom(PCA9538_ADDR, 1);
  return Wire.read();
}

void writeRegister(uint8_t reg, uint8_t value) {
  Wire.beginTransmission(PCA9538_ADDR);
  Wire.write(reg);
  Wire.write(value);
  Wire.endTransmission();
}

ModbusMaster node;
int LED1;
int LED2;
int LED3;
int LED4;

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

  Wire.begin(SDA, SCL);
  setPinMode(GPIO5, OUTPUT);
  setPinMode(GPIO6, OUTPUT);
  setPinMode(GPIO7, OUTPUT);
  setPinMode(GPIO8, OUTPUT);
 
  node.begin(5, Serial1);                           //Slave ID as 1
  node.preTransmission(preTransmission);
  node.postTransmission(postTransmission);
}
void loop()
{
  LED1 = 1;
  writeOutput(GPIO5, LED1);
  writeOutput(GPIO6, 0);
  writeOutput(GPIO7, 0);
  writeOutput(GPIO8, 0);

  uint8_t result;
  result = node.writeSingleCoil(0x00001, LED1);
  delay(5000);
  LED1 = 0;
  writeOutput(GPIO5, LED1);
  writeOutput(GPIO6, 0);
  writeOutput(GPIO7, 0);
  writeOutput(GPIO8, 0);

  result = node.writeSingleCoil(0x00001, LED1);
  delay(2000);

  LED2 = 1;
  writeOutput(GPIO5, 0);
  writeOutput(GPIO6, LED2);
  writeOutput(GPIO7, 0);
  writeOutput(GPIO8, 0);

  result = node.writeSingleCoil(0x00002, LED2);
  delay(5000);
  LED2 = 0;
  writeOutput(GPIO5, 0);
  writeOutput(GPIO6, LED2);
  writeOutput(GPIO7, 0);
  writeOutput(GPIO8, 0);

  result = node.writeSingleCoil(0x00002, LED2);
  delay(2000);

  LED3 = 1;
  writeOutput(GPIO5, 0);
  writeOutput(GPIO6, 0);
  writeOutput(GPIO7, LED3);
  writeOutput(GPIO8, 0);

  result = node.writeSingleCoil(0x00003, LED3);
  delay(5000);
  LED3 = 0;
  writeOutput(GPIO5, 0);
  writeOutput(GPIO6, 0);
  writeOutput(GPIO7, LED3);
  writeOutput(GPIO8, 0);

  result = node.writeSingleCoil(0x00003, LED3);
  delay(2000);

  LED4 = 1;
  writeOutput(GPIO5, 0);
  writeOutput(GPIO6, 0);
  writeOutput(GPIO7, 0);
  writeOutput(GPIO8, LED4);

  result = node.writeSingleCoil(0x00004, LED4);
  delay(5000);
  LED4 = 0;
  writeOutput(GPIO5, 0);
  writeOutput(GPIO6, 0);
  writeOutput(GPIO7, 0);
  writeOutput(GPIO8, LED4);

  result = node.writeSingleCoil(0x00004, LED4);
  delay(2000);
}