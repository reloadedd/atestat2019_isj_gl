#include <iostream>
#include <fstream>
#define DIM_MAX 30     // Dimensiune maxima

using namespace std;

int n, m, matrix[DIM_MAX][DIM_MAX];

int produs_coloana(int indice_coloana) {
    int produs = 1;     // Daca toate elementele de pe o coloana ar fi 2 => produsul ar
    for (int i = 0; i < m; i++) // fi egal cu 2 ^ 30, prin urmare o variabila de tip int 
        produs *= matrix[i][indice_coloana];    // este suficienta
    
    return produs;
}

int main() {
    ifstream f("atestat.txt");   // Fisierul asta n-are nume, nu? Inventez eu, nu-i problema.
    int maxim = 0, indici[DIM_MAX], k = 0;

    f >> m >> n;    // Atentie! Conform cerintei, m este numarul de linii, iar n de coloane
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            f >> matrix[i][j];

    for (int j = 0; j < n; j++) {
        int produs = produs_coloana(j);
        if (maxim < produs) {
            maxim = produs;
            k = 0;
            indici[k++] = j + 1;
        }else if (maxim == produs)
            indici[k++] = j + 1;
    }

    for (int i = 0; i < k; i++)     // indicii incep de la 1, deoarece in cerinta nu este
        cout << indici[i] << ' ';   // specificat (nu la variabila "i" ma refer, ci la valorile vectorului "indici")
}
