// Задача 5. Напишете програма, която чете число - диаметър на окръжност, и отпечатва нейните лице и обиколка(използвайте Pi=3.14).

// Вход:
//  10
// Изход:
//  Лице: 78.5
//  Обиколка: 31.4

#include <iostream>
using namespace std;

int main()
{
    int diameter;
    cin >> diameter;

    const double PI = 3.14;

    // Радиусът е равен на диаметъра разделен на 2
    double radius = diameter / 2.0;

    // Лице на кръг: S = PI * r * r
    double area = PI * radius * radius;

    // Обиколка на окръжност: P = PI * d (или 2 * PI * r)
    double perimeter = PI * diameter;

    cout << "Lice: " << area << endl;
    cout << "Obikolka: " << perimeter << endl;

    return 0;
}