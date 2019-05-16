#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits


int main()
{
    int *pointer = NULL;
    pointer = (int *) malloc(10 * sizeof(int));
    //pointer[0] = 33;
    //pointer[1] = 56;
    //pointer[2] = 2;
    //pointer[3] = 178;
    //pointer[4] = 19;

    if (!(int *) malloc(10 * sizeof(int))) {
        printf("%s\n", "Error occurred while allocating memory");
    } else {
        for (int i = 0; i < 5; ++i) {
            pointer[i] = i;
        }
    }

    for (int j = 0; j < 10; ++j) {
        printf("%d\n", pointer[j]);
    }

    free(pointer);
    pointer = NULL;

    return 0;
}