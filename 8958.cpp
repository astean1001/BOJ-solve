#include <stdio.h>

int main(void) {
    int a;
    scanf("%d",&a);
    getchar();
    for(int i=0;i<a;i++) {
        char c = ' ';
        int streak = 1;
        int res = 0;
        while(c != '\n') {
            c = getchar();
            if(c == 'O') { res+=streak; streak++; }
            else { streak = 1;}
        }
        printf("%d\n", res);
    }
}