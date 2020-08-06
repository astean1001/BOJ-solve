#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int r = 1;
    int m = 1;
    while (true) {
        if(m >= n) { printf("%d\n", r); break;}
        m = m + 6*r;
        r = r + 1;
    }

}