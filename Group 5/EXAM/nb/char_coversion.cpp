#include <iostream>

using namespace std;

int main() {
    char ch = 'A';
    int code = 'A';

    cout << ch;   // Prints: A (because 'ch' is a char)
    cout << code; // Prints: 65 (because 'code' is an int, and 65 is the ASCII code for 'A')
    

    char upper = 'A';
    char lower = 'a';
    // 1. Convert A to a
    char a_from_A = upper + 32;
    cout << a_from_A << endl; // Prints: a
    // 2. Convert a to A
    char A_from_a = lower - 32;
    cout << A_from_a << endl; // Prints: A


    char ch = '@'; // ASCII code for '@' is 64
    // Method 1: Type casting directly in cout
    cout << (int)ch << endl; // Prints: 64
    // Method 2: Assigning to an int variable
    int asciiCode = ch;
    cout << asciiCode << endl; // Prints: 64


    int num = 64;
    // Type cast int to char
    cout << (char)num << endl; // Prints: @

    return 0;

}