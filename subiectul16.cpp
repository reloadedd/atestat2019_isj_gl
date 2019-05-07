#include <iostream>

using namespace std;

void creeaza_vector_din_numar(unsigned numar, unsigned * cifre, unsigned & k) {
    while (numar) {
        cifre[k++] = numar % 10;
        numar /= 10;
    }
}

void genereaza_numere(unsigned * cifre, unsigned k) {
    int skip = 0;   // Sari peste cifra de pe pozitia asta
    while (skip < k) {
        for (int j = k - 1; j >= 0; j--)
            if (j == skip)
                continue;   // Trece la urmatorul pas, fara a face nimic la pasul curent
            else            // E ceva gen: treci prin fata liceului, te uiti la el
                cout << cifre[j];   // si pleci mai departe
        cout << endl;
        skip++;
    }
}

int main() {
    unsigned cifre[10], k = 0, n;

    cin >> n;

    creeaza_vector_din_numar(n, cifre, k);
    genereaza_numere(cifre, k);

    return 0;
}