#include <stdio.h>
int main(void) {
    int t = 0;
    int prev = 0;
    for(int i=0; i<8;i++) {
        int p;
        scanf("%d", &p);
        if(i==0) { prev = p; }
        else {
            if(prev < p && t == 0) { t = 1;}
            else if (prev > p && t == 0) {t = 2;}
            else if (prev < p && t == 1) {t = 1;}
            else if (prev > p && t == 1) {t = 3;}
            else if (prev < p && t == 2) {t = 3;}
            else if (prev > p && t == 2) {t = 2;}
            else {t = 3;}
        }
        prev = p;
    }
    if(t == 1) {printf("ascending\n");}
    if(t == 2) {printf("descending\n");}
    if(t == 3) {printf("mixed\n");}
}