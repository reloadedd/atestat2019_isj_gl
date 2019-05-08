#include <iostream>
#define DIM_MAX 100     // Dimensiune maxima

using namespace std;

void interschimba(unsigned * v, unsigned n) {
    unsigned prim = 0;
    for (unsigned i = 0; i < n; i++)
        if (v[i] % 2 == 0) {
            unsigned aux = v[i];
            v[i] = v[prim];
            v[prim] = aux;
            prim++;
        }
}

int main() {
    unsigned n, v[DIM_MAX];

    cin >> n;
    for (unsigned i = 0; i < n; i++)
        cin >> v[i];
        
    interschimba(v, n);
    for (unsigned i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << endl;

    return 0;
}