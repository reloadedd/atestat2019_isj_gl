#include <iostream>
#define DIM_MAX 200     // Dimensiune maxima

using namespace std;

int n, v[DIM_MAX];

void insereaza(int pozitie, unsigned valoare) {
    for (int i = n - 1; i >= pozitie; i--)
        v[i + 1] = v[i];
    v[pozitie] = valoare;
    n++;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n - 1; i++) {
        unsigned suma = v[i] + v[i + 1];
        insereaza(i + 1, suma);
        i++;
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';

    return 0;
}
