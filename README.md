# USB_TO_TTL_CONVERTER_ATtiny84

Create USB-to-TTL serial converter in C++ language for the microcontroller ATtiny84.
•	Apply only an American language.
•	Apply only a Latin alphabet.
•	Caution: prohibited Cyrillic.

PB0
PB1
PB3
PB2
PA7 = USB_PLUS_D_INPUT; //It connects to the computer interface
PA6 = USB_MINUS_D_INPUT; //It connects to the computer interface
PA0 = TTL_RXD; 
PA1 = TTL_TXD; 
PA2 = RESET; 
PA3 = USB_MINUS_D_OUTPUT; //It connects to the computer interface
PA4 = USB_PLUS_D_OUTPUT; //It connects to the computer interface

USB_TO_TTL_CONVERTER.c
USB_TO_TTL_CONVERTER.bin
USB_TO_TTL_CONVERTER.hex
USB_TO_TTL_CONVERTER.sys driver
