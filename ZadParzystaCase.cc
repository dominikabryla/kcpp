
// Zadanie 4.5 
// --------------------------------------
// Napisz program z użyciem 'switch' wybierajacy do wykonania jedną z trzech funkcji z zadania ZadParzysta.cc:
// - nazwać program: ZadParzystaCase.cc (kopia ZadParzyste do ZadParzysteCase+switch, lub pominięcie ZadParzyste i umieszczenie wszystkiego w ZadParzystaCase)

#include <iostream>

using namespace std;

bool isEvenBitwise(int number) {
    return (number & 1) == 0;
}

bool isEvenModulo(int number) {
    return number % 2 == 0;
}

bool isEvenConditional(int number) {
    return number % 2 ? false : true;
}

int main() {
    int number;
    cout << "Podaj liczbę: ";
    cin >> number;

    cout << "Wybierz metodę sprawdzania parzystości:\n";
    cout << "1. Metoda bitowa \n";
    cout << "2. Metoda modulo \n";
    cout << "3. Metoda warunkowa \n";
    cout << "Wybór: ";

    int choice;
    cin >> choice;

    bool isEven;
    switch (choice) {
        case 1:
            isEven = isEvenBitwise(number);
            break;
        case 2:
            isEven = isEvenModulo(number);
            break;
        case 3:
            isEven = isEvenConditional(number);
            break;
        default:
            cout << "Nieprawidłowy wybór." << endl;
            return 0;
    }

    if (isEven) {
        cout << "Liczba jest parzysta." << endl;
    } else {
        cout << "Liczba jest nieparzysta." << endl;
    }

    return 0;
}
