#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string todoText = " - Buy milk\n";

    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indentation

    todoText.insert (0, "My todo:\n");
    todoText.insert (20, "\n - Download games\n");
    todoText.insert (38, "\n     - Diablo\n");

    std::cout << todoText << std::endl;

    // Expected output:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo


    return 0;
}