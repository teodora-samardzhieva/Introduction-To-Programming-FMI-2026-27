#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = 0;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        sum += num;
    }

    cout << sum << endl;

    return 0;
}

// Задача 1. Да се напише програма, която въвежда от клавиатурата цялото число n > 0, след това въвежда още n числа и отпечатва сумата им.

// Пример:

// Вход:
// 3
// 4 6 9

// Изход:
// 19