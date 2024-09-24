#include <stdio.h>

int isNum(int n) {
    while(n > 0) {
        if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9) return 1;
        n /= 10;
    }
    return 0;
}

int isThree(int n) {
    if (n % 3 == 0) return 1;
    return 0;
}

int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);
    int result = 0;
    for (i=a; i<=b; i++) {
        if (isNum(i) == 1 || isThree(i) == 1) {
            result += 1;
        } 
    }
    printf("%d", result);
    return 0;
}