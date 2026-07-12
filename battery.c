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

void chargeBattery(Battery *battery)
{
    if(battery->soc >= 100)
    {
        battery->soc=100;
        battery->isCharging=0;

        printf("\nBattery is already Fully Charged!\n");
        return;
    }

    battery->isCharging=1;
    battery->soc++;
    battery->voltage+=0.01;

    printf("\nCharging....\n");

    if(battery->soc >= 100)
    {
        battery->soc = 100;
        battery->isCharging=0;

        printf("Battery Fully Charged!\n");
        printf("Charging Stopped.\n");
    }
}

void dischargeBattery(Battery *battery)
{
    if(battery->soc <=0)
    {
        battery->soc =0;
        printf("\nBattery is Empty!\n");
        return;
    }

    battery->isCharging=0;
    battery->soc--;
    battery->voltage-=0.01;

    printf("\nDischarging....\n");

    if(battery->soc < 20)
    {
        printf("Battery Low! Charging Required.\n");
    }

    if(battery->soc <=5)
    {
        printf("Critical Battery Level!\n");
    }
}