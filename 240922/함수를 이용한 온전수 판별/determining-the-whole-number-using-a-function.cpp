#include <iostream>
using namespace std;

int countNunber(int a, int b) {
    int cnt = 0;
    for (int i=a; i<=b; i++) {
        if (i%2 == 0 || i%10 == 5 || (i%3 == 0 && i%9 != 0)) {
            cnt += 1;
        }
    }
    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;

    int result = countNunber(a, b);
    cout << b - a + 1 - result;
    return 0;
}