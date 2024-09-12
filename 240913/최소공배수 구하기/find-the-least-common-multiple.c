#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int r;
        r = a % b;
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
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d", larger(m, n));
    return 0;
}