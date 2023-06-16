
//  Zadanie 3.2 (LArytmetykaWskazikow.cc)
//  -------------------------------------
//  Wyjaśnić i[q] gdy i jest 'int', a q jest wskaźnikiem na tablice
//  - wyjaśnienie  w komentarzu w treści programu!!!!
//  - przykład zastosowania
//  - nazwać program: ZadIq.cc

#include <iostream>

using namespace std;

int main() {
    int* tab = new int[5];
    for (int i = 0; i < 5; i++) {
        tab[i] = i + 1;
    }
    
    int i = 2;
    int* q = tab;
    
    int value = i[q];
    int value2 = q[i];
    
    cout << "Value: " << value << endl;
    cout << "Value2: " << value2 << endl;
    
    delete[] tab;
    
    return 0;
}


// W C++ wskaźniki mogą być używane jako indeksy tablicy. 
//Trzeba wiedzieć, że tablice to też rodzaj zmiennej wskaźnikowej.
//Taki wskaźnik wskazuje na miejsce w pamięci, gdzie przechowywany jest jej pierwszy element.
//Następne elementy znajdują się bezpośrednio w następnych komórkach pamięci, w odstępie zgodnym z wielkością odpowiedniego typu zmiennej.
//zmienna = tab[2]; jest rownoważne z zmienna = *(tab + 2);
//Wyrażenie i[q] w C++ oznacza to samo co *(i + q), gdzie i jest zmienną typu int, a q jest wskaźnikiem na tablicę.
//Jeśli q jest wskaźnikiem na tablicę, to możemy interpretować i[q] jako dostęp do elementu tablicy o przesunięciu q od wskaźnika i. W praktyce, q jest wykorzystywane jako indeks tablicy, a wynikowe wyrażenie i[q] zwraca wartość elementu tablicy, który znajduje się na przesunięciu q od wskaźnika i.
// i[q] to to samo co  q[i]
//Wskaźniki mogą udostępniać dostęp do dowolnego elementu tablicy.
//Zastosowanie: iterowanie elementw w tablicach lub innych strukturach danych.

