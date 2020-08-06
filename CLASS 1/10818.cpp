#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    int max = 0;
    int min = 0;
    for(int i=0; i<a; i++) {
        int p = 0;
        scanf("%d", &p);
        if (i == 0) { max = p; min = p; }
        if (p > max) { max = p; }
        if (p < min) { min = p; }
    }
    printf("%d %d\n", min, max);
}