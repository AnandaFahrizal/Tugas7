#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout << "Masukkan Nilai Array: ";
    cin >> nilai;

    int arr[nilai];

    cout << "Masukkan " << nilai << " elemen: ";
    for (int i = 0; i < nilai; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < nilai; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Nilai Tertinggi adalah " << max << endl;

    char lagi;
    do {
        int angka;
        cout << "Masukkan angka untuk dicari: ";
        cin >> angka;

        bool found = false;
        for (int i = 0; i < nilai; i++) {
            if (arr[i] == angka) {
                cout << "Angka " << angka << " ditemukan pada indeks " << i << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Angka " << angka << " tidak ditemukan dalam array." << endl;
        } 

        cout << "Ingin mencari indeks lagi? (y/n): ";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');

    return 0;
}
