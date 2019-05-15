#include <stdio.h>
#include <string.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

typedef struct sandwich {
    char name[50];
    float price;
    float weight;
    //int amount;
} sandwich_t;

//below not sandwich hanem sandwich1
float priceOfOrder(sandwich_t sandwich1, int amount);

int main()
{
    sandwich_t sandwich1;

    strcpy(sandwich1.name, "ham");
    sandwich1.price = 16.25;
    sandwich1.weight = 30.5;
    //sandwich1.amount = 2;

    //priceOfOrder(&sandwich1, amount);
    //float order = priceOfOrder(sandwich1, amount);
    //printf("%f", priceOfOrder);
    printf("Price of your order: %.2f\n", priceOfOrder(sandwich1, 2));

    return 0;
}

float priceOfOrder(sandwich_t sandwich1, int amount)
{
    //float a = (float) price * (float) amount
    return sandwich1.price * amount;
}