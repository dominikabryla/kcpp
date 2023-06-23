#ifndef ZADZWRACANIE_H
#define ZADZWRACANIE_H


int wartosc(int a, int b);
void referencja(int a, int b, int& wynik);
void wskaznik(int a, int b, int* wynik);
void tablica(int a, int b, int wynik[]);

class ZadZwracanie {
public:
    void run();
};

#endif
