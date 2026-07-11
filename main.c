#include<stdio.h>
#include "battery.h"

int main()
{
    Battery battery;

    battery.soc = 80;
    battery.voltage = 3.9;
    battery.current = 0.0;
    battery.temperature = 30.0;
    battery.isCharging=0;
    battery.soh = 100;

    displayBattery(battery);

    return 0;
}