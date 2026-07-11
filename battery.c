#include <stdio.h>
#include "battery.h"

void displayBattery(Battery battery)
{
    printf("\n=========Battery Management System========\n");
    printf("State Of Charge(SoC) : %d%%\n "    , battery.soc);
    printf("Voltage              : %.2f V\n "  , battery.voltage);
    printf("Current              : %.2f A\n "  , battery.current);
    printf("Temperature          : %.2f *C\n " , battery.temperature);
    printf("Charging Status      : %s\n "      , battery.isCharging ? "ON" : "OFF");
    printf("State Of Health(SoH) : %d%%\n "    , battery.soh);
    printf("============================================\n");
}