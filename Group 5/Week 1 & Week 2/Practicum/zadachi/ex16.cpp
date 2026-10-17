// Задача 16. Напишете програма, която прочита положително цяло число n ∈ [1,7] и отпечатва на конзолата деня от седмицата, на който съответства n. Приемаме, че първият ден е Monday.

// След това променете програмата така, че, ако n > 7, да се изписва кой ден от седмицата ще е след n дни, ако приемем, че днес е Понеделник.

// Примери:

// Вход:

// 4
// Изход:

// Thursday
// Вход:

// 9
// Изход:

// Wednesday

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Тъй като седмицата има 7 дни, взимаме остатъка при деление на n с 7.
    // Използваме остатък от деление с 7: (n - 1) % 7
    // По този начин:
    // 1 -> 0 (Monday)
    // 2 -> 1 (Tuesday)
    // ...
    // 7 -> 6 (Sunday)
    // 8 -> 0 (Monday) и т.н.

    int dayIndex = (n - 1) % 7;

    switch (dayIndex) {
        case 0:
            cout << "Monday" << endl;
            break;
        case 1:
            cout << "Tuesday" << endl;
            break;
        case 2:
            cout << "Wednesday" << endl;
            break;
        case 3:
            cout << "Thursday" << endl;
            break;
        case 4:
            cout << "Friday" << endl;
            break;
        case 5:
            cout << "Saturday" << endl;
            break;
        case 6:
            cout << "Sunday" << endl;
            break;
    }

    return 0;
}