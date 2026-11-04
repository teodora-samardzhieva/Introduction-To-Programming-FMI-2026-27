#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int divisorCount = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisorCount++;
        }
    }

    cout << divisorCount << endl;

    return 0;
}

// Задача 10.
// Да се напише програма, която въвежда цяло число n и отпечатва броя на делителите му.

// Пример:

// Вход:

// 12
// Изход:

// 6

