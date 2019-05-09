#include <iostream>
#include <fstream>
#define DIM_MAX 100

using namespace std;

unsigned n, m, matrix[DIM_MAX][DIM_MAX], linii[DIM_MAX], p;
ifstream f("matrice2.in");  // numele fisierului trebuie sa fie matrice.in, insa eu mai aveam deja
ofstream g("matrice2.out"); // un fisier cu numele asta. La atestat schimbati numele fisierului !

void citeste_matrice() {
    f >> n >> m;
    for (unsigned int i = 0; i < n; i++)
        for (unsigned int j = 0; j < m; j++)
            f >> matrix[i][j];
}

void scrie_matrice() {
    for (unsigned int i = 0; i < p; i++) {
        for (unsigned int j = 0; j < m; j++)
            g << matrix[linii[i]][j] << ' ';
        g << '\n';
    }
}

void determina_linii_max() {
    unsigned frecventa[11] = {0}, maxim = 0;

    for (unsigned int i = 0; i < n; i++) {
        for (unsigned h = 0; h < 11; h++)
            frecventa[h] = 0;

        unsigned diferite = 0;
        for (unsigned int j = 0; j < m; j++)
            frecventa[matrix[i][j]]++;
        for (unsigned int k = 0; k < 11; k++) {
            if (frecventa[k] == 1)
                diferite++;
        }
        if (diferite > maxim) {
            maxim = diferite;
            p = 0;
            linii[p++] = i;
        }else if (diferite == maxim)
            linii[p++] = i;
    }
}

int main()
{
    citeste_matrice();
    determina_linii_max();
    scrie_matrice();

    f.close();
    g.close();
    return 0;
}