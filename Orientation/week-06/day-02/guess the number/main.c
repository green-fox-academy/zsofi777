#include <stdio.h>

int main()
{
// Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8

    int number = 0;
    int counter = 0;

    printf("Guess the number!\n");

    while (number != 8) {
        scanf("%d", &number);
        if (number > 8) {
            counter++;
            printf("he stored number is lower\n");
        }
        if (number < 8) {
            counter++;
            printf("The stored number is higher\n");
        }
        if (number == 8) {
            printf("You found the number\n");
        }
    }
    return 0;
}