#ifndef BATTERY_H
#define BATTERY_H

typedef struct{
    int soc;             //State of charge
    float voltage;
    float current;
    float temperature;
    int isCharging;
    int soh;            //State of health
    int chargeCycles;
    char lastError[50];
}Battery;

void displayBattery(Battery battery);
void chargeBattery(Battery *battery);
void dischargeBattery(Battery *battery);
void resetBattery(Battery *battery);

#endif
