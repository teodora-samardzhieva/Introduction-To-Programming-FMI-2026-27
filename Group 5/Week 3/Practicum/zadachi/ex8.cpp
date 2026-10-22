#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int temp;
    if (a < b) { temp = a; a = b; b = temp; }
    if (a < c) { temp = a; a = c; c = temp; }
    if (b < c) { temp = b; b = c; c = temp; }

    // 'a' is largest, 'b' is middle, 'c' is smallest
    int largestNum = a * 100 + b * 10 + c;
    cout << largestNum << endl;

    return 0;
}

// Задача Да се напише програма, която получава 3 цифри и изписва на конзолата най-голямото число, което може да се получи от тях. Помислете за някой специфичен вход.

// Пример:
// Вход:

// 0 1 2
// Изход:

// 210
