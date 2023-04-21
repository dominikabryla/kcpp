// Zadanie 2.1
// --------------------------------------
// Zadanie: Napisać program z czterema funkcjami z których każda zwraca inaczej:
// 1. Przez wartość
// 2. Przez referencje
// 3. Przez wskaźnik
// 4. Tablice (proszę się zastanowić o co tak naprawę chodzi)
// - nazwać program: ZadZwracanie.cc

#include <iostream>
using namespace std;

// 1. Przez wartość
int wartosc(int a, int b) {
  return a + b;
}

// 2. Przez referencje
void referencja(int a, int b, int& wynik) {
  wynik = a + b;
}

// 3. Przez wskaźnik
void wskaznik(int a, int b, int* wynik) {
  *wynik = a + b;
}

// 4. Tablice 
void tablica(int a, int b, int wynik[]) {
  wynik[0] = a + b;
}

int main() {
  int a = 1, b = 1;

  int wynik1 = wartosc(a, b);
  cout << "Przez wartość: " << wynik1 << endl;

  int wynik2;
  referencja(a, b, wynik2);
  cout << "Przez referencję: " << wynik2 << endl;

  int wynik3;
  wskaznik(a, b, &wynik3);
  cout << "Przez wskaznik: " << wynik3 << endl;

  int wynik4[1];
  tablica(a, b, wynik4);
  cout << "Przez tablicę: " << wynik4[0] << endl;

  return 0;
}
