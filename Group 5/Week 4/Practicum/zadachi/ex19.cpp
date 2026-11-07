#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n, 0));

    int num = 1;
    int col = 0; 
    while (col < n) {
        if (col % 2 == 0) {
            for (int row = 0; row < n; row++) {
                matrix[row][col] = num++;
            }
        }    
        else {
            for (int row = n - 1; row >= 0; row--) {
                matrix[row][col] = num++;
            }
        }
        col++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Задача 19. Да се напише програма, която приема цяло положително число n и отпечатва числата от 1 до n*n в спираловиден вид.

// Пример:

// Вход:

// 3
// Изход:

// 1 6 7
// 2 5 8
// 3 4 9
// Вход:

// 4
// Изход:

// 1 8 9 16
// 2 7 10 15
// 3 6 11 14
// 4 5 12 13
