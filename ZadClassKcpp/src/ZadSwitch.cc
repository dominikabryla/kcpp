#include "../include/ZadSwitch.h"
#include "../include/ZadParzysta.h"
#include "../include/ZadKcpp.h"

void ZadSwitch::run() {
    cout << "===========================================================================================================" << endl;
    cout << "WYBRANE ZADANIE: ZadSwitch" << endl;
    cout << "Program wykorzystuje instrukcje 'switch' i sprawdza jaka opcja została podana analizując całe słowo. " << endl;
    cout << "Pozwala na sprawdzenie parzystości podanej liczby." << endl;
    cout << "===========================================================================================================\n\n" << endl;


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
            return ;
    }

    if (isEven) {
        cout << "Liczba jest parzysta." << endl;
    } else {
        cout << "Liczba jest nieparzysta." << endl;
    }


    return ;
}


