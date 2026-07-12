//Updated on 12 July 2026
#include<stdio.h>
#include "battery.h"

int main()
{
    Battery battery;
    int choice;

    battery.soc = 80;
    battery.voltage = 3.9;
    battery.current = 0.0;
    battery.temperature = 30.0;
    battery.isCharging=0;
    battery.soh = 100;

while(1)
{
    printf("\n=========BMS MENU=========\n");
    printf("1.Charge Battery\n");
    printf("2.Discharge Battery\n");
    printf("3.View Battery Status\n");
    printf("4.Exit\n");
    printf("Enter your choice : ");

    scanf("%d",&choice);

    if(choice == 1)
    {
        chargeBattery(&battery);
        displayBattery(battery);

        if(battery.soc < 20)
        {
            printf("\n Battery Low! Charging Required.\n");
        }
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

    else if(choice == 4)
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