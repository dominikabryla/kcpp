// Zadanie 4.3
// --------------------------------------
// Napisz program:
// - pokazujący wykonanie tych samych operacji w c i c++ (kcpp02::34)
// - nazwać program: ZadCandCPP.cc



#include <stdio.h>
#include <iostream>

using namespace std;

// Funkcja w języku C
void executeC() {
    printf("Wykonanie w języku C\n");

    // Wprowadzanie danych w języku C
    int numC;
    printf("Podaj liczbę w języku C: ");
    scanf("%d", &numC);

    // Wyświetlanie danych w języku C
    printf("Wprowadzona liczba w języku C: %d\n", numC);
}

// Funkcja w języku C++
void executeCPP() {
    cout << "Wykonanie w języku C++" << endl;

    // Wprowadzanie danych w języku C++
    int numCPP;
    cout << "Podaj liczbę w języku C++: ";
    cin >> numCPP;

    // Wyświetlanie danych w języku C++
    cout << "Wprowadzona liczba w języku C++: " << numCPP << endl;
}

int main() {
    executeC();
    cout << "----------------------------" << endl;
    executeCPP();

    return 0;
}
