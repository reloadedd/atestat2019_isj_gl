#include <iostream>
#include <cmath>

using namespace std;

bool este_putere2(unsigned numar) {
    unsigned divizor = 2;

    while (numar % divizor == 0)    // Impart numarul la 2 pana nu se mai poate
        numar /= divizor;

    return (numar == 1);    // Daca numarul o sa devina 1, inseamna ca este puterea de-a lui 2
}

bool este_putere3(unsigned numar) {
    unsigned divizor = 3;

    while (numar % divizor == 0) 
        numar /= divizor;

    return (numar == 1);
}

int main() {
    unsigned a, b;

    cin >> a >> b;

    for (unsigned i = a; i <= b; i++)
        if (este_putere2(i) || este_putere3(i)) // Verific daca este putere de-a lui 2 sau 3
            cout << i << ' ';
    
    return 0;
}