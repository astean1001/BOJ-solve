#include <stdio.h>

int main() {
    int m;
    scanf("%d",&m);
    for(int i=1;i<=1000054;i++) {
        int s = i;
        int res = i;
        while(s > 0) {
            res = res + s%10;
            s = s/10;
        }
        if(res == m) {
            printf("%d\n",i);
            return 0;
        }
    }
    printf("0\n");
}