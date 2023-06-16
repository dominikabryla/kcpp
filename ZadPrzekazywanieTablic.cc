
// Napisz program przekazujący tablice z zachowaniem rozmiaru
// Czy się da?  -----------------TAK-----------------
// Jeśli tak to proszę wykonać zadanie:
// - nazwać program: ZadPrzekazywanieTablic.cc
// Jeśli się nie da to proszę wykonać zadanie:
// - zdefiniować ogólną funkcję w której nie jest na sztywno ustawiony rozmiar tablicy, która przekazujemy:
// - nazwać program: ZadPrzekazywanieTablicZpodaniemRozmiaru.cc

#include <iostream>

using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr, size);
    
    return 0;
}
