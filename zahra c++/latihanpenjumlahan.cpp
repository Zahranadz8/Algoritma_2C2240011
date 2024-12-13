#include <iostream>

using namespace std;

int main() {
    int barisA, kolomA, barisB, kolomB;

    
    cout << "Masukkan jumlah baris matriks A: ";
    cin >> barisA;
    cout << "Masukkan jumlah kolom matriks A: ";
    cin >> kolomA;

    
    cout << "Masukkan jumlah baris matriks B: ";
    cin >> barisB;
    cout << "Masukkan jumlah kolom matriks B: ";
    cin >> kolomB;

    
    if (barisA != barisB || kolomA != kolomB) {
        cout << "Ukuran matriks harus sama untuk dapat dijumlahkan!" << endl;
        return 1; 
    }

    
    int matriksA[barisA][kolomA], matriksB[barisB][kolomB], hasil[barisA][kolomA];

    
    cout << "Masukkan elemen matriks A:" << endl;
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            cin >> matriksA[i][j];
        }
    }

    cout << "Masukkan elemen matriks B:" << endl;
    for (int i = 0; i < barisB; i++) {
        for (int j = 0; j < kolomB; j++) {
            cin >> matriksB[i][j];
        }
    }

   
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
        }
    }

    cout << "Hasil penjumlahan matriks:" << endl;
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}