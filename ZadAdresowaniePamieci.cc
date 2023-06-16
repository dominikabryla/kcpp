//  Zadanie 3.1 (LArytmetykaWskaznikowZmienne.cc)
//  -------------------------------------
//  Kierunek adresowania pamięci 
//  - wyjaśnić w komentarzu do programu podającego przykład:
//  - wypisywanie adresów deklarowanych zmiennych
//  - nazwać program: ZadAdresowaniePamieci.cc



#include <iostream>
using namespace std;

int main() {
   int a = 5;
   int *p = &a;
   cout << "Adres zmiennej a: " << &a << endl;
   cout << "Adres wskaźnika p: " << &p << endl;
   cout << "Wartość wskaźnika p: " << p << endl;
   return 0;
}

// Adresowanie pamięci oznacza sposób odwoływania się do komórek pamięci,
// na których przechowywane są wartości zmiennych i obiektw. W programie wykorzystywane są wskaźniki,
// które pozwalają na przechowywanie adresów pamięci i manipulowanie wartościami zmiennych przez odwołanie się do tych adresów.
// Czyli adresowanie pamięci w tym programie odbywa się poprzez użycie operatora "&".
// Wskaźniki jak sama nazwa mówi wskazują na obszar w pamięci komputera innej zmiennej.
// Wskaźnik nie pokazuje wartości zmiennej, ale miejsce gdzie dana zmienna przechowywana jest w pamięci.
// Każda zmienna zajmuje miejsce w pamięci przydzielane przez system operacyjny