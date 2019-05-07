#include <iostream>

using namespace std;

int main() {
    int x, cifre[9], k =0;

    cin >> x;

    while (x) {     // Pun toate cifrele numarului intr-un vector
        if ((x % 10) % 2 == 0)
            cifre[k++] = x % 10;
        x /= 10;
    }

    if (k)
        for (int i = k - 1; i >= 0; i--)    // Parcurg vectorul in ordine inversa
            cout << cifre[i] << ' ';
    else
        cout << "Nu exista cifre pare";
    
    return 0;
}