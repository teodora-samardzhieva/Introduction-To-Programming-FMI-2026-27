#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num;
    cin >> num;

    if(num <= 1) {
        cout << 0;
    }

    bool isPrime = true;
    // sqrt(num) или i*i <= num
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            isPrime = false; // намерихме делител => спираме
            break;
        }
    }

    cout << isPrime;


    return 0;
}

// Задача 0. Да се напише програма, която чете цяло число от конзолата и изписва дали е просто или не на конзолата.

// Пример

// Вход:
// 17
// Изход:
// 1

// Вход:
// 12
// Изход:
// 0