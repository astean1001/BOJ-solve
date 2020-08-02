#include <stdio.h>

int main(void) {
    int a;
    char g;
    scanf("%d", &a);
    if (a >= 90) {g = 'A';}
    else if (a >= 80) {g = 'B';}
    else if (a >= 70) {g = 'C';}
    else if (a >= 60) {g = 'D';}
    else {g = 'F';}
    printf("%c\n", g);
}