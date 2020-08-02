#include <stdio.h>

int main(void) {
    int a;
    int res = 0;
    scanf("%d",&a);
    getchar();
    for(int i=0;i<a;i++) {
        char c;
        c = getchar();
        res = res + int(c) - 48;
    }
    printf("%d",res);
}