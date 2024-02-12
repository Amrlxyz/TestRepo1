#include "mbed.h"

// set up the HM10 Serial connection
Serial hm10(PA_11, PA_12); //TX, RX
Serial pc(USBTX, USBRX);


int main()
{
    // char buffer[20];
    int counter = 0;
    pc.baud(9600);
    hm10.baud(9600); //make sure the baud rate is 9600
    while (!hm10.writeable()) {}

    while(1)
    {
        // counter++;
        // pc.printf("%d \n", counter);
        
        // if(hm10.readable())
        // {  
        //     pc.putc(hm10.getc());
        // }

        while(pc.readable())
        {  
            pc.putc(pc.getc());        
        }

        wait(0.01);
    }
}