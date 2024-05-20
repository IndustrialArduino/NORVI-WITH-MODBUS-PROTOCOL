#include <WiFi.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include <ModbusMaster.h>

#define FC    22    //GPIO of the RS485 Flow control 
#define RX_PIN 25   //GPIO of the RS485 RX 
#define TX_PIN 26   //GPIO of the RS485 TX 

// WiFi credentials
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

// MQTT broker configuration
const char* mqtt_server = "YOUR_MQTT_BROKER_ADDRESS";
const int mqtt_port = 1884; //YOUR_MQTT_PORT
const char* mqtt_topic = "YOUR_MQTT_TOPIC";
const char* mqtt_username = "YOUR_MQTT_USERNAME";
const char* mqtt_password = "YOUR_MQTT_PASSWORD";

// MQTT client
WiFiClient espClient;
PubSubClient client(espClient);

ModbusMaster node;

void preTransmission()
{
  digitalWrite(FC, 1);
}

void postTransmission()
{
  digitalWrite(FC, 0);
}

void setup_wifi() {
  delay(10);
  // Connect to WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
      Serial.println("");
      Serial.print("Attempting MQTT connection...");
    // Attempt to connect
    if (client.connect("ESP32Client", mqtt_username, mqtt_password)) {
      Serial.println("connected");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void setup()
{
  Serial.begin(115200);
  setup_wifi();
  client.setServer(mqtt_server, mqtt_port);

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
  int ANIN1 = node.getResponseBuffer(0x00);
  int ANIN2 = node.getResponseBuffer(0x01);
  int ANIN3 = node.getResponseBuffer(0x02);

  Serial.print("\n");
  Serial.print(" ANIN1 : "); Serial.print(node.getResponseBuffer(0x00));
  Serial.print(" ANIN2 : "); Serial.print(node.getResponseBuffer(0x01));
  Serial.print(" ANIN3 : "); Serial.print(node.getResponseBuffer(0x02));
  Serial.print("\n");
  delay(500);

  uint8_t result[4];

  result[1] = node.readDiscreteInputs(0x10001, 1);
  int digitalInput1 = node.getResponseBuffer(result[1]);
  Serial.print("\n DIGI IN1 : "); Serial.print(node.getResponseBuffer(result[1]));

  result[2] = node.readDiscreteInputs(0x10002, 1);
  int digitalInput2 = node.getResponseBuffer(result[2]);
  Serial.print(" \n DIGI IN2 : "); Serial.print(node.getResponseBuffer(result[2]));

  result[3] = node.readDiscreteInputs(0x10003, 1);
  int digitalInput3 = node.getResponseBuffer(result[3]);
  Serial.print(" \n DIGI IN3 : "); Serial.print(node.getResponseBuffer(result[3]));

  result[4] = node.readDiscreteInputs(0x10004, 1);
  int digitalInput4 = node.getResponseBuffer(result[4]);
  Serial.print(" \n DIGI IN4 : "); Serial.print(node.getResponseBuffer(result[4]));
    
  if (!client.connected()) {
    reconnect();
  }
  client.loop();
  
  // Read digital inputs from GPIO pins

  DynamicJsonDocument doc(256);
  doc["AN1"] = ANIN1;
  doc["AN2"] = ANIN2;
  doc["AN3"] = ANIN3;
  doc["input1"] = digitalInput1;
  doc["input2"] = digitalInput2;
  doc["input3"] = digitalInput3;
  doc["input4"] = digitalInput4;

  String payload;
  serializeJson(doc, payload);

  // Publish payload to MQTT topic
  client.publish(mqtt_topic, payload.c_str());

  delay(10000); // Adjust the delay according to your needs
}                                                            
