#include <iostream>

using namespace std;

bool prim(unsigned x) {
    if (x < 3 || x % 2 == 0)
        return (x == 2);
    for (unsigned d = 3; d * d <= x; d += 2)
        if (x % d == 0)
            return 0;
    return 1;
}

int main()
{
    unsigned a, b, nr = 0;

    cin >> a >> b;
    for (unsigned i = a; i <= b; i++)
        if (prim(i - 1) && prim(i + 1))
            nr++;
    cout << nr;
    return 0;
}