
// Zadanie 5.1
// --------------------------------------
// Napisz prosty program z klasą
// - metody deklarowane i definiowane w klasie
// - metody deklarowane w klasie, a definiowane poza klasą
// - zastosowanie 3 sekcji: public, private, protected
// - zmienne w każdej z sekcji
// - funkcje, które mają dostęp do zmiennych z sekcji protected i private
// - funkcje inline
// - nazwij program: ZadClass.cc

#include <iostream>

using namespace std;

class ZadClass {
public:
    int publicVariable; // publiczna zmienna

    void publicMethod() {
        cout << "Publiczna metoda" << endl;
    }

    void publicMethod2();

protected:
    int protectedVariable; // chroniona zmienna

    void protectedMethod() {
        cout << "Chroniona metoda" << endl;
    }

private:
    int privateVariable; // prywatna zmienna

    void privateMethod();
};

void ZadClass::publicMethod2() {
    cout << "Druga publiczna metoda" << endl;
}

void ZadClass::privateMethod() {
    cout << "Prywatna metoda" << endl;
}

int main() {
    ZadClass object;
    object.publicVariable = 5;
    object.publicMethod();

    object.publicMethod2();

    // object.protectedVariable = 10; //  protectedVariable jest chroniona
    // object.protectedMethod(); //  protectedMethod jest chroniona

    // object.privateVariable = 15; // privateVariable jest prywatna
    // object.privateMethod(); // privateMethod jest prywatna

    return 0;
}
