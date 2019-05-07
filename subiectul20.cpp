#include <iostream>

using namespace std;

int main() {
    unsigned n, x, putere1 = 0, putere2 = 2;
    bool stop = false;

    cin >> n >> x;

    // Ideea e in felul urmator:
    // x si n trebuie sa fie cuprinse intre 2 puteri consecutive de-a lui 2
    // 17 si 29 au acelasi numar de cifre daca sunt trecute in baza 2 deoarece
    // 16 <= 17 < 32 si 16 <= 29 < 32
    // Cand numarul este chiar putere de-a lui 2, atunci are o cifra in plus fata de numarul precedent
    // De exemplu: numarul 31 are 5 cifre (11111), iar numarul 32 are 6 cifre(100000)
    while (!stop) {
        if (n >= putere1 && n < putere2 && x >= putere1 && x < putere2) {
            stop = true;
            cout << "Au acelasi numar de cifre dacă sunt trecute în baza 2";
        }

        if (putere1 > n && putere1 > x) {   // Daca numere sunt mai mari decat puterea cea mai
            stop = true;    // mica din cele 2 => nu au acelasi numar de cifre
            cout << "Nu au acelasi numar de cifre daca sunt trecute in baza 2";
        }
        putere1 = putere2;
        putere2 *= 2;
    }

    return 0;
}