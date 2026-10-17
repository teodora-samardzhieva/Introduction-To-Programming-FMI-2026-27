// Задача 10. Напишете програма, която чете четирицифрено число и извежда сумата, произведението и средноаритметичното на цифрите му.

// Вход:
//  1234
// Изход:
//  Сбор: 10
//  Произведение: 24
//  Средноаритметично: 2.5

#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;

    // Извличане на четирите цифри на числото
    // int digit4 = number % 10;          // Последна цифра
    // int digit3 = (number / 10) % 10;   // Трета цифра
    // int digit2 = (number / 100) % 10;  // Втора цифра
    // int digit1 = number / 1000;        // Първа цифра

    int sum = (number / 1000) + ((number / 100) % 10) + ((number / 10) % 10) + (number % 10);

    int proizvedenie = (number / 1000) * ((number / 100) % 10) * ((number / 10) % 10) * (number % 10);

    double avg = ((number / 1000) + ((number / 100) % 10) + ((number / 10) % 10) + (number % 10)) / 4.0;

    cout << "Sum: " << sum << '\n';
    cout << "Proizvedenie: " << proizvedenie << '\n';
    cout << "Average: " << avg << '\n';
    // 1234 / 1000 = 1;
    // 12314 / 100 = 12, 12 % 10 = 2;
    // 1234 % 100 = 34, 34/10 = 3;
    // 1234 % 1000 = 4;

    return 0;
}