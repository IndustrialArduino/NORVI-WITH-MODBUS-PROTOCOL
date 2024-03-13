# NORVI-WITH-MODBUS-PROTOCOL
Process of MODBUS communication through NORVI devices. 

NORVI devices are cutting-edge technological solutions designed to enhance efficiency, connectivity, and control in various industries. Leveraging advanced IoT technology, NORVI devices offer seamless integration with existing infrastructure, providing real-time monitoring, analytics, and automation capabilities. 


MODBUS Protocol
MODBUS is a serial communication protocol developed by Modicon and published by Modicon in 1979 for use with its programmable logic controllers (PLCs). In simple terms, it is a method used for transmitting information over serial lines between electronic devices. The device requesting the information is called the MODBUS Master(Client) and the devices supplying information are MODBUS Slave (Servers). 

Several versions of the MODBUS protocol exist for the serial port and Ethernet and the most common are:
– MODBUS RTU
– MODBUS ASCII
– MODBUS TCP
– MODBUS Plus

Check this link to understand more about the MODBUS protocol.
https://simplymodbus.ca/FAQ.htm


RTU (RS485/RS232) Mode
MODBUS RTU, specifically tailored for serial communication, utilizes interfaces such as RS-232 or RS-485. When controllers are set up to communicate on a MODBUS network using RTU (Remote Terminal Unit) mode, each 8–bit byte in a message contains two 4–bit hexadecimal characters. The main advantage of this mode is that its greater character density allows better data throughput than ASCII for the same baud rate. Each message must be transmitted in a continuous stream. 


RS485 communication in the NORVI devices.
MODBUS functionality is available across all NORVI devices supporting RS485 connectivity. NORVI devices are equipped with an integrated MAX485 driver, featuring RX, TX, and FC pins seamlessly linked to the corresponding GPIOs. Within these devices, the opposing terminals of the MAX485 driver are denoted as A&B.


For specific RS485 GPIO allocations of the NORVI devices, refer to the NORVI RS485 GPIO Allocation.
https://norvi.lk/docs/norvi-rs485-gpio-allocation-table/


However direct use of serial print functions for communication is not possible for the NORVI-IIOT-AE01 and NORVI-IIOT-AE02 product ranges because RS485 TX and RX are shared with the USB RX and TX pins. As a solution for such situations, we can display the result in the OLED display as described in the troubleshooting sections in the documents.

