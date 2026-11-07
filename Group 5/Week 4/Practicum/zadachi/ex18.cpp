#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        int spaces = 2 * (n - i);
        for (int j = 0; j < spaces; j++) {
            cout << "  "; 
        }

        for (int j = i; j >= 1; j--) {
            cout << j << (j > 1 ? " " : "");
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        int spaces = 2 * (n - i);
        for (int j = 0; j < spaces; j++) {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j << (j > 1 ? " " : "");
        }
        cout << endl;
    }

    return 0;
}

// Задача 18. Да се напише програма, която приема цяло положително число n и отпечатва следната папионка:

// Пример:

// Вход:

// 4
// Изход:

// 1                  1
// 1 2              2 1
// 1 2 3          3 2 1
// 1 2 3 4 ---- 4 3 2 1
// 1 2 3          3 2 1
// 1 2              2 1
// 1                  1
// Вход:

// 2
// Изход:

// 1        1
// 1 2 -- 2 1
// 1        1