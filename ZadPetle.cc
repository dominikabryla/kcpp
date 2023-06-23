// Zadanie 4.6
// --------------------------------------
// Napisz program pokazujący działanie instrukcji (każda jako osobna funkcja; trzy funkcje od a do c):
// (a) while    (pokazujące while z inkrementacją: i++, ++i)
// (b) do-while (pokazujące do-while z inkrementacją: i++, ++i)
// (c) for
// - wykorzystaj: break, continue, return
// - nazwać program: ZadPetle.cc

#include <iostream>

using namespace std;

void whileLoop() {
    int i = 0;
    while (i < 10) {
        if (i % 2 == 0) {
            cout << "Parzysta liczba: " << i << endl;
        } else {
            i++;
            continue; // Przejdź do kolejnej iteracji pętli
        }
        i++;
    }
}

void dowhileLoop() {
    int i = 0;
    do {
        cout << "Liczba: " << i << endl;
        i += 2;
        if (i >= 10) {
            break; // Zakończ pętlę
        }
    } while (true);
}

void forLoop() {
    for (int i = 10; i >= 0; i -= 2) {
        if (i == 4) {
            return; // Zakończ funkcję
        }
        cout << "Liczba: " << i << endl;
    }
}

int main() {
    cout << "Wywołanie funkcji whileLoop():" << endl;
    whileLoop();

    cout << "\nWywołanie funkcji doWhileLoop():" << endl;
    dowhileLoop();

    cout << "\nWywołanie funkcji forLoop():" << endl;
    forLoop();

    return 0;
}
