#include <iostream>
#include <string>




void greet(std::string);


int main(int argc, char* args[])

{


    std::string al = "Greenfox";
    greet(al);

    return 0;
}

    void greet (std::string al) {
        std::cout << "Greetings, dear "  << al << std::endl;
    }
    // - Create a string variable named `al` and assign the value `Greenfox` to it
    // - Create a function called `greet` that greets it's input parameter
    // - Greeting is printing e.g. `Greetings dear, Greenfox`
    // - Greet `al`
