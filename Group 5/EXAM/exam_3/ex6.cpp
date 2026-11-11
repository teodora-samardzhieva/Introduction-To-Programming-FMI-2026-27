#include <iostream>

using namespace std;

// Задача. Напишете еквивалентен код на следния програмен фрагмент, като използвате само оператор(и) switch:

int main() {
    int x;
    cin >> x;

    ((x == 2 || x == 7) ? cout << "one" :
        (x == 8 ? cout << 4 : cout << "undef"));
    return 0;
}

// #include <iostream>

// using namespace std;

// int main() {
//     int x;
//     cin >> x;
    
//     switch (x) {
//         case 2:
//         case 7:
//             cout << "one";
//             break;
//         case 8:
//             cout << 4;
//             break;
//         default:
//             cout << "undef";
//             break;
//     }
//     return 0;
// }