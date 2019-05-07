#include <iostream>
#define DIM_MAX 1000

int X[DIM_MAX], n;

using namespace std;

int determina_maxim() {
    int maxim = X[0];
    for (int i = 1; i < n; i++)
        if (maxim < X[i])
            maxim = X[i];
    return maxim;
}

int determina_minim() {
    int minim = X[0];
    for (int i = 1; i < n; i++)
        if (minim > X[i])
            minim = X[i];
    return minim;
}

int main() {
    int diferenta, nr = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> X[i];
    
    diferenta = determina_maxim() - determina_minim();
    for (int i = 0; i < n; i++)
        if (X[i] == diferenta)
            nr++;
    cout << nr;
    return 0;
}