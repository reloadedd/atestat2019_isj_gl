#include <iostream>

using namespace std;

int main() {
    int x, frecventa[10] = {0};

    cin >> x;

    while (x) {
        frecventa[x % 10]++;
        x /= 10;
    }

    for (int i = 9; i >= 0; i--)
        while (frecventa[i]) {
            cout << i;
            frecventa[i]--;
        }
    return 0;
}
