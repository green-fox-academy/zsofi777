#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int *pointer;
    int *pointer2;
    int howMany;
    int sum = 0;

    printf("Enter a number!\n");
    scanf("%d", &howMany);

    pointer = (int *) malloc(howMany * sizeof(int));

    for (int i = 0; i < howMany; i++) {
        printf("Enter the %d. number:\n", i + 1);
        scanf("%d", &pointer[i]);
        //sum += pointer[i];
    }

    for (int j = 0; j < howMany; ++j) {
        sum += pointer[j];
    }

    pointer2 = (int *) malloc(sum * sizeof(int));

    for (int k = 0; k < sum; ++k) {
        pointer2[k] = k + 1;
        printf("%d\n", pointer2[k]);
    }

    free(pointer);
    pointer = NULL;
    free(pointer2);
    pointer2 = NULL;

    return 0;
}