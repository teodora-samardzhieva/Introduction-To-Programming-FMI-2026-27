// 3. Напишете еквивалентен код на следният програмен фрагмент, като използвате само оператор(и) switch, без да използвате оператор if и тернарен оператор:

#include <iostream>

using namespace std;

int main() {
    int x, r;
    cin >> x;
    (x == 2 || x == 7) ? r = 1 : (x == 8 ? r = 0 : r = -1);;;
    cout << r;

    // switch (x) {
    //     case 2:
    //     case 7:
    //         r = 1;
    //         break;
    //     case 8:
    //         r = 0;
    //         break;
    //     default:
    //         r = -1;
    //         break;
    // }

    // cout << r;
    
    return 0;
}