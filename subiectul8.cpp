#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char propozitie[201], silaba[3];
    int nr_aparitii = 0;

    cin.getline(propozitie, 201);
    cin >> silaba;

    char * p = strstr(propozitie, silaba);
    while (p != NULL) {
        nr_aparitii++;
        p = strstr(p + 1, silaba);  // Caut urmatoarea silaba in propozitie
    }
    cout << nr_aparitii << endl;

    return 0;
}