#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 2 || n == 3) {
        cout << 1 << endl;
        return 0;
    }

    long long prev2 = 0;   // fib(1)
    long long prev1 = 1;   // fib(2)
    long long current = 1; // fib(3)

    for (int i = 4; i <= n; i++) {
        prev2 = prev1;
        prev1 = current;
        current = prev1 + prev2;
    }

    cout << current << endl;

    return 0;
}

// Задача 7. Дефинираме редица на Фибоначи по следния начин:

// fib(1) = 0

// fib(2) = 1

// fib(3) = 1

// fib(n) = fib(n - 1) + fib(n - 2)

// Пример:

// Вход:

// 7
// Изход:

// 8