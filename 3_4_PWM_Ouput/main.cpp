#include "mbed.h"

PwmOut led(LED1);
int main()

{

   led.period_ms(4000);         

   led.write(0.50f);         
   
   while (1);

}