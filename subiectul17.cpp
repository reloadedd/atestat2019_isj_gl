#include <iostream>

using namespace std;

int main() {
    unsigned n, q;
    bool corect = true;
    cin >> n >> q;

    while (n && corect) {   // Baza de numeratie: numarul de simboluri utilizate
        if (n % 10 >= q)    // pentru a exprima un numar
            corect = false; // Daca vreo cifra a numarului este >= cu baza =>
        n /= 10;            // numarul nu este corect reprezentat in baza respectiva
    }

    corect ? cout << "DA": cout << "NU";
    return 0;
}