#ifndef UNTITLED_BUSZ_H
#define UNTITLED_BUSZ_H

#include <stdio.h>

typedef struct {
    char name[256];
    int numberOfSeats;
    int numberOfStandingPlaces;
    int capacity;
} Bus;

void getOnTheBus (Bus bus, int nrOfNewPassengers);
void getOffTheBus (Bus bus, int nrOfPassengersGettingOff);
char* busWithTheLargestCapacity (Bus* buses, int arraySize);

#endif //UNTITLED_BUSZ_H
