#include <iostream>

using namespace std;

int main() {
    int n;
    char s;
    cin >> n >> s;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * i - 1; j++) {
            cout << s;
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << s;
        }
        cout << endl;
    }
    


    return 0;
}

// Задача 16. Напишете програма, която иска от потребителя вход цифра N (2 <= N <= 9) и символ S.Програмата да извежда фигура съставена от символа във вид на ромб, както е показано на примерите.

// Пример:

// Вход:

// 5 *
// Изход:

//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *