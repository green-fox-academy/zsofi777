#include <iostream>

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int a;
    int array [5];


    std::cout << "Give me a number!" << std::endl;
    std::cin >> a;


    for (int i = 0; i <a; ++i) {
        std::cin >> array [i];
        std::cout << array +i << std::endl;
    }


    return 0;
}