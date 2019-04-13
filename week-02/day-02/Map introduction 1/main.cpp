#include <iostream>
#include <string>
#include <map>


int main() {

    std::map<int, std::string> myMap;

    //see if empty

    if (myMap.empty()) {
    std::cout << "empty";
    } else {
    std::cout << "not empty";
     }



    //myMap[97] = "a";
    //myMap[98] = "b";
    //myMap[99] = "c";
    //myMap[65] = "A";
    //myMap[66] = "B";
    //myMap[67] = "C";

    //std::cout << myMap [66] << std::endl;

    myMap.insert(std::make_pair(97, "a"));
    myMap.insert(std::make_pair(98, "b"));
    myMap.insert(std::make_pair(99, "c"));
    myMap.insert(std::make_pair(65, "A"));
    myMap.insert(std::make_pair(66, "B"));
    myMap.insert(std::make_pair(67, "C"));

    std::cout << myMap [66] << std::endl;

    std::map<int, std::string>::iterator mapIterator;

   // for(mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++) {
        //print keys
        //std::cout << (*mapIterator).first << std::endl;
        //print values
        //std::cout << (*mapIterator).second << std::endl;

   // }

    myMap[68] = "D";

//print keys & values
    for(mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++) {
        //std::cout << (*mapIterator).first << std::endl;
        std::cout <<mapIterator->first << " " << mapIterator->second << std::endl;
    }

    //Print how many key-value pairs are in the map
    std::cout << myMap.size() << std::endl;

    //Print the value that is associated with key 99
    std::cout << myMap [99] << std::endl;

    //Remove the key-value pair where with key 97

    myMap.erase(97);

    for(mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++) {
        //std::cout << (*mapIterator).first << std::endl;
        std::cout <<mapIterator->first << " " << mapIterator->second << std::endl;
    }


    //Print whether there is an associated value with key 100 or not

    if(myMap.count(100) != 0) {
        std::cout << "there is key 100" << std::endl;
    }

    if(myMap.count(65) != 0) {
        std::cout << "there is key 65" << std::endl;
    }

    //Remove all the key-value pairs

    myMap.clear();

    for(mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++) {
        //std::cout << (*mapIterator).first << std::endl;
        std::cout <<mapIterator->first << " " << mapIterator->second << std::endl;
    }

    return 0;
}