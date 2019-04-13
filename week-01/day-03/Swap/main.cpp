#include <iostream>

void swap (int a, int b);

int main(int argc, char* args[]) {

    // Swap the values of the variables

    int a = 123;
    int b = 526;
    int c;

    a = b;
    b


    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << "Before swapping." << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::swap(a, b);

    std::cout << "After swapping." << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}