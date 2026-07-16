#include <stdio.h>
#include "battery.h"
#include <string.h>

void displayBattery(Battery battery)
{
    printf("\n=========Battery Management System========\n");
    printf("State Of Charge(SoC) : %d%%\n"     , battery.soc);
    printf("Voltage              : %.2f V\n"   , battery.voltage);
    printf("Current              : %.2f A\n"   , battery.current);
    printf("Temperature          : %.2f C\n"   , battery.temperature);
    printf("Charging Status      : %s\n"       , battery.isCharging ? "ON" : "OFF");
    printf("State Of Health(SoH) : %d%%\n"     , battery.soh);
    printf("Charge Cycles        : %d\n"       , battery.chargeCycles);
    printf("Last Error           : %s\n"       , battery.lastError);
    printf("============================================\n");
}

void chargeBattery(Battery *battery)
{
    if(battery->soc >= 100)
    {
        battery->soc = 100;
        battery->isCharging = 0;
        strcpy(battery->lastError,"Already Fully Charged");

        printf("\nBattery is already Fully Charged!\n");
        return;
    }

    battery->isCharging = 1;
    strcpy(battery->lastError,"No Error");

    battery->soc++;
    battery->voltage += 0.01;

    if(battery->soc >= 100)
    {
        battery->soc = 100;
        battery->voltage = 4.2;

        printf("\nBattery Fully Charged!\n");
        printf("Charging Stopped\n");

        battery->chargeCycles++;
        if(battery->chargeCycles % 50 == 0 && battery->soh > 80)
        {
            battery->soh--;
        }

        battery->isCharging = 0;
        return;
    }
    battery->temperature += 1;

    printf("\nCharging....\n");

    if(battery->temperature >= 45)
    {
        battery->isCharging = 0;
        strcpy(battery->lastError, "Over Temperature");

        printf("\nWARNING: Battery Over Temperature! Charging Stopped\n");
        return;
    }
}

void dischargeBattery(Battery *battery)
{
    if(battery->soc <= 0)
    {
        battery->soc = 0;
        strcpy(battery->lastError,"Battery Empty");

        printf("\nBattery is Empty!\n");
        return;
    }
    battery->isCharging = 0;
    strcpy(battery->lastError,"No Error");
    battery->soc--;

    if(battery->soc <= 0)
    {
        battery->soc = 0;
        battery->voltage = 3.0;
        strcpy(battery->lastError,"Battery Empty");

        printf("\nBattery Empty!\n");
        printf("Please Recharge the Battery\n");

        return;
    }
    if(battery->soc <= 5)
    {
        strcpy(battery->lastError, "Critical Battery");
        printf("CRITICAL WARNING: Charge Immediately!\n");
    }
    else if(battery->soc <= 20)
    {
        strcpy(battery->lastError, "Low Battery");
        printf("\nWARNING: Battery Low! Charging Required\n");
    }
    battery->voltage -= 0.01;
    if(battery->temperature > 25)
    {
    battery->temperature -=1;
    }

    printf("\nDischarging....\n");

}

void resetBattery(Battery *battery)
{
    battery->soc = 80;
    battery->voltage = 4.2;
    battery->current = 0.0;
    battery->temperature = 30.0;
    battery->isCharging = 0;
    battery->soh = 100;
    battery->chargeCycles = 0;

    strcpy(battery->lastError,"No Error");
    printf("\nBattery Reset Successfully!\n");
}