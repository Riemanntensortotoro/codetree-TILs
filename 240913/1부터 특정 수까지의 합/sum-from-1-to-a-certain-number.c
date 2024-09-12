#include <stdio.h>

int sumNum(int N) {
    int sumN = 0;
    for (int i=1; i<=N; i++) {
        sumN += i;
    }
    return sumN;
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d", sumNum(N)/10);

    return 0;
}