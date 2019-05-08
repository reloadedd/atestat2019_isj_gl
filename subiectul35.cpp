#include <iostream>
#include <fstream>
#define DIM_MAX 30     // Dimensiune maxima

using namespace std;

int n, m, matrix[DIM_MAX][DIM_MAX];

void interschimba(int p, int q) {
    for (int j = 0; j < n; j++) {
        int aux = matrix[p - 1][j];
        matrix[p - 1][j] = matrix[q - 1][j];
        matrix[q - 1][j] = aux;
    }
}

void citeste_matrice() {
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
}

void afiseaza_matrice() {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << ' ';
        cout << endl;
    }
}

int main() {
    int p, q;

    citeste_matrice();
    cin >> p >> q;  // p si q trebuie sa inceapa de la 1
    interschimba(p, q);
    afiseaza_matrice();
}