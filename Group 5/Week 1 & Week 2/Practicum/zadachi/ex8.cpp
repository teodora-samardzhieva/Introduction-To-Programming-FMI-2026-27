// Задача 8. Напишете програма, която чете 3 символа и изписва 1, ако сборът от ASCII кодовете им е четен, и 0, ако не е.

// Вход:
//  a f X
// Изход:
//  0

#include <iostream>
using namespace std;

int main()
{
    char a,b,c;
    cin >> a >> b >> c;

    int num1 = a - '0';
    int num2 = b - '0';
    int num3 = c - '0';
    // cout << num1 << num2 << num3;

    int sum = num1 + num2 + num3;
    // cout << sum;

    if(sum % 2 == 0){
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}