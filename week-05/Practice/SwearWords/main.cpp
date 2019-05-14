#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

std::string getFileTextWithoutSwearWords(std::string fileName, std::vector<std::string> swearWords);

void writeTextToFile(std::string fileName, std::string textToWrite);

bool isItInVector(std::string word, std::vector<std::string> swearWords);

std::string stringToLowerCase(std::string stringToLower);

std::string getStringWithoutSymbols(std::string stringToCheck);

int main()
{
    //VEKTORBA, AMIT KERESÜNK ÉSMAJD TÖRLÜNK
    std::vector<std::string> swearWords = {"fuck", "bloody", "cock", "shit", "fucker", "fuckstick", "asshole", "dick",
                                           "piss", "cunt"};
    //FILE = TEXT
    std::string fileName = "../content.txt";


    std::string wordsToWrite = getFileTextWithoutSwearWords(fileName, swearWords);
    writeTextToFile(fileName, wordsToWrite);

    return 0;
}

std::string getFileTextWithoutSwearWords(std::string fileName, std::vector<std::string> swearWords)
{
    //EREDMÉNY STRING
    std::string textWithoutSwearWords;
    //FILE = TEXT
    std::ifstream myFile;

    myFile.exceptions(std::ifstream::badbit); //VIGYÁZAT
    ////SZÁMLÁLÓ
    int count = 0;

    try {
        myFile.open(fileName); //VIGYÁZAT
        ////LINE
        std::string line;

        while (std::getline(myFile, line)) {
            std::istringstream ss(line);
            std::string word;
            while (std::getline(ss, word, ' ')) {
                if (!isItInVector(getStringWithoutSymbols(stringToLowerCase(word)), swearWords)) {
                    textWithoutSwearWords += word + " ";
                } else {
                    count++;
                }
            }
            textWithoutSwearWords += "\n";
        }

        myFile.close();

    } catch (std::fstream::failure &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << count << std::endl;

    return textWithoutSwearWords;
}

void writeTextToFile(std::string fileName, std::string textToWrite)
{

    std::ofstream myNewFile;
    myNewFile.exceptions(std::ofstream::failbit | std::ofstream::badbit);

    try {
        myNewFile.open(fileName, std::ios_base::out);
        myNewFile << textToWrite;
        myNewFile.close();
    } catch (std::ofstream::failure &e) {
        std::cerr << e.what() << std::endl;
    }
}

bool isItInVector(std::string word, std::vector<std::string> swearWords)
{
    for (int i = 0; i < swearWords.size(); ++i) {
        if (word == swearWords[i]) {
            return true;
        }
    }
    return false;
}

std::string stringToLowerCase(std::string stringToLower)
{
    std::string newString = "";

    for (int i = 0; i < stringToLower.size(); ++i) {
        newString += std::tolower(stringToLower[i]);
    }

    return newString;
}

std::string getStringWithoutSymbols(std::string stringToCheck)
{

    if (stringToCheck.back() == '.' || stringToCheck.back() == ',') {
        stringToCheck.pop_back();
        return stringToCheck;
    } else {
        return stringToCheck;
    }

}