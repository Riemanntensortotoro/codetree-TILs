#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n) {
    int i;
    if (n<2) return false;
    for (i=2; i<=sqrt(n); i++) {
        if (n%i==0) return false;
    }
    return true;
    
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int sumN = 0;
    int i;
    for (i=a; i<=b; i++) {
        if (is_prime(i)) {
            sumN += i;
        }
    }
    printf("%d", sumN);
    return 0;
}