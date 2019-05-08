#include <iostream>

using namespace std;

unsigned nr_divizori(unsigned x) {

    unsigned nr = 2;
    for (unsigned d = 2; d * d <= x; d++)
    if (x % d == 0) {
        nr++;
        if (d * d < x)
            nr++;
    }
    return nr;
}

int main()
{
    unsigned a, b, total = 0;
    cin >> a >> b;

    for (unsigned i = a; i <= b; i++)
        if (nr_divizori(i) == 3)
            total++;
    cout << total;
    return 0;
}