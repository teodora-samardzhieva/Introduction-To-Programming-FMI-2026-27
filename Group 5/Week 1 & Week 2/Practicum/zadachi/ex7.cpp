// Задача 7. Напишете програма, която чете две реални числа и разменя стойностите им(пробвайте и без допълнителна променлива). Не използвайте готовата swap() функция

// Вход:
//  A: 1.6
//  B: 2.1
// Изход:
//  A: 2.1
//  B: 1.6

#include <iostream>

using namespace std;

int main() {
    double a, b;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;

    // Запазваме стойността на A във временна променлива
    double temp = a;
    a = b;          // Присвояваме стойността на B на A
    b = temp;       // Присвояваме старата стойност на A (от temp) на B

    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    return 0;
}

/* Вариант 2 без използване на допълнителна променлива
int main() {
    double a, b;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    
    return 0;
}
*/