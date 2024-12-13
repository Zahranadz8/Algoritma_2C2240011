#include <iostream>

using namespace std;

int main() {
    int baris, kolom;

    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;

    int matriks[baris][kolom];

    
    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriks[i][j];
        }
    }

    
    int maks = matriks[0][0], min = matriks[0][0];
    int indeks_maks_baris = 0, indeks_maks_kolom = 0;
    int indeks_min_baris = 0, indeks_min_kolom = 0;

    
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            if (matriks[i][j] > maks) {
                maks = matriks[i][j];
                indeks_maks_baris = i;
                indeks_maks_kolom = j;
            }
            if (matriks[i][j] < min) {
                min = matriks[i][j];
                indeks_min_baris = i;
                indeks_min_kolom = j;
            }
        }
    }

    
    cout << "Nilai maksimum: " << maks << " pada baris " << indeks_maks_baris + 1 << ", kolom " << indeks_maks_kolom + 1 << endl;
    cout << "Nilai minimum: " << min << " pada baris " << indeks_min_baris + 1 << ", kolom " << indeks_min_kolom + 1 << endl;

    return 0;
}