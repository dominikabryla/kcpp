#include "../include/ZadZwracanie.h"
#include "../include/ZadKcpp.h"

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


void ZadZwracanie::run() {
    cout << "===========================================================================================================" << endl;
    cout << "WYBRANE ZADANIE: ZadSwitch" << endl;
    cout << "Program posiada cztery funkcję obliczające sumę. Każda zwraca wynik inaczej:" << endl;
    cout << "\t1.\tPrzez wartość" << endl;
    cout << "\t2.\tPrzez referencje" << endl;
    cout << "\t3.\tPrzez wskaźnik" << endl;
    cout << "\t4.\tTablice" << endl;
    cout << "===========================================================================================================\n\n" << endl;


int a,b;
cout << "Podaj pierwszą liczbę:" << endl;
cin >> a;
cout << "Podaj drugą liczbę" << endl;
cin >> b;
cout << "\n" << endl;


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
cout << "\n\n" << endl;
  return ;
}
