// Към кой if спада else? (Най-често срещаната уловка):

// В C++ има правило, наречено "Dangling else" (висящ else). То гласи, че операторът else винаги се свързва с най-близкия предходен if, който няма собствено else.

// Това означава, че else блокът принадлежи на вътрешния if (x > 5), а не на външния if (x > 2).

#include <iostream>

using namespace std;

int main() {
    int x = 3;
    if (x > 2)
        if (x > 5)
            cout << "OK" << endl;
    else
        cout << "Not OK" << endl;

    // Not OK
    return 0;
}