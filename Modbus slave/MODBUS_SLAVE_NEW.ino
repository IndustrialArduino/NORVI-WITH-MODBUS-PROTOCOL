#include <Wire.h>
#include <SPI.h>
#include <Adafruit_ADS1X15.h>

#include <ModbusRTU.h>

#define SLAVE_ID 5
#define RXD 33
#define TXD 2
#define FC  4

#define INPUT1 18
#define INPUT2 34
#define INPUT3 35
#define INPUT4 19

#define OUTPUT1 26
#define OUTPUT2 27

ModbusRTU mb;
Adafruit_ADS1115 ads1;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600, SERIAL_8N1, RXD, TXD);
  mb.begin(&Serial1, FC); // Use Serial for USB communication
  mb.setBaudrate(9600);
  Serial.println("Modbus Initialized");

  Wire.begin(16, 17);
  ads1.begin();
  Serial.println("ADS Initialized");

  pinMode(INPUT1, INPUT);
  pinMode(INPUT2, INPUT);
  pinMode(INPUT3, INPUT);
  pinMode(INPUT4, INPUT);
  
  pinMode(OUTPUT1, OUTPUT);
  pinMode(OUTPUT2, OUTPUT);
}

void loop() {
  int16_t adc0, adc1, adc2, adc3;

  Serial.println("\nInputs:");
  Serial.print("Input 1: ");
  Serial.println(digitalRead(INPUT1));
  Serial.print("Input 2: ");
  Serial.println(digitalRead(INPUT2));
  Serial.print("Input 3: ");
  Serial.println(digitalRead(INPUT3));
  Serial.print("Input 4: ");
  Serial.println(digitalRead(INPUT4));
  
  Serial.print("\nTransistor outs\n");
  Serial.print(" ");
  Serial.println(digitalRead(OUTPUT1));
  Serial.print(" ");
  Serial.println(digitalRead(OUTPUT2));
  
  delay(1000);

  adc0 = ads1.readADC_SingleEnded(0);
  adc1 = ads1.readADC_SingleEnded(1);
  adc2 = ads1.readADC_SingleEnded(2);
  adc3 = ads1.readADC_SingleEnded(3);

  Serial.print("\nVoltages\n");
  Serial.print(" ");
  Serial.println(adc0);
  Serial.print(" ");
  Serial.println(adc1);
  Serial.print(" ");
  Serial.println(adc2);
  Serial.print(" ");
  Serial.println(adc3);

  mb.slave(SLAVE_ID);
  mb.addIsts(1);
  mb.Ists(1, digitalRead(INPUT1));
  mb.addIsts(2);
  mb.Ists(2, digitalRead(INPUT2));
  mb.addIsts(3);
  mb.Ists(3, digitalRead(INPUT3));
  mb.addIsts(4);
  mb.Ists(4, digitalRead(INPUT4));

  delay(100);

  mb.slave(SLAVE_ID);
  mb.addCoil(1);
  mb.Coil(1);
  mb.addCoil(2);
  mb.Coil(2);

  if (mb.Coil(1) == 1)
  {
    digitalWrite(26, HIGH);
  }
  else
  { digitalWrite(26, LOW);
  }

  if (mb.Coil(2) == 1)
  {
    digitalWrite(27, HIGH);
  }
  else
  { digitalWrite(27, LOW);
  }

  delay(100);

  mb.addHreg(1);
  mb.Hreg(1, adc0);
  mb.addHreg(2);
  mb.Hreg(2, adc1);
  mb.addHreg(3);
  mb.Hreg(3, adc2);
  mb.addHreg(4);
  mb.Hreg(4, adc3);

  delay(100);

  mb.task();
  yield();
}
