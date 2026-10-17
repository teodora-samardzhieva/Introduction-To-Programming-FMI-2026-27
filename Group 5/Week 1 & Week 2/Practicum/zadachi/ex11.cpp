// Задача 11. Напишете програма, която чете 4 цели числа - a,b,c и d. Програмата да извежда:

// 0, ако c и d са извън интервала [a,b];
// 1, aко c или d е в интервала [a,b];
// 2, ако c и d са в интервала [a,b].
// Можем да приемем, че във всеки вход a ще е по-малко от b.

// Вход:
//  1 3 2 0
// Изход:
//  1

#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    // [a, b]
    bool isCInInt = (c >= a && c <= b);
    bool isDInInt = (d >= a && d <= b);
    if(!isCInInt && !isDInInt){
        // 0
        cout << 0;
    } else if (isCInInt || isDInInt){
        // 1
        cout << 1;
    } else if (isCInInt && isDInInt) {
        // 2
        cout << 2;
    }

    return 0;
}