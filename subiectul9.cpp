#include <iostream>

using namespace std;

int main() {
    unsigned n;
    cin >> n;

    for (unsigned i = 1001; i <= 9999; i++) {
        if (i % 10 == i / 1000 && (i / 10) % 10 == (i / 100) % 10)
            if (i % n == 0)
                cout << i << ' ';
    } 
    
    return 0;
}