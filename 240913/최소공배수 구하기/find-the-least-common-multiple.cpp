#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0 ) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int larger(int a, int b) {
    if (a > b) {
        return a*b / gcd(a, b);
    }
    else if (a < b) {
        return a*b / gcd(b, a);
    }
    else {
        return a;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << larger(n, m) <<"\n";
    return 0;
}