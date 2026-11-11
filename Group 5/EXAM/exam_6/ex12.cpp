// Задача. Напишете еквивалентен код на следния програмен фрагмент, като използвате само оператор(и) switch:

#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    if (a == 10)
        cout << "xyz";
    if ((a == 4) || (a == 6)) // независи от горното
        cout << "this!";
    if ((a >= 6) && (a <= 8)) // независим от горните
        cout << "correct";

    // switch (a) {
    //     case 4:
    //         cout << "this!";
    //         break;
    //     case 6:
    //         cout << "this!";
    //         cout << "correct"; 
    //         break;
    //     case 7:
    //     case 8:
    //         cout << "correct";
    //         break;
    //     case 10:
    //         cout << "xyz";
    //         break;
    //     default:
    //         break;
    // }

    return 0;
}