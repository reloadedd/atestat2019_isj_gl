#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[51], a[11], b[11], *p, sir_nou[101];
    unsigned index = 0, i = 0;

    cin >> s >> a >> b;

    p = strstr(s, a);
    while (p != NULL) {
        for (; i < p - s; i++)  // Creez un nou sir pana ajung la primul caracter din sirul a
            sir_nou[index++] = s[i];
        sir_nou[index] = NULL;
        strcat(sir_nou, b); // adaug sirul b la ce era inainte
        index += strlen(b); // modific dimensiunea sirului nou
        i += strlen(a);     // modific si indicele ce parcurge sirul initial
        p = strstr(p + 1, a);   // trec la urmatoarea aparitie a sirului a in s
    }

    for (; s[i]; i++)   // adaug in noul sir ceea ce a mai ramas dupa ultima aparitie a sirului a
        sir_nou[index++] = s[i];
    sir_nou[index] = NULL;  // transform vectorul de caractere in sir de caractere
    strcpy(s, sir_nou);
    cout << sir_nou;

    return 0;
}   