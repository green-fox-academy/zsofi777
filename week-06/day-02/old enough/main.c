#include <stdio.h>

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary

    int age;

    printf("How old are you?\n");

    scanf("%d", &age);
    if (age > 18) {
        printf("You are old enough to buy yourself alcohol in Hungary\n");
    }
    if (age < 18) {
        printf("You are not old enough to buy yourself alcohol in Hungary\n");
    }

    return 0;

}