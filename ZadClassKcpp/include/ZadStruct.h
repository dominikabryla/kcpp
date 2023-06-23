#ifndef ZADSTRUCT_H
#define ZADSTRUCT_H

#include <iostream>
#include <string>

using namespace std;

struct Animal {
    string name;
    string species;
    int age;
};

void displayAnimal(const Animal& animal);

class ZadStruct {
public:
    void run();
};

#endif
