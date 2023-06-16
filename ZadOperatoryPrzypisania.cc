// Zadanie 3.4 (LOperatoryPrzypisania.cc)
// -------------------------------------
// Napisać program z przykładami:
// (1) operatorow arytmetycznych i (2) operatorow przypisania
// (1) i (2) jako osobne funkcje: (1) OperatoryArytmetyczne (2) OperatoryPrzypisania
// - nazwać program: ZadOperatoryPrzypisania.cc

#include <iostream>
using namespace std;

void OperatoryArytmetyczne() {
    int x = 1;
    int y = 10;

    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;
    cout << "x % y = " << x % y << endl;
}

void OperatoryPrzypisania() {
    int x = 1;
    int y = 10;

    cout << "x += y: " << (x += y) << endl;
    cout << "x -= y: " << (x -= y) << endl;
    cout << "x *= y: " << (x *= y) << endl;
    cout << "x /= y: " << (x /= y) << endl;
    cout << "x %= y: " << (x %= y) << endl;
}

int main() {
    OperatoryArytmetyczne();
    OperatoryPrzypisania();
    return 0;
}
