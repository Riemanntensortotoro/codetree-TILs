#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int i, result = 1;
    for (i=0; i<b; i++) {
        result *= a;
    }
    printf("%d", result);
    return 0;
}