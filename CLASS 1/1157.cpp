#include <stdio.h>
int main(void) {
    char c=' ';
    int freq[26] = {0};
    while(c != '\n') {
        c = getchar();
        if(int(c) > 96) { freq[int(c)-97]++; }
        else { freq[int(c)-65]++; }
    }
    int max = 0;
    int sec = 0;
    int maxidx = 0;
    int secidx = 0;
    for(int i=0; i<26;i++) {
        if(freq[i] >= max) { sec = max; secidx = maxidx; max = freq[i]; maxidx = i;}
        else if (freq[i] >= sec) { sec = freq[i]; secidx = i; }
        else {continue;}
    }
    if(sec == max) {printf("?\n");}
    else { printf("%c\n", char(maxidx+65)); }
}