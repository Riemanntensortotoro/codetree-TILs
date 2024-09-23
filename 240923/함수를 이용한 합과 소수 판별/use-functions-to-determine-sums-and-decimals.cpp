#include <iostream>
#include <cmath>

using namespace std;

bool primeNumber(int n) {
    if (n <= 1) return false;
    int value = sqrt(static_cast<double>(n));
    for (int i=2; i<=value; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int digitSum(int n) {
    int sunNum = 0;
    while(n != 0) {
        int r = n % 10;
        sunNum += r;
        n = n / 10;
    }
    return sunNum;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    int result = 0;
    for (int j=a; j<=b; j++) {
        if (primeNumber(j) && digitSum(j)%2==0) {
            result += 1;
        }
    }
    cout << result;
    return 0;
}