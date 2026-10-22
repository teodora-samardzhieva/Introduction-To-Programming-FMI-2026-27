#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    int temp;
    
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    
    cout << a << " " << b << " " << c << endl;
    
    return 0;
    
    // if (a > b) {
    //     swap(a, b);
    // }

    // if (a > c) {
    //     swap(a, c);
    // }

    // if (b > c) {
    //     swap(b, c);
    // }

}

// Задача Да се напише програма, която сортира три цели числа във възходящ ред.

// Пример:
// Вход:

// 2 4 3
// Изход:

// 2 3 4