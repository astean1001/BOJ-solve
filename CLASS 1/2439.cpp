#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    for (int i=1; i<=a; i++) {
        for(int r=0; r<a-i; r++) {
            printf(" ");
        }
        for(int r=0; r<i; r++) {
            printf("*");
        }
        printf("\n");
    }
}