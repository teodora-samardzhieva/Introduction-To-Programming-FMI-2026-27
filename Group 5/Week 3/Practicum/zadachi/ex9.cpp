#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num == 100) {
        cout << "one hundred" << endl;
    } 
    else if (num == 0) {
        cout << "zero" << endl;
    } 
    else {
        int tens = num / 10;
        int units = num % 10;

        // Handle numbers from 10 to 19 separately
        if (num >= 10 && num <= 19) {
            if (num == 10) cout << "ten";
            else if (num == 11) cout << "eleven";
            else if (num == 12) cout << "twelve";
            else if (num == 13) cout << "thirteen";
            else if (num == 14) cout << "fourteen";
            else if (num == 15) cout << "fifteen";
            else if (num == 16) cout << "sixteen";
            else if (num == 17) cout << "seventeen";
            else if (num == 18) cout << "eighteen";
            else if (num == 19) cout << "nineteen";
        } 
        else {

            if (tens == 2) cout << "twenty";
            else if (tens == 3) cout << "thirty";
            else if (tens == 4) cout << "forty";
            else if (tens == 5) cout << "fifty";
            else if (tens == 6) cout << "sixty";
            else if (tens == 7) cout << "seventy";
            else if (tens == 8) cout << "eighty";
            else if (tens == 9) cout << "ninety";

            // If there are both tens and units, print a space before the units
            if (tens > 0 && units > 0) {
                cout << " ";
            }

            if (units == 1) cout << "one";
            else if (units == 2) cout << "two";
            else if (units == 3) cout << "three";
            else if (units == 4) cout << "four";
            else if (units == 5) cout << "five";
            else if (units == 6) cout << "six";
            else if (units == 7) cout << "seven";
            else if (units == 8) cout << "eight";
            else if (units == 9) cout << "nine";
        }
        cout << endl;
    }

    return 0;
}

// Задача Да се напише програма, която получава число в интервала 0-100 и изписва на конзолата неговата стойност под формата на текст. (английски за предпочитане пред шльокавица)

// Пример:
// Вход:
// 21

// Изход:
// twenty one