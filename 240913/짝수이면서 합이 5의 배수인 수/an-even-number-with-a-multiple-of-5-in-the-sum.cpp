#include <iostream>
using namespace std;

int is_number(int n) {
    int sumN = 0;
    while (n > 0) {
        sumN += n % 10;
        n = n / 10;
    }
    return sumN;
}

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0 && is_number(n) % 5 == 0) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}