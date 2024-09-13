#include <iostream>
#include <algorithm>
using namespace std;

int minValue(int a, int b, int c) {
    return min({a, b, c});
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << minValue(a, b, c);
    return 0;
}