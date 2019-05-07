#include <iostream>
#include <cstring>

using namespace std;

void interschimba(char *cuvant) {
    unsigned k = 0;

    if (strlen(cuvant) % 2 != 0)    // Nr. impar de litere
        for (unsigned i = strlen(cuvant) / 2 + 1; i < strlen(cuvant); i++) {
            char aux = cuvant[i];
            cuvant[i] = cuvant[k];
            cuvant[k] = aux;
            k++;
        }
    else                            // Nr. par de litere
        for (unsigned i = strlen(cuvant) / 2; i < strlen(cuvant); i++) {
            char aux = cuvant[i];
            cuvant[i] = cuvant[k];
            cuvant[k] = aux;
            k++;
        }
}

int main() {
    char cuvant[21];

    cin >> cuvant;

    interschimba(cuvant);
    cout << cuvant << endl;

    return 0;
}