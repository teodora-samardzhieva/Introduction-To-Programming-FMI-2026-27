#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    char c1, c2, c3, c4, c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    char a1 = tolower(c1);
    char a2 = tolower(c2);
    char b1 = tolower(c3);
    char b2 = tolower(c4);
    char num = tolower(c5);

    // Определяне на границите на множествата 
    char minA = min(a1, a2);
    char maxA = max(a1, a2);
    char minB = min(b1, b2);
    char maxB = max(b1, b2);

    // Проверка дали 5-тата буква принадлежи на съответните множества поотделно
    bool inA = (num >= minA && num <= maxA);
    bool inB = (num >= minB && num <= maxB);

    // 1. Обединение на A и B (A U B)
    bool inUnion = inA || inB;

    // 2. Сечение на A и B (A ∩ B)
    bool inIntersection = inA && inB;

    // 3. Разлика на A с B (A \ B)
    bool inDifference = inA && !inB;

    // 4. Принадлежи ли само в едно от множествата
    bool inOnlyOne = inUnion && !inIntersection;

    cout << boolalpha;
    cout << inUnion << ", " 
         << inIntersection << ", " 
         << inDifference << ", " 
         << inOnlyOne << endl;

    return 0;
}

// Задача Да се напише програма, която получава 5 латински букви. Първите две от тях са в горен регистър (A-Z) и образуват множеството A, където A съдържа всички букви между въпросните две букви, включително самите тях. Вторите два символа в долен регистър (a-z) и образуват множеството B, където B съдържа всички букви между въпросните две, включително самите тях.

// Програмата да изведе без значение от регистрите:

// Дали 5-тата буква принадлежи на обединението на A и B
// Дали 5-тата буква принадлежи на сечението на A и B
// Дали 5-тата буква принадлежи на разликата на A с B
// Без да използвате допълнителни проверки (освен резултатите от 1., 2. и 3.) определете дали 5-тата буква принадлежи само в някое от множествата A или B.
// Пример:
// Вход:

// A E c e e
// Изход:

// true, true, false, false