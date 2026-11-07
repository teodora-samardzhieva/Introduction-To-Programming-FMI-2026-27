#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }

        cout << endl;
    }

    for(int i = n-1; i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}

// Задача 14.
// Да се напише програма, която приема цяло число n и отпечатва следната фигура от числа (огледален триъгълник):

// Пример:

// Вход:

// 5
// Изход:

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1