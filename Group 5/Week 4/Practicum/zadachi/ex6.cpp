#include <iostream>
using namespace std;

int main(){

    int numN, numK;
    cin >> numN >> numK;

    int sum = numK;
    int numFromK = numK;

    if(!(numK >= 1 && numK <= 9)){
      cout << "Number K out of bounds";
      return 0;  
    } 

    for(int i = 1; i < numN; i++){
        numFromK = numFromK * 10 + numK;

        sum += numFromK;
    }

    cout << sum << endl;


    return 0;
}

// Задача 6. Да се напише програма, която прочита цяло число N и цяло число К (1 <= K <= 9) и пресмята сбора K + KK + KKK + ... + KKK...KK, където в последното събираемо K се среща N на брой пъти.

// При К = 1 -> 1 + 11 + 111 + ... + 111...11

// Пример:

// Вход:
// 4 2 -> 2 + 22 + 222 + 2222 = 2468
// Изход:
// 2468

// Вход:
// 2 1 -> 1 + 11 = 12
// Изход:
// 12