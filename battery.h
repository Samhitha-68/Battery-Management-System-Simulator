#ifndef BATTERY_H
#define BATTERY_H

typedef struct{
    int soc;             //State of charge
    float voltage;
    float current;
    float temperature;
    int isCharging;
    int soh;            //State of health
}Battery;

void displayBattery(Battery battery);

#endif
