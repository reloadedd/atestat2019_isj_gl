#include <iostream>
#define DIM_MAX 1000    // Dimensiunea maxima

using namespace std;

int main()
{
    int n;
    bool adevarat = true;
    unsigned X[DIM_MAX];

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> X[i];

    for (int i = 0; i < n - 1 && adevarat; i++)
        if (X[i] % 2 == X[i + 1] % 2)   // Daca da, inseamna ca sunt 2 elemente care au aceeasi
            adevarat = false;           // paritate => vectorul nu alterneaza ca paritate
    
    adevarat ? cout << "DA": cout << "NU";

    return 0;
}