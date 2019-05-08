#include <iostream>
#include <cstring>
#define DIM_MAX 256

using namespace std;

int main() {
    char text[DIM_MAX], *p;
    unsigned nr_cuvinte = 0;

    cin.get(text, DIM_MAX);

    p = strtok(text, " ");
    while (p != NULL) {
        nr_cuvinte++;
        p = strtok(NULL, " ");
    }

    cout << nr_cuvinte;
}