#include <stdio.h>

int add(int a, int c) {
    return a + c;
}

int subtract(int a, int c) {
    return a - c;
}

int multiply(int a, int c) {
    return a * c;
}

int divide(int a, int c) {
    return a / c;
}

int main() {
    int a, c, result;
    char o;
    scanf("%d %c %d", &a, &o, &c);
    
    if (o == '+') {
        result = add(a, c);
        printf("%d %c %d = %d", a, o, c, result);
    }
    else if (o == '-') {
        result = subtract(a, c);
        printf("%d %c %d = %d", a, o, c, result);
    }
    else if (o == '*') {
        result = multiply(a, c);
        printf("%d %c %d = %d", a, o, c, result);
    }
    else if (o == '/') {
        result = divide(a, c);
        printf("%d %c %d = %d", a, o, c, result);
    }

    else {
        printf("False");
    }
    return 0;
}