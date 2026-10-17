// Задача 6. Напишете програма, която чете цяло число - брой секунди, и изчислява колко дни, часове, минути и секунди са.

// Вход:
//  533628
// Изход:
//  6 дена, 4 часа, 13 минути и 48 секунди

#include <iostream>

using namespace std;

int main() {
    long long totalSeconds;
    cin >> totalSeconds;

    // Константи за преобразуване на времето
    const long long SECONDS_IN_MINUTE = 60;
    const long long SECONDS_IN_HOUR = 3600; // 60 * 60
    const long long SECONDS_IN_DAY = 86400;  // 24 * 3600

    // Изчисляване на дни, часове, минути и оставащи секунди
    long long days = totalSeconds / SECONDS_IN_DAY;
    long long remainingSeconds = totalSeconds % SECONDS_IN_DAY;

    long long hours = remainingSeconds / SECONDS_IN_HOUR;
    remainingSeconds %= SECONDS_IN_HOUR;

    long long minutes = remainingSeconds / SECONDS_IN_MINUTE;
    long long seconds = remainingSeconds % SECONDS_IN_MINUTE;

    cout << days << " dena, " << hours << " chasa, " << minutes << " minuti i " << seconds << " sekundi" << endl;

    return 0;
}