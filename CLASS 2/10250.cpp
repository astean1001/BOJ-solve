#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=0; i<t;i++) {
        int h,w,n;
        scanf("%d %d %d",&h,&w,&n);
        int floor = n%h;
        int ho = n/h + 1;
        if(floor == 0) { floor = h; ho = n/h; }
        if (ho < 10) {printf("%d0%d\n",floor,ho);}
        else {printf("%d%d\n",floor,ho);}
    }   
}