#include <stdio.h>

int main(void) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int res = a*b*c;
    int freq[10] = {0};
    while(res != 0) {
        freq[res%10]++;
        res = res/10;
    }
    for(int i=0; i<=9; i++) {
        printf("%d\n",freq[i]);
    }
}