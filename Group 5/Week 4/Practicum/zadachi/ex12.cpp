#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int currentNumber = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) { 
            cout << currentNumber << " ";
            currentNumber++; 
        }
        cout << endl; 
    }

    return 0;
}

// Задача 12.
// Да се напише програма, която въвежда цяло число n и отпечатва числов триъгълник. На i-тия ред да има i на брой числа, започващи от 1 и нарастващи с всяка стъпка.

// Пример:

// Вход:

// 4
// Изход:

// 1
// 2 3
// 4 5 6
// 7 8 9 10