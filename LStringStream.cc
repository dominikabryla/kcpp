// Zadanie 4.0
// --------------------------------------
// Napisz program z przykładem zastosowania klasy stringstream z biblioteki sstream
// - nazwać program LStringStream.cc


#include <iostream>
#include <sstream>
#include <string>

using namespace std;

struct Person {
    string firstName;
    string lastName;
    int age;
};

int main() {
    string input;
    cout << "Podaj dane osobowe (imię nazwisko wiek): ";
    getline(cin, input);

    stringstream ss(input);

    Person person;
    ss >> person.firstName >> person.lastName >> person.age;

    cout << "Imię: " << person.firstName << endl;
    cout << "Nazwisko: " << person.lastName << endl;
    cout << "Wiek: " << person.age << endl;

    return 0;
}
