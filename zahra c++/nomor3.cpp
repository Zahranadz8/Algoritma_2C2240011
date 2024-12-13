#include <iostream>

using namespace std;

int main() {
    int baris, kolom;

    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;

    int matriks[baris][kolom];

    cout << "Masukkan elemen-elemen matriks:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriks[i][j];
        }
    }

    int jumlah_elemen = baris * kolom;

    cout << "Jumlah elemen dalam matriks adalah: " << jumlah_elemen << endl;

    return 0;
}