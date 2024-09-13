#include <stdio.h>

int is_number(int n) {
    int sumN = 0;
    while (n > 0) {
        sumN += n % 10;
        n /= 10;
    }
    return sumN;
}

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0 && is_number(n) % 5 == 0) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}