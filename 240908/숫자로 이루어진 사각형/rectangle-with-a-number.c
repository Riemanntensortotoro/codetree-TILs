#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int i, j;
    int K;
    for (i=0; i<N; i++) {
        for (j=1; j<=N; j++) {
            K = (i * N + j) % 9;
            if (K == 0) {
                K = 9;
            }
            printf("%d ", K);
        }
        printf("\n");
    }
    return 0;
}