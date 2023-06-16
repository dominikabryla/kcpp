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

class ZadKlasaKonstruktor {
public:
    int value;

    // Konstruktor z argumentem
    ZadKlasaKonstruktor(int arg) : value(arg) {
        cout << "Initialized = " << value << endl;
    }

    // Domyślny destruktor
    ~ZadKlasaKonstruktor() {
        cout << "Destroyed" << endl;
    }
};

int main() {
    // Tworzenie obiektu przy użyciu konstruktora
    ZadKlasaKonstruktor obj(10);

    return 0;
}
