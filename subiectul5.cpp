#include <iostream>
#include <cmath>

using namespace std;

unsigned oglindit(unsigned x) {

    unsigned ogl = 0;
    while (x) {
        ogl = ogl * 10 + x % 10;
        x /= 10;
    }
    return ogl;
}

int main()
{
    unsigned a, b, nr = 0;

    cin >> a >> b;

    for (unsigned i = a; i <= b; i++)
        if (sqrt(i) == (int)sqrt(i) && sqrt(oglindit(i)) == (int)sqrt(oglindit(i)))
            nr++;
    cout << nr;
    return 0;
}