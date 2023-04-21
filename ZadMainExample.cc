// ------------------------------------------------------------------------------------------
//   1. Funkcja main
// ------------------------------------------------------------------------------------------

//Zadanie 1.1
//--------------------------------------
//Napisać program który zawiera:
//- funkcję main
// - 5 innych funkcji, z czego dwie zadeklarowane jako: extern "C"
// - dodatkowo do wykonania w późniejszej cześci kursu: wywołując program decydujemy, które z funkcji mają zostać wykonane przez podanie tego w liście argumentów przekazanych do funkcji main
// - nazwać program: ZadMainExample.cc 



#include <iostream>
#include <string>

using namespace std;

extern "C" void extern1();
extern "C" void extern2();
void funkcja3();
void funkcja4();
void funkcja5();


//- funkcję main

int main(int argc, char *argv[]) 
{

  // - dodatkowo do wykonania w późniejszej cześci kursu: wywołując program decydujemy, które z funkcji mają zostać wykonane przez podanie tego w liście argumentów przekazanych do funkcji main

  for (int i = 0; i < argc; i++) {
    string nrFunkcji = argv[i];

    if (nrFunkcji == "1") {
      extern1();
    } else if (nrFunkcji == "2") {
      extern2();
    } else if (nrFunkcji == "3") {
      funkcja3();
    } else if (nrFunkcji == "4") {
      funkcja4();
    } else if (nrFunkcji == "5") {
      funkcja5();
    }
  }

  return 0;
}


// - 5 innych funkcji, z czego dwie zadeklarowane jako: extern "C"
extern "C" void extern1(){
  cout << "Funkcja extern 1 działa." << endl;

}

extern "C" void extern2(){
  cout << "Funkcja extern 2 działa." << endl;

}

void funkcja3(){
  cout << "Funkcja 3 działa." << endl;

}

void funkcja4(){
  cout << "Funkcja 4 działa." << endl;

}

void funkcja5(){
  cout << "Funkcja 5 działa." << endl;

}
