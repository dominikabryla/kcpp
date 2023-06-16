//  Zadanie 3.3 (LArytmetykaWskaznikow.cc)
//  -------------------------------------
//  Co robią poniższe operacje? Napisać program który pokazuje ich działanie.
//  1. Funkcja1()
//  p++;
//  ++p;
//  ++*p;
//  ++(*p);
//  ++*(p);
//  *p++;
//  (*p)++;
//  *(p)++;
//  *++p;
//  *(++p);


#include <iostream>

using namespace std;

void Funkcja1() {
    int array[] = {1, 2, 3, 30, 40};
    int* p = array;


    p++;  // p++; - Przesunięcie wskaźnika o jeden element w przód
    cout << "Wartość po p++: " << *p << endl;

    ++p; // ++p; - Przesunięcie wskaźnika o jeden element w przód 
    cout << "Wartość po ++p: " << *p << endl;

    ++*p;  // ++*p; - Inkrementacja wartości, na którą wskazuje wskaźnik
    cout << "Wartość po ++*p: " << *p << endl;

    ++(*p);    // ++(*p); - Inkrementacja wartości, na którą wskazuje wskaźnik
    cout << "Wartość po ++(*p): " << *p << endl;

    ++*(p);     // ++*(p); - Inkrementacja wartości, na którą wskazuje wskaźnik 
    cout << "Wartość po ++*(p): " << *p << endl;

    // *p++; - Przesunięcie wskaźnika o jeden element w przód i odczytanie wartości przed inkrementacją
    cout << "Wartość przed *p++: " << *p++ << endl;
    cout << "Wartość po *p++: " << *p << endl;

    (*p)++;     // (*p)++; - Inkrementacja wartości, na którą wskazuje wskaźnik
    cout << "Wartość po (*p)++: " << *p << endl;

    // *(p)++; - Przesunięcie wskaźnika o jeden element w przód i odczytanie wartości przed inkrementacją
    cout << "Wartość przed *(p)++: " << *(p)++ << endl;
    cout << "Wartość po *(p)++: " << *p << endl;

    // *++p; - Przesunięcie wskaźnika o jeden element w przód i odczytanie wartości po inkrementacji
    cout << "Wartość po *++p: " << *++p << endl;

    // *(++p); - Przesunięcie wskaźnika o jeden element w przód i odczytanie wartości po inkrementacji (inna notacja)
    cout << "Wartość po *(++p): " << *(++p) << endl;
}


// oraz (Funkcja2()) w analogii do LArytmetykaWzkaznikowZmienne.cc aby wypisywał na ekran:

//  1.  A, B, C: 0  0   0
//  2.  A, B, C: 0  10  0
//  3.  A, B, C: 0  10  20
//  4.  A, B, C: 0  30  20
//  5.  A, B, C: 40 30  20
//  6.  A, B, C: 40 50  20
//  7.  A, B, C: 40 50  60
//  8.  A, B, C: 40 70  60
//  9.  A, B, C: 80 70  60
//  10. A, B, C: 80 90  60

//  przy początkowych wartościach zmiennych: int a = 0, b = 0, c = 0;
//  - nazwać program: ZadArytmetykaWskaznikow.cc
void Funkcja2()
{
    int a = 0, b = 0, c = 0;
    int index = 1;
    int* wsk_a = &a;
    int* wsk_b = &b;
    int* wsk_c = &c;

    cout << index << ". A, B, C: " << *wsk_a << "  " << *wsk_b << "  " << *wsk_c << endl;

    *wsk_b = 10;
    cout << index + 1 << ". A, B, C: " << *wsk_a << "  " << *wsk_b << "  " << *wsk_c << endl;

    *wsk_c = 20;
    cout << index + 2 << ". A, B, C: " << *wsk_a << "  " << *wsk_b << "  " << *wsk_c << endl;

    *wsk_a = 0;
    cout << index + 3 << ". A, B, C: " << *wsk_a << "  " << *wsk_b << "  " << *wsk_c << endl;

    *wsk_a = 40;
    cout << index + 4 << ". A, B, C: " << *wsk_a << "  " << *wsk_b << "  " << *wsk_c << endl;

    *wsk_b = 50;
    cout << index + 5 << ". A, B, C: " << *wsk_a << "  " << *wsk_b << "  " << *wsk_c << endl;

    *wsk_c = 60;
    cout << index + 6 << ". A, B, C: " << *wsk_a << "  " << *wsk_b << "  " << *wsk_c << endl;

    *wsk_b = 70;
    cout << index + 7 << ". A, B, C: " << *wsk_a << "  " << *wsk_b << "  " << *wsk_c << endl;

    *wsk_a = 80;
    cout << index + 8 << ". A, B, C: " << *wsk_a << "  " << *wsk_b << "  " << *wsk_c << endl;

    *wsk_b = 90;
    cout << index + 9 << ". A, B, C: " << *wsk_a << "  " << *wsk_b << "  " << *wsk_c << endl;
}



int main() {
    Funkcja1();
    Funkcja2();
    return 0;
}
