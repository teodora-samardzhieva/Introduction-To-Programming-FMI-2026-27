#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    int nFactoriel = num;
    // n! = n(n-1)...(n-k-1)
    // 3! = 3 . 2 . 1
    for(int k = 1; k < num-1; k++){
        nFactoriel *= (num - k);
    }

    cout << nFactoriel;

    return 0;
}

// Задача 3. Да се прочетe от конзолата цяло число и да се намери факториелът му.

// Пример:

// Вход:
// 5
// Изход:
// 120