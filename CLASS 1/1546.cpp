#include <stdio.h>

int main(void) {
    int a;
    scanf("%d",&a);
    int max = 0;
    double sum = 0;
    for(int i=0; i<a;i++) {
        int p;
        scanf("%d", &p);
        sum += p;
        if(p > max) { max = p; }
    }
    double avg = double(sum) / double(max) / double(a) * 100;
    printf("%f\n", avg);
}