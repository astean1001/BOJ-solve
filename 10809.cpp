#include <stdio.h>
#include <algorithm>

int main(void) {
    char c = ' ';
    int freq[26];
    std::fill_n(freq, 26, -1);
    int pos = 0;
    while (c != '\n') {
        c = getchar();
        if(freq[int(c)-97] == -1) {
            freq[int(c)-97] = pos;
        }
        pos++;
    }
    for(int i=0;i<26;i++) {
        printf("%d ", freq[i]);
    }
}