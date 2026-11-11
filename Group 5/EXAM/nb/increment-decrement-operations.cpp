#include <iostream>

using namespace std;

int main() {
    int a = 2;

    cout << (++a)++; // 3
    cout << ++(a++); // lvalue required as increment operand
    cout << ++a++; // lvalue required as increment operand
    return 0;
}