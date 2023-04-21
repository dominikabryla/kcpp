
// Zadanie 2.3 
// --------------------------------------
// Napisz program przekazujący kopię tablicy. (Czy da się przekazać kopię?)
// - nazwać program: ZadPrzekazywanieTablicKopia.cc


#include <iostream>
#include <algorithm>


using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void copyArray(int arr[], int arr_copy[], int size) {
    copy(arr, arr + size, arr_copy);
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int arr_copy[size];

    cout << "Oryginał:" << endl;
    print(arr, size);
    copyArray(arr, arr_copy, size);
    cout << "Kopia:" << endl;
    print(arr_copy, size);

    return 0;
}