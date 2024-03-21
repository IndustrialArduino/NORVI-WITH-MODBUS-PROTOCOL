#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include <ModbusRTU.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define SLAVE_ID 5
#define RXD 3
#define TXD 1
#define FC  4
//
#define INPUT1 18
#define INPUT2 39
#define INPUT3 34
#define INPUT4 35

ModbusRTU mb;

void setup() {
  //Serial.begin(9600);
  Serial.begin(9600, SERIAL_8N1,RXD,TXD);
  mb.begin(&Serial1, FC); // Use Serial for USB communication
  mb.setBaudrate(9600);
  Serial.println("Modbus Initialized");
  
  //Initialize Digital Inputs
  pinMode(INPUT1, INPUT);
  pinMode(INPUT2, INPUT);
  pinMode(INPUT3, INPUT);
  pinMode(INPUT4, INPUT);
  
  Wire.begin(16, 17);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();

}

void loop() {

  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.print("INP 1- "); display.print(digitalRead(INPUT1));
  display.setCursor(70, 0);
  display.print("INP 2- "); display.println(digitalRead(INPUT2));
  display.setCursor(0, 14);
  display.print("INP 3- "); display.print(digitalRead(INPUT3));
  display.setCursor(70, 14);
  display.print("INP 4- "); display.println(digitalRead(INPUT4));

  mb.slave(SLAVE_ID);
  mb.addIsts(1);
  mb.Ists(1,digitalRead(INPUT1));
  mb.addIsts(2);
  mb.Ists(2,digitalRead(INPUT2));
  mb.addIsts(3);
  mb.Ists(3,digitalRead(INPUT3));
  mb.addIsts(4);
  mb.Ists(4,digitalRead(INPUT4));

  delay(2000);
  mb.task();
  yield();
}
