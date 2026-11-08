// 3. Напишете еквивалентен код на програмният фрагмент, показан вдясно, като използвате само оператор(и) if и/или if-else, без да използвате оператор switch. Обосновете написаният от вас код.

#include <iostream>

using namespace std;

int main() {
    int s;
    cin >> s;

    switch (s) {
        case 0:
        case 1:
        case 2: cout << "simple"; break;
        case 3:
        case 4: cout << "ops ";
        case 5: cout << "five"; break;
    }

    // if (s == 0 || s == 1 || s == 2) {
    // cout << "simple";
    // }
    // else if (s == 3 || s == 4) {
    //     cout << "ops ";
    //     cout << "five";
    // }
    // else if (s == 5) {
    //     cout << "five";
    // }
    
    return 0;
}