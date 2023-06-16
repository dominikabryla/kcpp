
// Zadanie 4.7
// --------------------------------------
// Napisz program wykorzystujący instrukcje 'switch' gdzie:
// - zamiast pojedynczego znaku będzie sprawdzane całe słowo
// - program może być uszczegółowieniem/modyfikacją (zrobić kopie pliku i zmienić kopie) tego co jest w ZadParzysteCase.cc
// - nazwać program: ZadSwitch.cc
#include <iostream>
#include <string>
#include <algorithm> // Dodatkowa biblioteka do usunięcia zbędnych białych znaków

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
    cout << "1. Metoda bitowa\n";
    cout << "2. Metoda modulo\n";
    cout << "3. Metoda warunkowa\n";
    cout << "Wybór: ";

    string choice;
    cin.ignore(); // Ignorowanie znaku nowej linii pozostawionego przez poprzednią operację wejścia
    getline(cin, choice); // Odczyt pełnej linii tekstu, w tym spacji

    // Usunięcie zbędnych białych znaków z wyboru
    choice.erase(remove_if(choice.begin(), choice.end(), ::isspace), choice.end());

    bool isEven;
    if (choice == "Metodabitowa") {
        isEven = isEvenBitwise(number);
    } else if (choice == "Metodamodulo") {
        isEven = isEvenModulo(number);
    } else if (choice == "Metodawarunkowa") {
        isEven = isEvenConditional(number);
    } else {
        cout << "Nieprawidłowy wybór." << endl;
        return 0;
    }

    cout << "Wybrana metoda: " << choice << endl;
    if (isEven) {
        cout << "Liczba jest parzysta." << endl;
    } else {
        cout << "Liczba jest nieparzysta." << endl;
    }

    return 0;
}
