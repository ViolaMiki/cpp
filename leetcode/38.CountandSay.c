char* countAndSay(int n) {
    char** temp = (char **)malloc(sizeof(char*) * n);
    if (n < 1) return temp[0];
    temp[0] = (char *)malloc(sizeof(char) * 10000);
    temp[0][0] = 1 + '0';
    temp[0][1] = '\0';
    if (n == 1) return temp[0];
    int ri = 1;

    for(int i = 1; i < n; ++i) {
        temp[i] = (char *)malloc(sizeof(char) * 10000);
        char sym = temp[i - 1][0];
        int count = 1, tempLen = ri;
        ri = 0;
        for (int j = 1; j < tempLen; j++) {
            if (temp[i - 1][j] == sym) ++count;
            else {
                temp[i][ri++] = count + '0';
                temp[i][ri++] = sym;
                sym = temp[i-1][j];
                count = 1;
            }
        }
        temp[i][ri++] = count + '0';
        temp[i][ri++] = sym;
        temp[i][ri] = '\0';
    }
    return temp[n - 1];
}
