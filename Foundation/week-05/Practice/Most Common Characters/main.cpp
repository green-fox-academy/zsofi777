#include <iostream>
#include <map>
#include <fstream>

char printResult(std::string path);

std::map<char, int> parseFile(std::string path);

int main()
{
    char c = printResult("countchar.txt");
    std::cout << c;
    return 0;
}

std::map<char, int> parseFile(std::string path)
{
    std::map<char, int> data;
    std::ifstream inputFile;
    inputFile.exceptions(std::ifstream::badbit);

    inputFile.open(path);

    if (!inputFile.is_open())
        throw std::runtime_error("The file is not open!");

    std::string line;
    while (std::getline(inputFile, line)) {
        for (int i = 0; i < line.size(); ++i) {
            data[line[i]]++;
        }

    }
    inputFile.close();

    return data;
}

char printResult(std::string path)
{
    std::map<char, int> data;

    try {
        data = parseFile(path);
    } catch (std::ifstream::failure &e) {
        std::cout << e.what() << std::endl;
    } catch (std::runtime_error &e) {
        std::cout << e.what() << std::endl;
    }

    std::map<char, int>::iterator it = data.begin();
    int maxNumber = it->second;
    char maxKey = it->first;

    for (; it != data.end(); ++it) {
        if (it->second > maxNumber) {
            maxNumber = it->second;
            maxKey = it->first;
        }
    }
    return maxKey;
}









