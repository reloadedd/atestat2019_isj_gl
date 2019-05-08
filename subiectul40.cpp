#include <iostream>
#include <cstring>
#include <cctype>
#define DIM_MAX 201

using namespace std;

int main() {
    char text[DIM_MAX];
    int cifra, expresie;
    cin.get(text, DIM_MAX);

    cifra = text[0] - '0';
    expresie = cifra;
    for (int i = 1; text[i]; i++) {
        if (text[i] == '+') {
            i++;
            cifra = text[i] - '0';
            expresie += cifra;
        }else if (text[i] == '-') {
            i++;
            cifra = text[i] - '0';
            expresie -= cifra;
        }
    }

    cout << expresie;
    return 0;
}