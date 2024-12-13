#include <iostream>

using namespace std;

int main() {
    int m, n;

    cout << "Masukkan jumlah baris: ";
    cin >> m;
    cout << "Masukkan jumlah kolom: ";
    cin >> n;

    int matriks[m][n], transpose[n][m];

    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriks[i][j];
        }
    }

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matriks[i][j];
        }
    }

    cout << "Matriks transpose:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}