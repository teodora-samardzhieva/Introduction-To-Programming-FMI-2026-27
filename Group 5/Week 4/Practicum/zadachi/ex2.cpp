#include <iostream>
using namespace std;

int main(){
    int numCount;
    cin >> numCount;

    int biggestNum;
    cin >> biggestNum;
    
    for(int i = 1; i < numCount; i++){
        int num;
        cin >> num;

        if(num > biggestNum){
            biggestNum = num;
        }
    }

    cout << biggestNum;


    return 0;
}

// Задача 2. Да се напише програма, която намира най-голямото число измежду няколко неотрицателни числа, въведени от клавиатурата. На първия ред от стандартния вход да се въведе броя на числата, а на втория самите числа разделени с интервал. На първия ред от стандартния изход да се изведе най-голямото число.

// Пример:

// Вход:
// 5
// 2 7 10 54 3

// Изход:
// 54