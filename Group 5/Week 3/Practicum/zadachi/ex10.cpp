#include <iostream>
using namespace std;

int main() {
    int card1, card2;
    cin >> card1 >> card2;

    int points1, points2;

    if (card1 == 1) {
        points1 = 11; // Асо
    } else if (card1 >= 11 && card1 <= 13) {
        points1 = 10; // Вале, Дама, Поп
    } else {
        points1 = card1;
    }

    if (card2 == 1) {
        points2 = 11; // Асо
    } else if (card2 >= 11 && card2 <= 13) {
        points2 = 10; // Вале, Дама, Поп
    } else {
        points2 = card2;
    }

    int totalPoints = points1 + points2;

    // Ако има две Аса (11 + 11 = 22), едното става 1 точка, за да не надхвърля 21
    if (totalPoints > 21 && (card1 == 1 || card2 == 1)) {
        totalPoints -= 10;
    }

    if (totalPoints > 21) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

// Задача Да се напише програма, която приема 2 числа, които символизират карти, където 11 е вале, 12 е дама, 13 е поп, а 1 е асо. Да се изведе дали въпросната ръка преминава 21 по правилата на играта Блек Джек.

// Пример:
// Вход:
// 11 9

// Изход:
// false