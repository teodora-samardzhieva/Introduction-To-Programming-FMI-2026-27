#include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

bool hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int arr[] = {5, 4, 30, 2, 3, 10, 11};
    // 7 x 8byte = 56     56 / 8byte = 7 
    int size = sizeof(arr) / sizeof(arr[0]); // 7

    printArray(arr, size);

    std::cout << std::boolalpha << hasDuplicates(arr, size) << std::endl;

    return 0;
}
