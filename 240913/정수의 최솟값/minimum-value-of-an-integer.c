#include <stdio.h>

int minValue(int a, int b, int c) {
    int min;
    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", minValue(a, b, c));
    return 0;
}