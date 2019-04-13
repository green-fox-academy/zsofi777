#include <iostream>

double milesToKm (int km);

int main(int argc, char *args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it


    int km;

    std::cout << "Please enter a number";
    std::cin >> km;
    std::cout << milesToKm (km)<< std::endl;


    return 0;
}


double milesToKm (int km) {
    double miles = km * 0.68;



    return miles;
}
