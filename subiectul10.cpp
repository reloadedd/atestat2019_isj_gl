#include <iostream>
#define DIM_MAX 1000

using namespace std;

int main() {
    unsigned V[DIM_MAX], n, element1, element2, element3;
    bool stop = false;

    cin >> n;
    for (unsigned i = 0; i < n; i++)
        cin >> V[i];
    
    element1 = V[0] % 2;
    element2 = V[1] % 2;
    for (unsigned i = 2; i < n && !stop; i++) {
        element3 = V[i] % 2;
        if ((element1 == element2) && (element2 == element3)) 
            stop = true;
        element1 = element2;
        element2 = element3;
    }

    stop ? cout << "DA": cout << "NU";
    return 0;
}