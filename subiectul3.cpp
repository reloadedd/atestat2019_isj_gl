#include <iostream>

using namespace std;

int main()
{
    unsigned x, nr = 0;
    float suma = 0;

    cin >> x;
    while (x) {
        if (x >= 10 && x <= 99) {
            suma += x;
            nr++;
        }
        cin >> x;
    }

    cout << suma / nr;
    return 0;
}