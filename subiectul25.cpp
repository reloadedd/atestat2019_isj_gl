#include <iostream>

using namespace std;

bool este_prim(unsigned x) {
    if (x < 3 || x % 2 == 0)    // Chestia asta va fi adevarata doar cand x e 2 (2 e numar prim)
        return (x == 2);    // Deci daca x e numar par, 0 sau 1 => expresia se evalueaza false,
    else                    // de unde rezulta ca nu e numar prim, easy
        for (unsigned d = 3; d * d <= x; d += 2)
            if (x % d == 0)
                return false;
    return true;
}

int main() {
    unsigned n, prefixe[9], k = 0;
    bool superprim = true;
    cin >> n;

    while (n && superprim) {
        if (este_prim(n))   // Daca prefixul asta e prim, atunci il adaug in vector
            prefixe[k++] = n;
        else
            superprim = false;  // Daca un prefix nu e prim => numarul nu e superprim 
        n /= 10;
    }

    if (superprim)
        for (unsigned i = 0; i < k; i++)
            cout << prefixe[i] << ' ';
    else
        cout << superprim;     // false, iar facandu-se conversia explicita, o sa afiseze 0
    
    return 0;
}