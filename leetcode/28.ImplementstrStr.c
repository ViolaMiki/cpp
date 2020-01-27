int strStr(char* haystack, char* needle) {
    int hl = strlen(haystack), nl = strlen(needle), temp;
    if (nl == 0) return 0;

    for (int i = 0; i < hl - nl + 1; ++i) {
        temp = i;
        for (int j = 0; j < nl; ++j) {
            if (haystack[temp] == needle[j]) {
                if (j == nl - 1) return i;
                else ++temp;
            }
            else break;
        }
    }
    return -1;
}
