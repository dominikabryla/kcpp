#include "../include/ZadKcpp.h"
#include "../include/ZadSwitch.h" // Importuj pozostałe pliki nagłówkowe dla innych programów
#include "../include/ZadStruct.h"
#include "../include/ZadZwracanie.h"
#include "../include/ZadUnia.h"
#include "../include/ZadParzysta.h"

void ZadKcpp::menu() {
    int wybor;

    do {
        cout << "===================================================" << endl;
        cout << "MENU:" << endl;
        cout << "===================================================\n" << endl;
        cout << "1. ZadSwitch" << endl;
        cout << "2. ZadStruct" << endl;
        cout << "3. ZadZwracanie" << endl;
        cout << "4. ZadUnia" << endl;
        cout << "5. ZadParzysta" << endl;
        cout << "0. Wyjście" << endl;
        cout << "\n" << endl;

        cout << "Wybierz zadanie: ";
        cin >> wybor;

        switch (wybor) {
            case 1: {
                ZadSwitch zadSwitch;
                zadSwitch.run();
                break;
            }
            case 2: {
                ZadStruct zadStruct;
                zadStruct.run();
                break;
            }
            case 3: {
                ZadZwracanie zadZwracanie;
                zadZwracanie.run();
                break;
            }
            case 4: {
                ZadUnia zadUnia;
                zadUnia.run();
                break;
            }
            case 5: {
                ZadParzysta zadParzysta;
                zadParzysta.run();
                break;
            }
            case 0: {
                cout << "Wyjście z programu.\n" << endl;
                break;
            }
            default: {
                cout << "Nieprawidłowy wybór. Spróbuj ponownie.\n" << endl;
                break;
            }
        }

        cout << endl;
    } while (wybor != 0);
}
