#include <iostream>

using namespace std;

int main() {
    int x, y, cifre_x[10] = {0}, cifre_y[10] = {0};

    cin >> x >> y;

    while (x) {
        cifre_x[x%10]++;
        x /= 10;
    }

    while (y) {
        cifre_y[y%10]++;
        y /= 10;
    }

    for (int i = 0; i < 10; i++)
        if (cifre_x[i] && cifre_y[i])
            cout << i << ' ';
    return 0;
}
