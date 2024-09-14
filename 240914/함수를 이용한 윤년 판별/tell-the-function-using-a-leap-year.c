#include <stdio.h>
#include <stdbool.h>

bool yoonyear(int n) {
    if (n % 4 != 0) return false;
    else if (n % 100 != 0) return true;
    else if (n % 400 == 0) return true;
    return false;
}

int main() {
    int y;
    scanf("%d", &y);

    if (yoonyear(y)) {
        printf("true");
    }
    else {
        printf("false");
    }
    return 0;
}