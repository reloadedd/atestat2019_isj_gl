#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    char blacklist[] = ".,!?", vers[256];
    ifstream f("poezie.in");
    ofstream g("poezie.out");

    while (f.getline(vers, 256)) {
        unsigned i;
        for (i = 0; i < strlen(vers) - 1; i++)
            if (!strchr(blacklist, vers[i]))
                g << vers[i];
        g << vers[i];   // Ultimul caracter ramas de pe rand

        if (!f.eof())   // Pentru a nu adauga o noua linie la final degeaba
            g << '\n';  // newline
    }

    f.close();
    g.close();
    return 0;
}