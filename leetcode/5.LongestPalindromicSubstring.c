void getMaxLen(int* maxLen, char* s, int* relli, int li, int ri) {
    while(li >= 0 && ri < strlen(s) && s[li] == s[ri]) {
        --li;
        ++ri;
    }
    if (*maxLen < ri - li - 1) {
        *maxLen = ri - li - 1;
        *relli = li + 1;
    }
}


char* longestPalindrome(char* s) {
    int li = 0, ri = 0, relli = 0, maxLen = 0;
    
    if (strlen(s) < 2) return s;

    for (int i = 0; i < strlen(s) - 1; ++i) {
        getMaxLen(&maxLen, s, &relli, i, i);
        getMaxLen(&maxLen, s, &relli, i, i + 1);
    }
    
    s[relli + maxLen] = '\0';
    return s + relli;
}
