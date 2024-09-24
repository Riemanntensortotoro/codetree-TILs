#include <iostream>
#include <string>
using namespace std;

bool isLeapYear(int y) {
    if (y % 400 == 0) return true;
    if (y % 100 == 0) return false;
    return y % 4 == 0;
}

int daysInMonth(int y, int m) {
    if (m == 2) return isLeapYear(y) ? 29 : 28;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    return 31;
}

string getSeason(int m) {
    if (m == 3 || m == 4 || m == 5) return "Spring";
    if (m == 6 || m == 7 || m == 8) return "Summer";
    if (m == 9 || m == 10 || m == 11) return "Fall";
    return "Winter";
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    if (m < 1 || m > 12 || d < 1 || d > daysInMonth(y, m)) {
        cout << -1 << endl;
    } else {
        cout << getSeason(m) << endl;
    }
    return 0;
}