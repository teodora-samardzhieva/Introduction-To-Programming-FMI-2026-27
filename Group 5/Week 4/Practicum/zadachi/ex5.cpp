#include <iostream>
using namespace std;

int main(){

    int num;
    int smallestNum = 0;
    int negativeNumCount = 0;

    while(cin >> num){
        if(num < 0){
            negativeNumCount++;
                
            if(smallestNum > num) {
                smallestNum = num;
            }
                
            if(negativeNumCount == 3) break;
        } else {
            negativeNumCount = 0;
            smallestNum = 0;
        }
    } 

    cout << smallestNum;

    return 0;
}

// Задача 5. Напишете програма, която приема цели числа и приключва работа, когато се въведат последователно 3 отрицателни числа. Накрая да се изведе най-малкото от тях.

// Пример:

// Вход:

// 5
// -1
// -33
// 4
// -2
// -22
// -3
// Изход:

// -22