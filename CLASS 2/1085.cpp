#include <stdio.h>

int main() {
    int x,y,w,h,ws,hs;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    if((w-x) > x) {ws = x;} else {ws = w-x;}
    if((h-y) > y) {hs = y;} else {hs = h-y;}
    if(ws > hs) {printf("%d\n", hs);}
    else {printf("%d\n", ws);}
}