#include "mbed.h"

DigitalOut myled(LED1);

int main() {
    while(1) {
        myled = 1;
        wait(0.2);
        myled = 0;
        wait(0.2);
    }
}

reset

adding new main feature for the buggy

bluetooth feature implementing

local commit test

bluetooth feature completed
