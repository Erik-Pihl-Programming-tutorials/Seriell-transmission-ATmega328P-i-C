# Seriell transmission - ATmega328P
Implementering av seriell överföring/transmission för utskrift av text, enskilda tecken 
(osignerade och signerade) heltal samt flyttal i seriell terminal via makrodator ATmega328P. 
USART används för asynkron överföring av åtta bitar i taget med en stoppbit.

Filen "serial.h" innehåller inkluderingsdirektiv samt funktionsdeklarationer för implementering av seriell överföring.

Filen "serial.c" innehåller motsvarande funktionsdefinitioner.

I filen "main.c" skrivs text, signerade och osignerade heltal samt flyttal ut i den seriella terminalen via
transmission med USART. Flyttalet avrundas till två decimaler.