#include<stdio.h>
#include "battery.h"
#include <string.h>

int main()
{
    Battery battery;
    int choice;

    battery.soc = 80;
    battery.voltage = 4.2;
    battery.current = 0.0;
    battery.temperature = 30.0;
    battery.isCharging=0;
    battery.soh = 100;
    battery.chargeCycles = 0;
    strcpy(battery.lastError, "No Error");

while(1)
{
    printf("\n=========BMS MENU=========\n");
    printf("1.Charge Battery\n");
    printf("2.Discharge Battery\n");
    printf("3.View Battery Status\n");
    printf("4.Reset Battery\n");
    printf("5.Exit\n");
    printf("Enter your choice : ");

    scanf("%d",&choice);

    if(choice == 1)
    {
        chargeBattery(&battery);
        displayBattery(battery);
    }

    else if(choice == 2)
    {
        dischargeBattery(&battery);
        displayBattery(battery);
    }

    else if(choice == 3)
    {
        printf("\nCurrent Battery Status: \n");
        displayBattery(battery);
    }

    else if(choice == 4)z
    {
        resetBattery(&battery);
        displayBattery(battery);
    }

    else if(choice == 5)
    {
        printf("\nExiting Battery Management System...\n");
        break;
    }

    else
    {
        printf("\nInvalid Choice! Please try again.\n");
    }
}

    return 0;
}