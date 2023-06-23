#include "../include/ZadStruct.h"
#include "../include/ZadKcpp.h"

void displayAnimal(const Animal& animal) {
    cout << "Name: " << animal.name << endl;
    cout << "Species: " << animal.species << endl;
    cout << "Age: " << animal.age << endl;
}

void ZadStruct::run() {
    cout << "===========================================================================================================" << endl;
    cout << "WYBRANE ZADANIE: ZadStrukt" << endl;
    cout << "Program przedstawia działającą strukturę." << endl;
    cout << "Pozwala na jej deklarację, deklarację obiektow, jej wywołanie, zmianę wartości oraz odczyt wartości." << endl;
    cout << "===========================================================================================================\n\n" << endl;

    cout << "Deklaracja, wywołanie i odczyt wartości." << endl;
    Animal dog;

    cout << "Podaj imię psa: ";
    cin >> dog.name;
    dog.species = "Pies";
    cout << "Podaj wiek psa: ";
    cin >> dog.age;

    displayAnimal(dog);

    Animal cat = {"Mruczuś", "Kot", 5};

    displayAnimal(cat);
    
    cout << "Zmiana wartości wieku kota." << endl;
    cout << "Podaj nowy wiek kota : ";
    cin >> cat.age;

    displayAnimal(cat);

    cout << "\n\n" << endl;

    return ;
}
