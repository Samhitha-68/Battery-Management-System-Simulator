#include <stdio.h>
#include "battery.h"

void displayBattery(Battery battery)
{
    printf("\n=========Battery Management System========\n");
    printf("State Of Charge(SoC) : %d%%\n"     , battery.soc);
    printf("Voltage              : %.2f V\n"   , battery.voltage);
    printf("Current              : %.2f A\n"   , battery.current);
    printf("Temperature          : %.2f *C\n"  , battery.temperature);
    printf("Charging Status      : %s\n"       , battery.isCharging ? "ON" : "OFF");
    printf("State Of Health(SoH) : %d%%\n"     , battery.soh);
    printf("============================================\n");
}

void chargeBattery(Battery *battery)
{
    if(battery->soc >= 100)
    {
        battery->soc = 100;
        battery->isCharging = 0;

        printf("\nBattery is already Fully Charged!\n");
        return;
    }

    battery->isCharging = 1;
    battery->soc++;
    battery->voltage += 0.01;

    if(battery->soc >= 100)
    {
        battery->soc = 100;
        battery->voltage = 4.2;

        printf("\nBattery Fully Charged!\n");
        printf("Charging Stopped\n");

        battery->isCharging = 0;
        return;
    }
    battery->temperature += 1;

    printf("\nCharging....\n");

    if(battery->temperature >= 45)
    {
        battery->isCharging = 0;
        printf("\nWARNING: Battery Over Temperature! Charging Stopped\n");
        return;
    }
}

void dischargeBattery(Battery *battery)
{
    if(battery->soc <= 0)
    {
        battery->soc = 0;
        printf("\nBattery is Empty!\n");
        return;
    }
    battery->isCharging = 0;
    battery->soc--;

    if(battery->soc <= 0)
    {
        battery->soc = 0;
        battery->voltage = 3.0;

        printf("\nBattery Empty!\n");
        printf("Please Recharge the Battery\n");

        return;
    }
    if(battery->soc <= 20)
    {
        printf("\nWARNING: Battery Low! Charging Required\n");
    }
    if(battery->soc <= 5)
    {
        printf("CRITICAL WARNING: Charge Immediately!\n");
    }
    battery->voltage -= 0.01;
    if(battery->temperature > 25)
    {
    battery->temperature --;
    }

    printf("\nDischarging....\n");

}