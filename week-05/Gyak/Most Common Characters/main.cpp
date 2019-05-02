#include <iostream>
#include <exception>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <algorithm>

void mostCommonCharacters(std::string path);

std::map<char, int> createKey(std::string);

void fillMapWithValues(std::map<char, int> &onlyKeys, std::string line);

std::vector<int> orderValuesInVector(std::map<char, int> everyCharacter);

void printMaxTwo(std::map<char, int> everyCharacter, std::vector<int> orderedValues);

int main()
{
    mostCommonCharacters("../../countchar.txt");
    return 0;
}

void mostCommonCharacters(std::string path)
{
    std::map<char, int> everyCharacter;
    std::ifstream myFile;
    try {
        myFile.open(path);
        if (myFile.is_open() == 0) {
            throw std::string("File does not exist!\n");
        }

        std::string line;
        while (getline(myFile, line)) {
            std::map<char, int> subresult = createKey(line);
            everyCharacter.insert(subresult.begin(), subresult.end());
            fillMapWithValues(everyCharacter, line);
        }

        std::vector<int> values = orderValuesInVector(everyCharacter);
        printMaxTwo(everyCharacter, values);
    }
    catch (std::string &e) {
        std::cerr << e;
    }
}

std::map<char, int> createKey(std::string line)
{
    std::map<char, int> result;
    int startingCount = 0;

    for (int i = 0; i < line.size(); ++i) {
        if (result.count(line[i]) == 0) {
            result.insert(std::make_pair(line[i], startingCount));
        }
    }
    return result;
}

void fillMapWithValues(std::map<char, int> &onlyKeys, std::string line)
{
    std::map<char, int>::iterator it;

    for (int j = 0; j < line.size(); ++j) {
        it = onlyKeys.find(line[j]);
        it->second++;
    }
}

std::vector<int> orderValuesInVector(std::map<char, int> everyCharacter)
{
    std::vector<int> values;
    std::map<char, int>::iterator it = everyCharacter.begin();

    for (; it != everyCharacter.end(); ++it) {
        values.push_back(it->second);
    }

    std::sort(values.rbegin(), values.rend());
    return values;
}

void printMaxTwo(std::map<char, int> everyCharacter, std::vector<int> orderedValues)
{
    std::map<char, int>::iterator it;
    for (int i = 0; i < 2; ++i) {
        for (it = everyCharacter.begin(); it != everyCharacter.end(); ++it) {
            if (it->second == orderedValues.at(i)) {
                std::cout << it->first << ": " << it->second << std::endl;
            }
        }
    }
}









