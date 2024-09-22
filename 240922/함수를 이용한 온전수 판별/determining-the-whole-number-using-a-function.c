#include <stdio.h>
#include <stdbool.h>

bool countNumber(int j) {
    if (j % 2 == 0) return false;
    if (j % 10 == 5) return false;
    if (j % 3 == 0 && j % 9 != 0) return false;
    return true;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = 0;
    int j;
    for (j=a; j<=b; j++) {
        if (countNumber(j)) {
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}