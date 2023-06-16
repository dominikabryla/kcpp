
// Zadanie 5.3
// --------------------------------------
// Pokaż działanie uni (niebezpieczenstwa, bledy)
// - nazwij program: ZadUnia.cc

#include <iostream>

using namespace std;

union Data {
    int liczba;
    char znak;
};

int main() {
    Data data;

    data.liczba = 10;
    cout << "Liczba: " << data.liczba << endl;

    data.znak = 'A';
    cout << "Znak: " << data.znak << endl;

    cout << "Liczba po przypisaniu znaku: " << data.liczba << endl;

    return 0;
}

// Niejednoznaczność typów: Próba odczytu z nieaktywnego pola lub zapisu do nieaktywnego pola może prowadzić do nieprzewidywalnych wyników.
// Błędy w przypadku aliasowania: Nieprawidłowy dostęp i przypadkowe nadpisanie danych w polu unii może prowadzić do błędów w programie.
// Brak kontroli typów: Unie nie sprawdzają typów, co może prowadzić do błędów typowania i nieprawidłowych wyników.