#include <stdio.h>

int main(void) {
    int a, m;
    scanf("%d %d", &a, &m);
    for(int i=0; i<a;i++) {
        int p;
        scanf("%d", &p);
        if(p < m) { printf("%d ", p); }
    }
}