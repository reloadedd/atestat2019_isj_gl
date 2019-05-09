#include <iostream>

using namespace std;

int main()
{
    unsigned n, i;

    cin >> n;

    i = 10;     // primul numar in care sunt egale cifrele pare cu cele impare
    while (n) {
        unsigned pare = 0, impare = 0, copie;
        copie = i;
        while (copie) {
            if ((copie % 10) % 2 == 0)
                pare++;
            else
                impare++;
            copie /= 10;
        }
        if (pare == impare) {
            cout << i << ' ';
            n--;
        }
        i++;
    }
    return 0;
}