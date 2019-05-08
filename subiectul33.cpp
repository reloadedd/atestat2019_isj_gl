#include <iostream>
#define DIM_MAX 100     // Dimensiune maxima

using namespace std;

unsigned n, v[DIM_MAX];

void elimina(unsigned pozitie) {
    for (unsigned i = pozitie; i < n - 1; i++)
        v[i] = v[i + 1];
    --n;
}

int main() {

    cin >> n;
    for (unsigned i = 0; i < n; i++)
        cin >> v[i];

    for (int i = n - 1; i >= 0; i--)    // Daca parcurgem vectorul in ordine inversa
        if (v[i] % 2 == 0)  // nu se va sari peste cifrele pare consecutive
            elimina(i);
    
    for (unsigned i = 0; i < n; i++)
        cout << v[i] << ' ';
    return 0;
}           