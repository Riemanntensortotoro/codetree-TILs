#include <stdio.h>

int gcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int result;
    result = gcd(n, m);
    printf("%d",result);
    return 0;
}