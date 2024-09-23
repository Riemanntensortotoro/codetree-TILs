#include <stdio.h>
#include <math.h>

int primeNumber(int n) {
    if (n <= 1) return 0;
    int value, i;
    value = (int)sqrt((double)n);
    for (i=2; i<=value; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int digitNum(int n) {
    int digitsum = 0, r;
    while(n > 0) {
        r = n % 10;
        digitsum += r;
        n /= 10;
    }
    return digitsum;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = 0, j;
    for (j=a; j<=b; j++) {
        if (primeNumber(j) == 1 && digitNum(j) % 2 == 0) {
            result += 1;
        }
    }
    printf("%d", result);
    return 0;
}