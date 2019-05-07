#include <iostream>
#include <fstream>
#define DIM_MAX 100     // Dimensiunea maxima

using namespace std;

unsigned int n, m, matrix[DIM_MAX][DIM_MAX];
ifstream f("matrice.in");
ofstream g("matrice.out");

void sterge_linie_coloana(unsigned indice) {
    for (unsigned i = indice; i < n - 1; i++)   // Stergere linie
        for (unsigned j = 0; j < m; j++)
            matrix[i][j] = matrix[i + 1][j];
    n--;
    
    for (unsigned i = 0; i < n; i++)            // Stergere coloana
        for (unsigned j = indice; j < m - 1; j++)
            matrix[i][j] = matrix[i][j+1];
    m--;
}

unsigned determina_pozitie_minim() {   // Va fi folosit atat ca linie, cat si coloana
    unsigned minim = matrix[0][0], indice;

    for (unsigned int i = 1; i < n; i++)
        if (minim > matrix[i][i]) { 
            minim = matrix[i][i];
            indice = i;
        }
    return indice;
}

void scrie_matrice() {
    for (unsigned int i = 0; i < n; i++) {
        for (unsigned int j = 0; j < m; j++)
            g << matrix[i][j] << ' ';
        g << '\n';
    }
}

void citeste_matrice() {
    f >> n;
    m = n;
    for (unsigned int i = 0; i < n; i++)
        for (unsigned int j = 0; j < m; j++)
            f >> matrix[i][j];
}

int main() {
    citeste_matrice();

    for (unsigned int i = 1; i <= 2; i++) {
        unsigned pozitie = determina_pozitie_minim();
        sterge_linie_coloana(pozitie);
    }

    scrie_matrice();
    f.close();
    g.close();
    return 0;
}