// 1. Опишете последователно какво ще изведе на екрана следният програмен фрагмент. Обосновете отговора си.
// for (int i = -10; i++; ) std::cout << i++-2 << ' ';

#include <iostream>

using namespace std;

int main() {
    for (int i = -10; i++; ) std::cout << i++-2 << ' ';
    return 0;
}