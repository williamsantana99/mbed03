#include "mbed.h"

AnalogOut  aout(PA_4);
DigitalOut dout(LED1);

int main(void)
{
   while (1) {      
      for (float i = 0.0f; i < 1.0f; i += 0.1f) {
            aout = i;
            printf("aout = %f volts\n", aout.read() * 3.3f);            
            dout = (aout > 0.5f) ? 1 : 0;
            ThisThread::sleep_for(1s);
      }
   }
}