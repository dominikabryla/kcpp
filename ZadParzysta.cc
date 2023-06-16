// Zadanie 4.4
// --------------------------------------
// Napisz program sprawdzający czy liczba jest parzysta/nieparzysta:
// - trzy funkcje:
//   (a) w jednej sprawdzamy z wykorzystaniem operacji bitowych (&);
//   (b) w drugiej inaczej (eg. modulo)
//   (c) w trzeciej sprawdzenie z użyciem operatora warunkowego zamiast if (lub jako warunek w if: TRUE || FALSE; (... ? 0 : 1))
//   - w kodzie funkcji (a) proszę rozpisać jako komentarz przykładowe sprawdzenie
// - nazwać program: ZadParzysta.cc


#include <iostream>

using namespace std;

// Sprawdzenie parzystości z użyciem operacji bitowej
bool isEvenBitwise(int number) {
    // Przykład:
    // Dla liczby 9 (binarnie: 1001):
    //   1001 (9)
    // & 0001 (1)
    //   ------
    //   0001 (1) - Wynik różny od 0, liczba jest nieparzysta.
    return (number & 1) == 0;
}

// Sprawdzenie parzystości za pomocą operacji modulo
bool isEvenModulo(int number) {
    return number % 2 == 0;
}

// Sprawdzenie parzystości z użyciem operatora warunkowego
bool isEvenConditional(int number) {
    return number % 2 == 0 ? true : false;
}

int main() {
    int number;
    cout << "Podaj liczbę: ";
    cin >> number;

    cout << "Metoda (a): ";
    if (isEvenBitwise(number)) {
        cout << "Liczba jest parzysta" << endl;
    } else {
        cout << "Liczba jest nieparzysta" << endl;
    }

    cout << "Metoda (b): ";
    if (isEvenModulo(number)) {
        cout << "Liczba jest parzysta" << endl;
    } else {
        cout << "Liczba jest nieparzysta" << endl;
    }

    cout << "Metoda (c): ";
    if (isEvenConditional(number)) {
        cout << "Liczba jest parzysta" << endl;
    } else {
        cout << "Liczba jest nieparzysta" << endl;
    }

    return 0;
}
