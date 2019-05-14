#include <stdio.h>

int main()
{
// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

    float pi = 3.14;
    int radius;
    float areaOfCircle;

    printf("Enter the Radius of Circle:\n");
    scanf("%d", &radius);

    areaOfCircle = radius * radius * pi;
    printf("Area of Circle: %f", areaOfCircle);

    return(0);
}