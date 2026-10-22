
#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    int charA = num / 100;
    int charB = (num / 10) % 10;
    int charC = num % 10;
    
    if(charA == charB || charA == charC || charB == charC){
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}

// Задача Напишете програма, която проверява има ли сред цифрите на дадено положително трицифрено число две равни.

// Пример:
// Вход:

// 121
// Изход:

// true