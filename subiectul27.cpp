#include <iostream>

using namespace std;

int main()
{
    int n, lungime, lungime_maxima, x;

    cin >> n;

    lungime = lungime_maxima = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2 != 0) {
            if (lungime > lungime_maxima) {
                lungime_maxima = lungime;
                lungime = 0;
            }
        }else
            lungime++;
    }

    cout << lungime_maxima;
    return 0;
}