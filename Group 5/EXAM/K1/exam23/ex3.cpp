// 3. Напишете еквивалентен код на програмния
// фрагмент, показан вдясно, катто използвате само
// оператор(и) switch, без да използвате оператори
// if и/или тернарен оператор.:

#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x == 5 && y == 4) {
        cout << "OK";
    } else if (x == 4) {
        cout << x;
    } else {
        cout << "not ok";
    }

    // switch (x) {
    //     case 5:
    //         switch (y) {
    //             case 4:
    //                 cout << "OK";
    //                 break;
    //             default:
    //                 cout << "not ok";
    //                 break;
    //         }
    //         break;
            
    //     case 4:
    //         cout << x;
    //         break;
            
    //     default:
    //         cout << "not ok";
    //         break;
    // }

    return 0;
}


