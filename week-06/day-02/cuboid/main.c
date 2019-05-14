#include <stdio.h>

int main()
{
// Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000

    double x, y, z;
    double surfaceArea;
    double volume;

    printf("Add first side of cuboid: \n");
    scanf("%lf", &x);
    printf("Add second side of cuboid: \n");
    scanf("%lf", &y);
    printf("Add third side of cuboid: \n");
    scanf("%lf", &z);

    volume = x * y * z;
    printf("Volume: %lf\n", volume);

    surfaceArea = (2 * (x * y)) + (2 * (x * z)) + (2 * (y * z));
    printf("Surface Area: %lf", surfaceArea);

    return 0;
}