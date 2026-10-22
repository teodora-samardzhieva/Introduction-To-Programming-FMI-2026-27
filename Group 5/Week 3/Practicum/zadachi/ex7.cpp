#include <iostream>
using namespace std;

int main(){
    
    double a,b,c;
    cin >> a >> b >> c;
    if((a+b)>c && (b+c)>a && (a+c)>b){
        cout << "true";
    } else {
        cout << "false";
    }
    
    return 0;
}

// Задача Да се напише програма, която получава 3 числа и да определи дали може да съществува триъгълник с толкова големи страни.

// Пример:
// Вход:

// 1 2 3
// Изход:

// false