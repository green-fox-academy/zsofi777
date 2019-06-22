#include <stdio.h>

int main()
{
    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22

    // Print the result of 13 substracted from 22

    // Print the result of 22 multiplied by 13

    // Print the result of 22 divided by 13 (as a decimal fraction)

    // Print the reminder of 22 divided by 13

    // Store the results in variables and use them when you display the result


    int add;
    int a = 22, b = 13;
    add = (int) a + (int) b;

    int substract;
    substract = (int) a - (int) b;

    int multiply;
    multiply = (int) a * (int) b;

    int divide;
    divide = (int) a / (int) b;

    float divideFraction;
    float c = 22, d = 13;
    divideFraction = (float) c / (float) d;

    printf("%d\n%d\n%d\n%d\n%f", add, substract, multiply, divide, divideFraction);

    return 0;
}