#include <iostream>
#define DIM_MAX 24  // Dimensiune maxima

using namespace std;

int main() {
    unsigned n, matrix[DIM_MAX][DIM_MAX];

    cin >> n;

    // Elementele de pe diagonala principala
    for (unsigned i = 0; i < n; i++)
        matrix[i][i] = 2;

    // Elementele deasupra diagonalei principale
    for (unsigned i = 0; i < n; i++)
        for (unsigned j = i + 1; j < n; j++)
            matrix[i][j] = 1;
    
    // Elementele de sub diagonala principala
    for (unsigned i = 0; i < n; i++)
        for (unsigned j = 0; j < i; j++)
            matrix[i][j] = 3;
    
    // Afisare matrice
    for (unsigned i = 0; i < n; i++) {
        for (unsigned j = 0; j < n; j++)
            cout << matrix[i][j] << ' ';
        cout << endl;
    }
}