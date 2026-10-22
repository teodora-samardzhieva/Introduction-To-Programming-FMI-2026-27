#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    double a,b;
    cin >> a >> b;

    double plus = a + b;
    double minus = a - b;
    double multiply = a * b;
    double division = a / b;

    
    cout << max({plus, minus, multiply, division}) << endl;
    

    // if(plus > minus && plus > multiply && plus > division){
    //     cout << plus;
    // } else if(minus > plus && minus > multiply && minus > division){
    //     cout << minus;
    // } else if (multiply > plus && multiply > minus && multiply > division){
    //     cout << multiply;
    // } else {
    //     cout << division;
    // }

    return 0;
}

// Задача Напишете програма, която получава две числа от конзолата и връща най-голямата възможна стойност от следните математически операции с тях: събиране, изваждане, умножение или деление.

// Пример:
// Вход:

// 2 6
// Изход:

// 12