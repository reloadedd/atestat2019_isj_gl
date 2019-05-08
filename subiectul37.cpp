#include <iostream>
#include <fstream>
#define DIM_MAX 30     // Dimensiune maxima

using namespace std;

int main() {
    int n, m, matrix[DIM_MAX][DIM_MAX], k;
    ifstream f("atestat.in");

    f >> m >> n >> k;   // k incepe de la 1
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            f >> matrix[i][j];
    
    for (int i = k - 1; i < m - 1; i++) 
        for (int j = 0; j < n; j++) 
            matrix[i][j] = matrix[i + 1][j];
    m--;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << ' ';
        cout << endl;
    }

    f.close();
    return 0;
}