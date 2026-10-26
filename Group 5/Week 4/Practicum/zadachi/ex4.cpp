#include <iostream>
using namespace std;

int main(){

    int num;
    int sum = 0;
    int positiveNumCount = 0;

    while(cin >> num){
        if(num > 0){
            positiveNumCount++;
            sum += num;

            if(positiveNumCount == 5) break;
        }
    } 

    cout << sum;

    return 0;
}

// Задача 4. Напишете програма, която приема цели числа и приключва работа, когато се въведат 5 положителни числа. Накрая да се изведе сумата от всички положителни числа.

// Пример:

// Вход:
// 12
// 10
// -9
// 11
// -1
// -2
// 1
// 5

// Изход:
// 39