#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i=N; i>0; i--) {
        for (int j=N-i; j>0; j--)
            printf(" ");
        for (int k=i; k>0; k--)
            printf("*");
        printf("\n");
    }
}