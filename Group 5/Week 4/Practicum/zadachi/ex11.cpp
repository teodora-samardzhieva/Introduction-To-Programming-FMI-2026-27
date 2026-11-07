#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int temp = i;
        int digitSum = 0;

        while (temp > 0) {
            digitSum += temp % 10; 
            temp /= 10;   
        }

        if (digitSum % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    
    return 0;
}

// Задача 11.
// Да се напише програма, която въвежда цяло положително число n и отпечатва всички числа от 1 до n, за които сумата на цифрите им е четна.

// Пример:

// Вход:

// 20
// Изход:

// 2 4 6 8 11 13 15 17 19 20