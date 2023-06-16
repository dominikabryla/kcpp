// Zadanie 5.4
// --------------------------------------
// Stwórz klase (program: ZadKlasaKonstruktor.cc) oraz structure (program: ZadStructKonstruktor.cc) z przykładami konstruktorów i 
// inicializacją zmiennych:
// - domyślny konstruktor,
// - domyślny destruktor,
// - konstruktor z niepustą liczbą zmiennych argumentów
// - inicjalizacja zmiennych:
//   - 'standardowa',
//   - inicjalizacyjna za pomocą listy inicjalizacyjnej

#include <iostream>

using namespace std;

struct ZadStructKonstruktor {
    int value;

    // Domyślny konstruktor
    ZadStructKonstruktor() {
        value = 0;
        cout << "Default constructor. Value = " << value << endl;
    }

    // Konstruktor z argumentem
    ZadStructKonstruktor(int arg) {
        value = arg;
        cout << "Constructor with an argument. Value = " << value << endl;
    }

    // Domyślny destruktor
    ~ZadStructKonstruktor() {
        cout << "Destroyed" << endl;
    }
};

int main() {
    // Tworzenie obiektu przy użyciu domyślnego konstruktora
    ZadStructKonstruktor obj1;

    // Tworzenie obiektu przy użyciu konstruktora z argumentem
    ZadStructKonstruktor obj2(42);

    return 0;
}
