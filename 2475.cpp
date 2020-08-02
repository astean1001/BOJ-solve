#include <stdio.h>

int main(void) {
    int serial[5];
    int result = 0;
    for (int i=0; i<5; i++) {
        scanf("%d", &serial[0+i]);
        result = result + serial[0+i] * serial[0+i];
    }
    printf("%d\n", result%10);
}