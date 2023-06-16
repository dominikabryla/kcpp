// Zadanie 5.2
// --------------------------------------
// Stwórz plik z działająca strukturą:
// - deklaracja,
// - definicja obiektów (w dowolny sposób):
//   - wywołanie,
//   - zmiana wartości,
//   - odczyt wartości,
//   // - czy można stworzyć konstruktor (inicjalizacja wartości poczatkowych - standard, lista inicjalizacyjna)
// - nazwij program: ZadStruct.cc


#include <iostream>

using namespace std;
// - czy można stworzyć konstruktor (inicjalizacja wartości poczatkowych - standard, lista inicjalizacyjna)
// TAK, MOŻNA

struct Animal {
    string name;
    string species;
    int age;
};

void displayAnimal(const Animal& animal) {
    cout << "Name: " << animal.name << endl;
    cout << "Species: " << animal.species << endl;
    cout << "Age: " << animal.age << endl;
}

int main() {
    Animal dog;

    dog.name = "Ciapek";
    dog.species = "Pies";
    dog.age = 3;

    displayAnimal(dog);

    Animal cat = {"Mruczuś", "Kot", 5};

    displayAnimal(cat);

    cat.age = 6;

    displayAnimal(cat);

    return 0;
}
