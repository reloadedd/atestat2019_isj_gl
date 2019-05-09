#include <iostream>

using namespace std;

bool este_prim(unsigned n) {
    if (n < 3 || n % 2 == 0)
        return (n == 2);
    else
        for (unsigned d = 3; d * d <= n; d += 2)
            if (n % d == 0)
                return false;
    return true;
}

int main()
{
    unsigned n, prim1, prim2;

    cin >> n;

    prim1 = 2, prim2 = 3;
    for (unsigned i = 1; i <= n; i++) {
        cout << prim1 << ' ' << prim2;

        prim1 = prim2;
        prim2++;
        while (!este_prim(prim2))
            prim2++;
        if (i != n)     // Pentru a nu pune virgula unde nu trebuie
            cout << ", ";
    }
    return 0;
}