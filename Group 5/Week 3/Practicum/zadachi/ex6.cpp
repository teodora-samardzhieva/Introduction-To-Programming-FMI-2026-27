#include <iostream>
using namespace std;

int main(){
    double num;
    cin >> num;

    int num2 = (int)num;

    if (num == 0) {
        cout << "The number is 0";
    } 
    else if(num == num2) {
        if(num2 % 2 == 0){
            cout << "Even integer";
        } else {
            cout << "Uneven integer"; 
        }
    } 
    else if(num > 0){
        cout << "Positive rational";
    } 
    else {
        cout << "Negative rational";
    }

    return 0;
}

// Задача Напишете програма, която получава число от конзолата и прави следните проверки върху него: проверка за цялост, като ако числото е цяло прави проверка за четност, а ако не е - за знака му. Накрая да се извежда текст за това.

// Пример:
// Вход:

// 4
// Изход:

// Even integer

// Вход:

// -5.5
// Изход:

// Negative rational