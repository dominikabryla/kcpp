
// Zadanie 4.1
// --------------------------------------
// Napisz program z przykładami manipulacji strumieniem cout:
// - setw, setprecision, setfill, fixed, scientific, hex, dec... etc (patrz plik kcpp02.pdf)
// - nazwać program LManipulacjaStrumieniemCout.cc

//   Spraw aby na ekran wypisało to co jest pomiedzy liniami ze znakami =:
//   ==================================================
//   Wynika naszego działania: x.xxxxx jest niepoprawny ale:
//      output:   xx.xxx    T:  x.xxx 
//   // float w = 16.0;
//      output1:   x.xxxx   T: xx.xxxxx
//      output2:   x.xxxx   T: xx.xxxxxx
//      ---------------------------------
//      average:  xx.xxxx   T: xx.xxxxxx
//   ==================================================
//   - x.xxxx są wynikami jakiś działań, a nie sztucznie wstawionymi liczbami
//   - ustawienie liczb/wypisanie/sformatowanie wykonać używając manipulatorow strumieniem (setw, setprecision, setfill etc), zamiast " " czy \t

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pi = 3.14159265358979323846;
    double number = 1234.56789;


    cout << "Wynika naszego działania: " << pi << " jest niepoprawny ale:" << endl;
    cout << fixed << setprecision(3);
    cout << "   output: " << setw(8) << pi << "   T: " << setw(10) << number << endl;

    double w = 16.0;
    cout << scientific << setprecision(4);
    cout << "   output1: " << setw(8) << w << "   T: " << setw(12) << number << endl;

    cout << setprecision(5);
    cout << "   output2: " << setw(8) << w << "   T: " << setw(12) << number << endl;

    cout << "   ---------------------------------" << endl;
    cout << "   average: " << setw(8) << w << "   T: " << setw(12) << number << endl;


    return 0;
}
