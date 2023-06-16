// Zadanie 3.7 (LBitoweOperatoryLogiczneB.c i ..czneC.cc)
// -------------------------------------
// Proszę napisać samodziely program który jako argument będzie przyjmował tablice 8
// elementową, gdize na poszczególnych pozycjach tablicy będize 0 lub 1. Program będzie
// zwracał liczbę, która w formi bonarnej będzie miała ustawione 1 na pozycjach odpowiadających
// pozycjom 1 w tablicy. Wystarczy zmodyfikować program LBitoweOperatoryLogiczneC.cc
// - nazwać program: LBitoweOperatoryLogiczneSingleVariable.cc


#include <iostream>
using namespace std;

void printBinary(const unsigned char val) {
	for(int i = 7; i >= 0; i--)
		if(val & (1 << i))
			cout << "1";
		else
			cout << "0";
}

#define PR(STR, EXPR) \
	cout << STR <<"\t"; printBinary(EXPR); cout << endl;

int main() {
	unsigned char arr[8];
	
	cout << "Enter an 8-element array (0 or 1): ";
	for(int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	
	unsigned char k = 0;
	
	for(int iter = 0; iter < 8; iter++) {
		if(arr[iter] == 1)
			k = k | (1 << iter);
	}
	
	PR("Binary representation: ", k);
	
	return 0;
}
