#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        int t;
        scanf("%d", &t);
        char c = ' ';
        while(c != '\n') {
            c = getchar();
            if( c == ' ' || c == '\n') {
                continue;
            }
            for(int s=0;s<t;s++){
                printf("%c",c);
            }
        }
        printf("\n");
    }

}