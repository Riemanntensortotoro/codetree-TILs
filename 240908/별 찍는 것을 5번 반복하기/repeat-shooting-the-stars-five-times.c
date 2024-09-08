#include <stdio.h>

void Print5Stars() {
    int i;
    for (i=0; i<10; i++) {
        printf("*");
    }
    printf("\n");
}


int main() {
    int j;
    for (j=0; j<5; j++) {
        Print5Stars();
    }
    return 0;
}