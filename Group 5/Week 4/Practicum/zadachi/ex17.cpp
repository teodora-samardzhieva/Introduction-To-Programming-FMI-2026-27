#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool first = true;

    while (n > 0) {
        int power = 0;
        int value = 1; // 2^0 = 1

        while (value * 2 <= n) {
            value *= 2;
            power++;
        }

        if (!first) {
            cout << " + ";
        }
        cout << "2^" << power;
        first = false;

        n -= value;
    }

    cout << endl;
    
    return 0;
}

// Задача 17. Да се напише програма, която приема цяло число и го отпечатва като сума на степени 2-ката, без повторение. (всяко число има единствено такова представяне)

// Пример:

// Вход:

// 5
// Изход:

// 2^2 + 2^0
// Вход:

// 15
// Изход:

// 2^3 + 2^2 + 2^1 +2^0