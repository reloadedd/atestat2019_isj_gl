#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("numere2.txt");  // Numele fisierului trebuie sa fie numere.txt, insa eu mai am
    unsigned x, max1, max2;     // deja un fisier cu numele asta. La atestat trebuie sa fie
                                // numele corect
    max1 = 99;
    max2 = 98;
    while (f >> x) {
        if (x == max1) {
            max1--;
            max2--;
        }
        if (x == max2)
            max2--;
    }
    cout << max1 << ' ' << max2;
    f.close();
    return 0;
}