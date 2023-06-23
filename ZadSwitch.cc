
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
    cout << "\tBitowa \n";
    cout << "\tModulo \n";
    cout << "\tWarunkowa \n";
    cout << "Wybór: ";


    string choice;
    cin.ignore(); // Ignorowanie znaku nowej linii pozostawionego przez poprzednią operację wejścia
    getline(cin, choice); // Odczyt pełnej linii tekstu, w tym spacji

    // Usunięcie zbędnych białych znaków z wyboru
    choice.erase(remove_if(choice.begin(), choice.end(), ::isspace), choice.end());

    int choice2;
        if (choice == "Bitowa") {
            choice2 = 1;
        }
        else if (choice == "Modulo")
        {
            choice2 = 2;
        }
        else if (choice == "Warunkowa")
        {
            choice2 = 3;
        }
        else
        {
            choice2 = 0;
        }

    bool isEven;
    switch (choice2) {
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
            return 0 ;
    }

    if (isEven) {
        cout << "Liczba jest parzysta." << endl;
    } else {
        cout << "Liczba jest nieparzysta." << endl;
    }



    return 0;
}
