#include <stdio.h>

int N;
void printString(int N);

int main() {
    scanf("%d", &N);

    printString(N);
    
    return 0;
}

void printString(int N) {
    int i;
    for (i = 0; i < N; i++) {
        printf("12345^&*()_\n");
    }
}