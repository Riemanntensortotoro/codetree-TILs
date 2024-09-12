#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int m, n;
    cin >> m >> n;
    int result = gcd(n, m);
    cout << result <<"\n";
    return 0;
}