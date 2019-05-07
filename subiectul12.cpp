#include <iostream>
#define DIMENSIUNE_MAXIMA 100

using namespace std;

unsigned n, matrix[DIMENSIUNE_MAXIMA][DIMENSIUNE_MAXIMA];

void fibonacci_generator() {
    static unsigned rang, linie;    // Variabilele statice sunt initializate cu 0!
    unsigned coloana = 0, fib1 = 1, fib2 = 1, fib3;
    
    for (unsigned i = 0; i < rang; i++) {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }

    matrix[linie][coloana++] = fib1;
    matrix[linie][coloana++] = fib2;
    for (unsigned i = 1; i <= n; i++) {
        fib3 = fib1 + fib2;
        matrix[linie][coloana++] = fib3;
        fib1 = fib2;
        fib2 = fib3;
    }
    rang++;
    linie++;
}

int main() {
    cin >> n;

    for (unsigned i = 0; i < n; i++) 
        fibonacci_generator();
    
    for (unsigned i = 0; i < n; i++) {
        for (unsigned j = 0; j < n; j++)
            cout << matrix[i][j] << ' ';
        cout << endl;
    }
    cout << endl;
    
    return 0;
}