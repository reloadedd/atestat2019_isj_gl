#include <iostream>

using namespace std;

int main()
{
    unsigned n, numar1, numar2;
    cin >> n;

    numar1 = 1;
    numar2 = 2;

    while (numar1 * numar2 < n) {
        numar1 = numar2;
        numar2++;
    }

    if (numar1 * numar2 == n)
        cout << n << " = " << numar1 << '*' << numar2;
    else
        cout << "IMPOSIBIL";
    return 0;
}