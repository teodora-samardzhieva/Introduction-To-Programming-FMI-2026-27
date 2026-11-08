#include <iostream>

using namespace std;

int main() {
    // Задача. Напишете еквивалентен код на програмния фрагмент, като използвате само оператор(и) switch:
    int score;
    cin >> score;

    if (score > 0 && score < 10)
        if (score < 5) {
            cout << "Fail...."; }
        else if (score < 7) {
            cout << "Pass..."; }
        else cout << "Excellent...";
    return 0;
}


// switch (score) {
//     case 1:
//     case 2:
//     case 3:
//     case 4:
//         cout << "Fail....";
//         break;
//     case 5:
//     case 6:
//         cout << "Pass...";
//         break;
//     case 7:
//     case 8:
//     case 9:
//         cout << "Excellent...";
//         break;
//     default:
//         // Изпълнява се, ако score е извън интервала (<= 0 или >= 10)
//         break;
// }