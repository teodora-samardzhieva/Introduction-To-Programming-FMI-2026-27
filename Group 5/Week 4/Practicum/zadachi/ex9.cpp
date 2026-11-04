#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        int lastDigit = i % 10; 

        if (lastDigit == 6 || lastDigit == 8) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}

// Задача 9
// Да се напише програма, която въвежда цяло число n и отпечатва сумата на всички числа от 1 до n, които завършват на 6 или 8.

// Пример:

// Вход:

// 30
// Изход:

// 102