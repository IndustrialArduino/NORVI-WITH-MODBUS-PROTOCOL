#include <Wire.h>
#include <SPI.h>
#include <Adafruit_ADS1X15.h>
#include <Adafruit_GFX.h>
#include <ModbusRTU.h>

#define SLAVE_ID 5
#define RXD 3
#define TXD 1
#define FC  4
ModbusRTU mb;
Adafruit_ADS1115 ads1;  
Adafruit_ADS1115 ads2;

void setup() {
  //Serial.begin(9600);
  Serial.begin(9600, SERIAL_8N1,RXD,TXD);
  mb.begin(&Serial, FC); // Use Serial for USB communication
  mb.setBaudrate(9600);
  //Serial.println("Modbus Initialized");
 
  Wire.begin(16, 17);
  ads1.begin(0x48);
  ads2.begin(0x49);
  //Serial.println("ADS Initialized");
  
  mb.slave(SLAVE_ID);

}

void loop() {
  int16_t adc0, adc1, adc2, adc3, adc4, adc5;
//  delay(2000);

  adc0 = ads1.readADC_SingleEnded(0);
  adc1 = ads1.readADC_SingleEnded(1);
  adc2 = ads1.readADC_SingleEnded(2);
  adc3 = ads1.readADC_SingleEnded(3);
  adc4 = ads2.readADC_SingleEnded(0);
  adc5 = ads2.readADC_SingleEnded(1);
    
//  Serial.print("Voltages\n");
//  Serial.print(" ");
//  Serial.println(adc0);
//  Serial.print(" ");
//  Serial.println(adc1);
//  Serial.print(" ");
//  Serial.println(adc2);
//  Serial.print(" ");
//  Serial.println(adc3);
//  Serial.print(" ");
//  Serial.println(adc4);
//  Serial.print(" ");
//  Serial.println(adc5);

  mb.addHreg(1);
  mb.Hreg(1,adc0);
  mb.addHreg(2);
  mb.Hreg(2,adc1);
  mb.addHreg(3);
  mb.Hreg(3,adc2);
  mb.addHreg(4);
  mb.Hreg(4,adc3);
  mb.addHreg(5);
  mb.Hreg(5,adc4);
  mb.addHreg(6);
  mb.Hreg(6,adc5);
   
  mb.task();
  yield();
}
