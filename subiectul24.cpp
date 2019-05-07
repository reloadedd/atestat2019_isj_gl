#include <iostream>

using namespace std;

unsigned suma_exponenti(unsigned x) {
    unsigned divizor = 2, suma = 0;

    while (x > 1) {
        unsigned putere = 0;

        while (x % divizor == 0) {
            x /= divizor;
            putere++;
        }
        suma += putere;
        divizor++;

        if (x > 1 && divizor * divizor > x)     // Daca d * d depaseste numarul, iar x nu este 1,
            divizor = x;    // atunci decidem ca x este numar prim si trecem direct la el
    }

    return suma;
}

int main() {
    unsigned x;

    cin >> x;

    if (suma_exponenti(x) == 1)
        cout << suma_exponenti(x) << ".Este numar prim.";
    else
        cout << suma_exponenti(x) << ".Nu este numar prim.";
    
    return 0;
}