// Задача 4. Напишете програма, която чете 2 числа и изписва техните сбор, разлика, произведение и частно.

// Вход:
//  10 4
// Изход:
//  Сбор: 14
//  Разлика: 6
//  Произведение: 40
//  Частно: 2

#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    cin >> num1 >> num2;

    cout << "Sbor: " << num1 + num2 << endl;
    cout << "Razlika: " << num1 - num2 << endl;
    cout << "Proizvedenie: " << num1 * num2 << endl;
    
    // Проверка за деление на нула, за да избегнем грешка в програмата
    if (num2 != 0) {
        cout << "Chastno: " << num1 / num2 << endl;
    } else {
        cout << "Chastno: Delenie na nula e nedostypno!" << endl;
    }

    return 0;
}