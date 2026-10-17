// Задача 17. Да се напише прост калкулатор, който поддържа операциите +, -, *, / на две реални числа. От конзолата се прочита число, операция и още едно число и се извежда резултатът. Внимавайте с делението на 0!

// Пример:

// Вход:

// 3.5 * 2
// Изход:

// 7
// Вход:

// 32.3 / 0
// Изход:

// Error! You can't divide by 0!

#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    // Четем първото число, знака за операция и второто число
    cin >> num1 >> op >> num2;

    switch (op) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            // Проверка за деление на нула
            if (num2 == 0) {
                cout << "Error! You can't divide by 0!" << endl;
            } else {
                cout << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}