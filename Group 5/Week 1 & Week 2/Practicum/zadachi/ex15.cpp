// Задача 15. Напишете програма, която приема номер на кредитна карта(16 цифри). Програмата да изведе същия този номер, но със скрити първите 12 цифри.

// Вход:
//  7834952438523794
// Изход:
//  ХХХХХХХХХХХХ3794

#include <iostream>
#include <string>

using namespace std;

int main() {
    string cardNumber;
    cin >> cardNumber;

    // Проверяваме дали дължината е 16 символа 
    if (cardNumber.length() == 16) {
        // Заменяме първите 12 символа със символа 'X'
        for (int i = 0; i < 12; i++) {
            cardNumber[i] = 'X';
        }
    }

    // Извеждаме маскирания номер
    cout << cardNumber << endl;

    return 0;
}