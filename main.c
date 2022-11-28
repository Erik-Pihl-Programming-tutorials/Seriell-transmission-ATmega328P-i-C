/********************************************************************************
* main.c: Demonstration av seriell överföring för utskrift av data till en
*         seriell terminal.
********************************************************************************/
#include "serial.h"

/********************************************************************************
* main: Initierar seriell överföring av data med en baud rate på 9600 kbps. 
*       Sedan skrivs text signerade och osignerade heltal samt ett flyttal ut 
*       i terminalen.
********************************************************************************/
int main(void)
{
   serial_init(9600);

   serial_print_string("Hello from Microchip Studio to microcontroller ATmega328P!\n");

   serial_print_string("Integer: ");
   serial_print_integer(-3);
   serial_print_new_line();

   serial_print_string("Unsigned integer: ");
   serial_print_unsigned(16000000);
   serial_print_new_line();

   serial_print_string("Floating point number: ");
   serial_print_double(-3.467); 
   serial_print_new_line();

   return 0;
}

