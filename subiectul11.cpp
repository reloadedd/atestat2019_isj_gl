#include <iostream>
#define DIM_MAX 1000

using namespace std;

int main() {
    unsigned V[DIM_MAX], n, nr = 0;

    cin >> n;
    for (unsigned i = 0; i < n; i++)
        cin >> V[i];
    
    for (unsigned i = 0; i < n / 2; i++) {
        unsigned inceput = V[i], sfarsit = V[n - i - 1];
        while (inceput > 9)
            inceput /= 10;
        while (sfarsit > 9)
            sfarsit /= 10;
        
        if (inceput == sfarsit)
            nr++;
    }

    cout << nr;
    return 0;
}