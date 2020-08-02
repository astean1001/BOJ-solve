#include <stdio.h>

int main(void) {
    int r = 0;
    char m = ' ';
    char last = ' ';
    while (m != '\n'){
        if (m != ' ' && last == ' ') { r = r + 1; }
        last = m;
        m = getchar();
    }
    printf("%d\n", r);
}