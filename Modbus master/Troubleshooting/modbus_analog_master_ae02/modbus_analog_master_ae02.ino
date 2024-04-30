#include <Wire.h>
#include <ModbusRTU.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define SLAVE_ID 5
#define FIRST_HREG 2
#define HREG_COUNT 7
#define FC 4

ModbusRTU mb;

bool cb(Modbus::ResultCode event, uint16_t transactionId, void* data) {
  if (event != Modbus::EX_SUCCESS) {
  }
  return true;
}

void setup() {
  Serial.begin(9600);
  mb.begin(&Serial, FC);
  digitalWrite(FC, LOW);
  mb.master();
  Wire.begin(16, 17);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();
}

void loop() {
  uint16_t res[HREG_COUNT];
  if (!mb.slave()) {
    mb.readHreg(SLAVE_ID, FIRST_HREG, res, HREG_COUNT, cb);
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setTextSize(1);
    display.setCursor(0, 0);
    display.print("INP 1- "); display.print(res[0]);
    display.setCursor(70, 0);
    display.print("INP 2- "); display.print(res[1]);
    display.setCursor(0, 14);
    display.print("INP 3- "); display.print(res[2]);
    display.setCursor(70, 14);
    display.print("INP 4- "); display.print(res[3]);
    display.setCursor(0, 30);
    display.print("INP 5- "); display.print(res[4]);
    display.setCursor(70, 30);
    display.print("INP 6- "); display.print(res[5]);
    display.setCursor(0, 48);
    display.print("INP 7- "); display.print(res[6]);
    display.setCursor(70, 48);
    display.print("INP 8- "); display.print(res[7]);
    display.display();
  }

  delay(10000);
  mb.task();
  yield();
}
