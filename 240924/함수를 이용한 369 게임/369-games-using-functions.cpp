#include <iostream>
using namespace std;
bool isNum(int n) {
    while (n > 0) {
        if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9) return true;
        n /= 10;
    }
    return false;
}
bool isThree(int n) {
    if (n % 3 == 0) return true;
    return false;
}

int main() {
    int a, b;
    cin >> a >> b;
    int result = 0;
    for (int i=a; i<=b; i++)
        if (isNum(i) || isThree(i)) result += 1;
    cout << result;
    return 0;
}