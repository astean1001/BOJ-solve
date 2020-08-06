#include <stdio.h>
int main(void) {
    int check[42] = {0};
    int res = 0;
    for(int i=0;i<10;i++){
        int p;
        scanf("%d", &p);
        if(check[p%42] == 0) {
            res++;
            check[p%42] = 1;
        }
    }
    printf("%d\n",res);
}