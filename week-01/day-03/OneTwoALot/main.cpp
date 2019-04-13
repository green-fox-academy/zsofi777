#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that reads a number form the standard input,
    // If the number is zero or smaller it should print: Not enough
    // If the number is one it should print: One
    // If the number is two it should print: Two
    // If the number is more than two it should print: A lot


    int Num = 30;

    if (Num <= 0) {
        std::cout << "Not enough\n";
    } else if (Num == 1) {
        std::cout << "One\n";
    } else if (Num == 2) {
        std::cout << "Two\n";
    } else {
        std::cout << "A lot\n";
    }

    return 0;
}
