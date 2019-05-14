#include <stdio.h>

int checkPrime(int);

main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)

    int n, result;
    int true = 1;
    int false = 0;

    printf("Enter an integer to check whether it is prime or not:\n");
    scanf("%d", &n);

    result = checkPrime(n);

    if (result == 1)
        //printf("%d is prime.\n", n);
        printf("%d\n", true);
    else
        //printf("%d isn't prime.\n", n);
        printf("%d\n", false);

    return 0;
}

int checkPrime(int a)
{
    int c;

    for (c = 2; c <= a - 1; c++) {
        if (a % c == 0)
            return 0;
    }
    if (c == a)
        return 1;
}