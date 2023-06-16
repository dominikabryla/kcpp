// Zadanie 4.2
// --------------------------------------
// Napisz program pokazujący funkcjonalność:
// - wypisywania na ekran,
// - +zapisywanie do strumienia błędów
// - zapisywania do pliku,
// - odczytywania z pliku,
// - nazwać program: ZadCinCoutFile.cc


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "Wypisuje na ekran" << endl;
    cerr << "Wypisuje błąd" << endl;

    cout << "Witaj w programie do zapisu i odczytu danych!" << endl;

    string data;
    cout << "Podaj dane: ";
    getline(cin, data);

    cout << "Wprowadzone dane: " << data << endl;

    ofstream file("output.txt");
    file << data << endl;
    file.close();
    cout << "Zapisano do pliku: output.txt" << endl;

    ifstream inputFile("output.txt");
    if (inputFile) {
        string content;
        getline(inputFile, content);
        cout << "Zawartość pliku: " << content << endl;
    } else {
        cerr << "ERROR: Nie można otworzyć pliku do odczytu." << endl;
    }

    return 0;
}
