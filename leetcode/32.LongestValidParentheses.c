int longestValidParentheses(char* s) {
    int count = 0, slen = strlen(s);
    int *p = (int *)malloc(sizeof(int) * slen);
    for (int i = 0; i < slen; ++i) {
        if (s[i] == '(') p[i] = 0;
        else {
            if ((i - 1 - p[i - 1]) >= 0 && s[i - 1 - p[i - 1]] == '(') {
                p[i] = p[i - 1] + 2;
            } else p[i] = 0;
            p[i] += p[i - p[i]];
            if (p[i] > count) count = p[i];
        }
    }
    return count;
}
