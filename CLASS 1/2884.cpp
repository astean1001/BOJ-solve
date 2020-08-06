#include <stdio.h>

int main(void) {
    int h,m;
    scanf("%d %d", &h, &m);
    int t = h*60 + m - 45;
    if (t < 0) { t = 24*60 + t; }
    printf("%d %d\n", t/60, t%60);
}