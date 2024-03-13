RS485 Check

Before uploading the MODBUS code, RS485 two ways can be checked by setting the FC pin high and low. 
This test program sets up communication between two serial ports, the hardware serial port and a software serial port. 



Sharing RX and TX with USB 

Utilize the NORVI-IIOT-AE01 and NORVI-IIOT-AE02 product ranges RS485 communication where the TX (Transmit) and RX (Receive) pins are shared with the USB RX and TX pins. 
This means that the same physical pins are used for both serial communication with a computer via USB and RS485 communication. 

As a result, direct use of serial print functions for communication is not possible when connected to such devices. 
An alternative solution would be to output the result to an OLED display, providing visual feedback on the data.


For specific RS485 GPIO allocations for NORVI devices, refer to the NORVI RS485 GPIO Allocation.
https://norvi.lk/docs/norvi-rs485-gpio-allocation-table/
