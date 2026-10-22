#include <iostream>
using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c;

    if(a > b && a > c){
        cout << a;
    } else if (b > a && b > c){
        cout << b;
    } else {
        cout << c;
    }
    
    return 0;
}

// 2. Задача Напишете програма, която въвежда три реални числа, намира и извежда най-голямото от тях.

// Пример:
// Вход:

// 2 3 5
// Изход:

// 5