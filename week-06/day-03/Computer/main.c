#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer computer1;

    computer1.cpu_speed_GHz = 3.46;
    computer1.ram_size_GB = 4;
    computer1.bits = 32;

    printf("computer1 cpu speed in GHz: %.2f\n", computer1.cpu_speed_GHz);
    printf("computer1 ram size in GB: %d\n", computer1.ram_size_GB);
    printf("computer1 bits: %d\n", computer1.bits);

    Notebook notebook1;

    notebook1.cpu_speed_GHz = 2.6;
    notebook1.ram_size_GB = 16;
    notebook1.bits = 64;

    printf("notebook1 cpu speed in GHz: %.1f\n", notebook1.cpu_speed_GHz);
    printf("notebook1 ram size in GB: %d\n", notebook1.ram_size_GB);
    printf("notebook1 bits: %d\n", notebook1.bits);

    return 0;
}