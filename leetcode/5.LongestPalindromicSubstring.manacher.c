#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestPalindrome(char* s) {
    int len = strlen(s), maxLen = 0, mri = 0, mi = 0;
    char* t = (char *)malloc((len * 2 + 1) * sizeof(char));
    int *p = (int *)malloc((len * 2 + 1) * sizeof(int));
    for (int i = 0; i < len; ++i) {
        t[i * 2] = '#';
        t[i * 2 + 1] = s[i];
    }
    t[len * 2] = '#';
    
    for (int i = 0; i < len * 2 + 1; ++i) {
        int k = i - 1, j = i + 1, count = 1;

        if (i <= mri)  {
            count = p[2 * mi - i] > mri - i ? mri - i : p[2 * mi - i];
            k = i - count, j = i + count;
        }
        
        while (k >= 0 && j <= len * 2 && t[k] == t[j]) { --k, ++j, ++count;}

        p[i] = count;
        if (p[i] > maxLen) {
            maxLen = p[i];
            mi = i;
            mri = j - 1;
        }
    }

    char* rel = (char *)malloc(maxLen * sizeof(char));
    int k = 0;
    for (int i = mri - (maxLen - 1) * 2; i <= mri; ++i) {
        if (t[i] != '#') rel[k++] = t[i];
    }
    rel[k] = '\0';
    return rel;
}

int main() {
    char* s = "abacd";
    longestPalindrome(s);
}
