#include <stdio.h>

int main(void) {
    int max = 0;
    int maxindex = 0;
    for (int i=1;i<=9;i++) {
        int p;
        scanf("%d", &p);
        if(p > max) {
            max = p;
            maxindex = i;
        }
    }
    printf("%d\n%d\n",max,maxindex);
}