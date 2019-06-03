#include <stdio.h>
#include "busz.h"
#include <string.h>

int main(int argc, const char * argv[]) {
    Bus bus1;
    Bus bus2;
    Bus bus3;

    strcpy(bus1.name, "bus1");
    strcpy(bus2.name, "bus2");
    strcpy(bus3.name, "bus3");
    bus1.numberOfSeats = 36;
    bus1.numberOfStandingPlaces = 147;
    bus2.numberOfSeats = 30;
    bus2.numberOfStandingPlaces = 150;
    bus3.numberOfSeats = 40;
    bus3.numberOfStandingPlaces = 160;
    getOnTheBus(bus1, 50);
    getOffTheBus(bus1, 20);
    Bus buses[] = {bus1, bus2, bus3};
    int sizeOfArray = sizeof(buses) / sizeof(buses[0]);
    printf("The bus with the largest capacity is: %s\n", busWithTheLargestCapacity(buses, sizeOfArray));
}