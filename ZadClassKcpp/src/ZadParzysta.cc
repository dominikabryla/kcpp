#include "../include/ZadParzysta.h"
#include "../include/ZadKcpp.h"


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


void ZadParzysta::run() {

    cout << "===========================================================================================================" << endl;
    cout << "WYBRANE ZADANIE: ZadParzysta" << endl;
    cout << "Program sprawcza czy podana liczba jest parzysta/nieparzysta na trzy sposoby:" << endl;
    cout << "\t(a)\tSprawdzenie parzystości z użyciem operacji bitowej" << endl;
    cout << "\t(b)\tSprawdzenie parzystości za pomocą operacji modulo" << endl;
    cout << "\t(c)\tSprawdzenie parzystości z użyciem operatora warunkowego" << endl;
    cout << "===========================================================================================================\n\n" << endl;


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
    cout << "\n\n" << endl;
    return ;
}
